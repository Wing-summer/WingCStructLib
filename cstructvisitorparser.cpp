#include "cstructvisitorparser.h"

#include "c/CStructLexer.h"
#include "ctypeparser.h"

CStructVisitorParser::CStructVisitorParser(CTypeParser *container)
    : parser(container) {
    Q_ASSERT(parser);
}

std::any CStructVisitorParser::visitEnumSpecifier(
    CStructParser::EnumSpecifierContext *ctx) {
    auto e = parseEnum(ctx);
    if (e) {
        parser->enum_defs_.insert(e->first, e->second);
    }
    return defaultResult();
}

std::any CStructVisitorParser::visitInclusiveOrExpression(
    CStructParser::InclusiveOrExpressionContext *ctx) {
    qulonglong ret = 0;
    for (auto &v : ctx->exclusiveOrExpression()) {
        auto r = visitExclusiveOrExpression(v);
        if (r.type() == typeid(qulonglong)) {
            auto rr = std::any_cast<qulonglong>(r);
            ret |= rr;
        } else {
            // error
            return defaultResult();
        }
    }
    return ret;
}

std::any CStructVisitorParser::visitAssignmentExpression(
    CStructParser::AssignmentExpressionContext *ctx) {
    if (ctx->IntegerConstant()) {
        auto v = parseIntegerConstant(ctx->IntegerConstant()->getText());
        if (v) {
            return v.value();
        } else {
            return defaultResult();
        }
    } else if (ctx->inclusiveOrExpression()) {
        return visitInclusiveOrExpression(ctx->inclusiveOrExpression());
    }

    return defaultResult();
}

std::any CStructVisitorParser::visitExclusiveOrExpression(
    CStructParser::ExclusiveOrExpressionContext *ctx) {
    quint64 v = 0;
    for (auto &ex : ctx->andExpression()) {
        auto r = visitAndExpression(ex);
        if (r.type() == typeid(qint64)) {
            auto rv = std::any_cast<qint64>(r);
            v ^= rv;
        } else if (r.type() == typeid(quint64)) {
            auto rv = std::any_cast<quint64>(r);
            v ^= rv;
        } else {
            return defaultResult();
        }
    }

    return v;
}

std::optional<qint64>
CStructVisitorParser::parseIntegerConstant(const std::string &text) {
    auto txt = QByteArray::fromStdString(text);

    if (txt.size() >= 3 && txt.front() == '\'' && txt.back() == '\'') {
        auto inner = txt.sliced(1, text.size() - 2);

        if (inner.size() == 1) {
            return inner[0];
        } else if (inner[0] == '\\') {
            if (inner.length() == 4) {
                if (std::all_of(std::next(inner.begin()), inner.end(),
                                [](const QChar &ch) {
                                    auto num = ch.toLatin1();
                                    return num >= '0' && num < '8';
                                })) {
                    auto toNum = [](const QChar &num) {
                        return num.toLatin1() - '0';
                    };
                    return toNum(inner[1]) * 64 + toNum(inner[2]) * 8 +
                           toNum(inner[3]);
                }
            } else {
                static QHash<QByteArray, char> buffer{
                    {R"(\n)", '\n'}, {R"(\t)", '\t'}, {R"(\0)", '\0'},
                    {R"(\\)", '\\'}, {R"(\')", '\''}, {R"(\")", '"'},
                    {R"(\?)", '\?'}, {R"(\a)", '\a'}, {R"(\b)", '\b'},
                    {R"(\f)", '\f'}, {R"(\r)", '\r'}, {R"(\v)", '\v'}};

                if (buffer.contains(inner)) {
                    return buffer.value(inner);
                }

                auto n = inner[1];
                if (n == 'x' || n == 'X' || n == 'b' || n == 'B') {
                    bool b = false;
                    auto v = inner.toLongLong(&b, 0);
                    if (b) {
                        return v;
                    }
                }
            }
        }
    } else {
        qsizetype i = 0;
        for (i = txt.size(); i > 0; --i) {
            if (QChar::isLetter(txt[i - 1]))
                continue;
            break;
        }
        auto numberPart = txt.sliced(0, i);
        bool b = false;
        auto v = numberPart.toLongLong(&b);
        if (b) {
            return v;
        }
    }

    return std::nullopt;
}

bool CStructVisitorParser::isInteger(const QString &text) {
    if (parser->enum_defs_.contains(text)) {
        return true;
    }

    auto type = parser->type(text);
    switch (type.first) {
    case QMetaType::Int:
    case QMetaType::UInt:
    case QMetaType::LongLong:
    case QMetaType::ULongLong:
    case QMetaType::Long:
    case QMetaType::Short:
    case QMetaType::Char:
    case QMetaType::Char16:
    case QMetaType::Char32:
    case QMetaType::ULong:
    case QMetaType::UShort:
    case QMetaType::UChar:
    case QMetaType::SChar:
    case QMetaType::QChar:
        return true;
    default:
        return false;
    }
}

std::any CStructVisitorParser::visitAndExpression(
    CStructParser::AndExpressionContext *ctx) {
    quint64 v = std::numeric_limits<quint64>::max();
    for (auto &ex : ctx->shiftExpression()) {
        auto r = visitShiftExpression(ex);
        if (r.type() == typeid(qint64)) {
            auto rv = std::any_cast<qint64>(r);
            v &= rv;
        } else if (r.type() == typeid(quint64)) {
            auto rv = std::any_cast<quint64>(r);
            v &= rv;
        } else {
            return defaultResult();
        }
    }
    return v;
}

std::any CStructVisitorParser::visitShiftExpression(
    CStructParser::ShiftExpressionContext *ctx) {
    auto data = ctx->additiveExpression();
    auto total = data.size();

    quint64 ret = 0;
    auto retv = visitAdditiveExpression(data.front());
    if (retv.type() == typeid(qint64)) {
        ret = std::any_cast<qint64>(retv);
    } else if (retv.type() == typeid(quint64)) {
        ret = std::any_cast<quint64>(retv);
    } else {
        return defaultResult();
    }

    for (size_t i = 1; i < total; ++i) {
        auto op = ctx->children[2 * i - 1]->getText();
        auto r = visitAdditiveExpression(data.at(i));
        if (op == "<<") {
            if (r.type() == typeid(qint64)) {
                auto rv = std::any_cast<qint64>(r);
                ret <<= rv;
            } else if (r.type() == typeid(quint64)) {
                auto rv = std::any_cast<quint64>(r);
                ret <<= rv;
            } else {
                return defaultResult();
            }
        } else if (op == ">>") {
            if (r.type() == typeid(qint64)) {
                auto rv = std::any_cast<qint64>(r);
                ret >>= rv;
            } else if (r.type() == typeid(quint64)) {
                auto rv = std::any_cast<quint64>(r);
                ret >>= rv;
            } else {
                return defaultResult();
            }
        } else {
            return defaultResult();
        }
    }

    return ret;
}

std::any CStructVisitorParser::visitAdditiveExpression(
    CStructParser::AdditiveExpressionContext *ctx) {
    auto data = ctx->multiplicativeExpression();
    auto total = data.size();

    quint64 ret = 0;
    auto retv = visitMultiplicativeExpression(data.front());
    if (retv.type() == typeid(qint64)) {
        ret = std::any_cast<qint64>(retv);
    } else if (retv.type() == typeid(quint64)) {
        ret = std::any_cast<quint64>(retv);
    } else {
        return defaultResult();
    }

    for (size_t i = 1; i < total; i++) {
        auto r = visitMultiplicativeExpression(data.at(i));
        auto op = ctx->children[2 * i - 1]->getText();
        if (r.type() == typeid(qint64)) {
            auto rv = std::any_cast<qint64>(r);
            if (op == "+") {
                ret += rv;
            } else if (op == "-") {
                ret -= rv;
            } else {
                return defaultResult();
            }
        } else if (r.type() == typeid(quint64)) {
            auto rv = std::any_cast<quint64>(r);
            if (op == "+") {
                ret += rv;
            } else if (op == "-") {
                ret -= rv;
            } else {
                return defaultResult();
            }
        } else {
            return defaultResult();
        }
    }

    return ret;
}

std::any CStructVisitorParser::visitMultiplicativeExpression(
    CStructParser::MultiplicativeExpressionContext *ctx) {
    auto data = ctx->castExpression();
    auto total = data.size();

    quint64 ret = 0;
    auto retv = visitCastExpression(data.front());
    if (retv.type() == typeid(qint64)) {
        ret = std::any_cast<qint64>(retv);
    } else if (retv.type() == typeid(quint64)) {
        ret = std::any_cast<quint64>(retv);
    } else {
        return defaultResult();
    }

    for (size_t i = 1; i < total; i++) {
        auto r = visitCastExpression(data.at(i));
        auto op = ctx->children[2 * i - 1]->getText();
        if (r.type() == typeid(qint64)) {
            auto rv = std::any_cast<qint64>(r);
            if (op == "*") {
                ret *= rv;
            } else if (op == "/") {
                ret /= rv;
            } else if (op == "%") {
                ret %= rv;
            } else {
                return defaultResult();
            }
        } else if (r.type() == typeid(quint64)) {
            auto rv = std::any_cast<quint64>(r);
            if (op == "*") {
                ret *= rv;
            } else if (op == "/") {
                ret /= rv;
            } else if (op == "%") {
                ret %= rv;
            } else {
                return defaultResult();
            }
        } else {
            return defaultResult();
        }
    }

    return ret;
}

std::any CStructVisitorParser::visitCastExpression(
    CStructParser::CastExpressionContext *ctx) {
    if (ctx->IntegerConstant()) {
        auto r = parseIntegerConstant(ctx->IntegerConstant()->getText());
        if (r) {
            return r;
        }
    } else if (ctx->castExpression()) {
        auto tname = QString::fromStdString(ctx->typeName()->getText());
        quint64 mask = 0;
        if (parser->base_types_.contains(tname)) {
            auto size = parser->type_maps_.value(tname).second;
            switch (size) {
            case sizeof(quint8):
                mask = std::numeric_limits<quint8>::max();
                break;
            case sizeof(quint16):
                mask = std::numeric_limits<quint16>::max();
                break;
            case sizeof(quint32):
                mask = std::numeric_limits<quint32>::max();
                break;
            case sizeof(quint64):
                mask = std::numeric_limits<quint64>::max();
                break;
            default:
                return defaultResult();
            }
        } else {
            if (!parser->enum_defs_.contains(tname)) {
                return defaultResult();
            }
            mask = std::numeric_limits<quint64>::max();
        }

        auto r = visitCastExpression(ctx->castExpression());
        if (r.has_value()) {
            if (r.type() == typeid(qint64)) {
                auto v = std::any_cast<qint64>(r);
                return v & mask;
            } else if (r.type() == typeid(quint64)) {
                auto v = std::any_cast<quint64>(r);
                return v & mask;
            }
        }
    } else if (ctx->unaryExpression()) {
        return visitUnaryExpression(ctx->unaryExpression());
    }

    return defaultResult();
}

std::any CStructVisitorParser::visitUnaryExpression(
    CStructParser::UnaryExpressionContext *ctx) {
    auto minCount = ctx->MinusMinus().size();
    auto addCount = ctx->PlusPlus().size();
    auto leftCount = addCount - minCount;

    if (ctx->postfixExpression()) {
        return visitPostfixExpression(ctx->postfixExpression());
    } else {
        auto op = ctx->unaryOperator();
        auto r = visitCastExpression(ctx->castExpression());
        if (r.type() == typeid(quint64)) {
            auto v = std::any_cast<quint64>(r);
            if (op->Minus()) {
                return -v + leftCount;
            } else if (op->Plus()) {
                return +v + leftCount;
            } else if (op->Tilde()) {
                return ~v + leftCount;
            } else {
                return defaultResult();
            }
        } else if (r.type() == typeid(qint64)) {
            auto v = std::any_cast<qint64>(r);
            if (op->Minus()) {
                return -v + leftCount;
            } else if (op->Plus()) {
                return +v + leftCount;
            } else if (op->Tilde()) {
                return ~v + leftCount;
            } else {
                return defaultResult();
            }
        }
    }

    return visitChildren(ctx);
}

std::any CStructVisitorParser::visitPostfixExpression(
    CStructParser::PostfixExpressionContext *ctx) {
    auto r = visitPrimaryExpression(ctx->primaryExpression());

    auto minCount = ctx->MinusMinus().size();
    auto addCount = ctx->PlusPlus().size();
    auto leftCount = addCount - minCount;

    if (r.type() == typeid(quint64)) {
        auto v = std::any_cast<quint64>(r);
        v += leftCount;
        return v;
    } else if (r.type() == typeid(qint64)) {
        auto v = std::any_cast<qint64>(r);
        v += leftCount;
        return v;
    } else {
        return defaultResult();
    }
}

std::any CStructVisitorParser::visitPrimaryExpression(
    CStructParser::PrimaryExpressionContext *ctx) {
    if (ctx->IntegerConstant()) {
        auto r = parseIntegerConstant(ctx->IntegerConstant()->getText());
        if (r) {
            return r.value();
        }
    } else if (ctx->Identifier()) {
        auto vname = QString::fromStdString(ctx->Identifier()->getText());
        if (parser->const_defs_.contains(vname)) {
            return parser->const_defs_.value(vname);
        }
    } else if (ctx->assignmentExpression()) {
        return visitAssignmentExpression(ctx->assignmentExpression());
    } else if (ctx->SizeOf()) {
        auto type = ctx->specifierQualifierList();
        auto spec = getSpecifier(type);
        if (spec) {
            return parser->getTypeSize(spec->tname);
        } else {
            return 0;
        }
    }

    return defaultResult();
}

std::any CStructVisitorParser::visitStructOrUnionSpecifier(
    CStructParser::StructOrUnionSpecifierContext *ctx) {
    auto decl = parseStructOrUnion(ctx);
    if (decl) {
        if (!decl->name.isEmpty()) {
            parser->storeStructUnionDef(decl->isStruct, decl->name,
                                        decl->members);
        }
    }
    return defaultResult();
}

std::any
CStructVisitorParser::visitDefineDecl(CStructParser::DefineDeclContext *ctx) {
    std::string def;

    if (ctx->DirectiveDefine()) {
        def = ctx->DirectiveDefine()->getText();
    } else if (ctx->MultiLineMacroDefine()) {
        def = ctx->MultiLineMacroDefine()->getText();

        size_t pos = 0;
        constexpr auto es = "\\\n";
        constexpr auto esLen = std::char_traits<char>::length(es);
        auto strp = def.find(es);
        while (strp != std::string::npos) {
            def.replace(strp, esLen, es);
            strp += esLen;
            strp = def.find(es, strp);
        }
    }

    constexpr auto prefixLen = std::char_traits<char>::length("#define");
    antlr4::ANTLRInputStream input(def.data() + prefixLen,
                                   def.length() - prefixLen);
    CStructLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    tokens.fill();
    auto ts = tokens.getTokens();
    auto identifer = ts.front()->getText();

    tokens.consume(); // remove the first token

    CStructVisitorParser visitor(parser);
    CStructParser parser(&tokens);

    auto ret = visitor.visit(parser.assignmentExpressionDef());
    if (ret.type() == typeid(quint64)) {
        this->parser->const_defs_.insert(QString::fromStdString(identifer),
                                         std::any_cast<quint64>(ret));
    } else if (ret.type() == typeid(qint64)) {
        this->parser->const_defs_.insert(QString::fromStdString(identifer),
                                         std::any_cast<qint64>(ret));
    }

    return defaultResult();
}

std::any CStructVisitorParser::visitAssignmentExpressionDef(
    CStructParser::AssignmentExpressionDefContext *ctx) {
    if (ctx->assignmentExpression()) {
        return visitAssignmentExpression(ctx->assignmentExpression());
    }

    return defaultResult();
}

std::any CStructVisitorParser::visitExternalDeclaration(
    CStructParser::ExternalDeclarationContext *ctx) {
    // if (ctx->Typedef()) {
    //     // TODO
    //     return defaultResult();
    // } else {
    return visitChildren(ctx);
    // }
}

QString CStructVisitorParser::getFinalDeclaratorName(
    CStructParser::DirectDeclaratorContext *ctx) {
    while (ctx) {
        if (ctx->Identifier()) {
            return QString::fromStdString(ctx->Identifier()->getText());
        } else if (ctx->declarator()) {
            ctx = ctx->declarator()->directDeclarator();
            continue;
        }
        ctx = ctx->directDeclarator();
    }
    return {};
}

std::optional<CStructVisitorParser::Declarator>
CStructVisitorParser::getDeclarator(
    CStructParser::DirectDeclaratorContext *ctx) {
    if (!ctx) {
        return std::nullopt;
    }

    Declarator dor;

    if (ctx->Identifier()) {
        // Identifier only
        dor.retName = QString::fromStdString(ctx->Identifier()->getText());
        // if (ctx->Colon()) {
        //     // bit field
        //     dor.bitField =
        //         parseIntegerConstant(ctx->IntegerConstant()->getText()).value();
        // }
    } else if (ctx->declarator()) {
        auto d = ctx->declarator();

        // only pointer in the first level is valid member in struct
        if (d->pointer()) {
            dor.retName = getFinalDeclaratorName(d->directDeclarator());
            dor.isPointer = true;
        } else {
            return std::nullopt;
        }
    } else if (ctx->assignmentExpression()) {
        // array
        auto r = visitAssignmentExpression(ctx->assignmentExpression());
        if (r.type() == typeid(quint64)) {
            auto v = std::any_cast<quint64>(r);
            dor.arrayCount = v;
        } else if (r.type() == typeid(qint64)) {
            auto v = std::any_cast<qint64>(r);
            dor.arrayCount = v;
        } else {
            return std::nullopt;
        }
        dor.next = ctx->directDeclarator();
    } else {
        // function pointer
        dor.isPointer = true;
        dor.isFunctionPtr = true;
        dor.retName = getFinalDeclaratorName(ctx);
    }

    return dor;
}

std::optional<CStructVisitorParser::Specifier>
CStructVisitorParser::getSpecifier(
    CStructParser::SpecifierQualifierListContext *ctx) {
    if (!ctx) {
        return std::nullopt;
    }

    Specifier sq;

    auto spec = ctx->typeSpecifier();
    if (spec->Void()) {
        sq.type = StructMemType::Normal;
        sq.tname = QStringLiteral("void");
    } else if (spec->internalBasicTypes()) {
        auto btype = spec->internalBasicTypes();
        sq.type = StructMemType::Normal;

        if (btype->Char()) {
            sq.tname = QStringLiteral("char");

            auto sous = btype->signOrUnsigned();
            if (sous) {
                if (sous->Unsigned()) {
                    sq.tname = QStringLiteral("uchar");
                }
            }
        } else if (btype->Short()) {
            sq.tname = QStringLiteral("short");

            auto sous = btype->signOrUnsigned();
            if (sous) {
                if (sous->Unsigned()) {
                    sq.tname = QStringLiteral("ushort");
                }
            }
        } else if (btype->Int()) {
            sq.tname = QStringLiteral("int");

            auto sous = btype->signOrUnsigned();
            if (sous) {
                if (sous->Unsigned()) {
                    sq.tname = QStringLiteral("uint");
                }
            }
        } else if (btype->Float()) {
            sq.tname = QStringLiteral("float");
        } else if (btype->Double()) {
            sq.tname = QStringLiteral("double");
        } else {
            // for long or longlong
            auto len = btype->Long().size();
            auto sous = btype->signOrUnsigned();
            if (sous) {
                switch (len) {
                case 1:
                    sq.tname = QStringLiteral("long");
                    break;
                case 2:
                    sq.tname = QStringLiteral("longlong");
                    break;
                default:
                    return std::nullopt;
                }
            } else {
                switch (len) {
                case 1:
                    sq.tname = QStringLiteral("ulong");
                    break;
                case 2:
                    sq.tname = QStringLiteral("ulonglong");
                    break;
                default:
                    return std::nullopt;
                }
            }
        }
    } else if (spec->Identifier()) {
        sq.type = StructMemType::Normal;
        sq.tname = QString::fromStdString(spec->Identifier()->getText());
    } else if (spec->enumSpecifier()) {
        auto es = spec->enumSpecifier();
        if (es->enumeratorList()) {
            sq.type = StructMemType::Enum;
            // I won't use enum type name declared
            // TODO
        } else {
            return std::nullopt;
        }
    } else if (spec->structOrUnionSpecifier()) {
        auto sus = spec->structOrUnionSpecifier();
        if (sus->structDeclarationList()) {
            sq.type = sus->structOrUnion()->Struct() ? StructMemType::Struct
                                                     : StructMemType::Union;

            // sq.tname = "";
            // I won't use struc or union type name declared
            // in struct or union
            // parse struct and get the internal name
            // TODO

        } else {
            return std::nullopt;
        }
    } else {
        return std::nullopt;
    }

    return sq;
}

std::optional<CStructVisitorParser::StructUnionDecl>
CStructVisitorParser::parseStructOrUnion(
    CStructParser::StructOrUnionSpecifierContext *ctx) {

    StructUnionDecl decl;
    decl.isStruct = ctx->structOrUnion()->Struct();

    auto mems = ctx->structDeclarationList();
    if (!mems) {
        return std::nullopt;
    }

    if (ctx->Identifier()) {
        decl.name = QString::fromStdString(ctx->Identifier()->getText());
    }

    for (auto &m : mems->structDeclaration()) {
        auto dl = getSpecifier(m->specifierQualifierList());
        auto t = parser->type(dl->tname);

        auto dclist = m->structDeclaratorList();
        if (dclist) {
            for (auto &sub : dclist->structDeclarator()) {
                VariableDeclaration var;
                var.data_type = dl->tname;

                auto declor = sub->declarator();
                if (declor) {
                    // bit field
                    if (sub->Colon()) {
                        if (!isInteger(dl->tname)) {
                            return std::nullopt;
                        }

                        auto bits = visitAssignmentExpression(
                            sub->assignmentExpression());
                        if (bits.type() == typeid(quint64)) {
                            auto b = std::any_cast<quint64>(bits);
                            var.bit_size = b;
                        } else if (bits.type() == typeid(qint64)) {
                            auto b = std::any_cast<qint64>(bits);
                            var.bit_size = b;
                        } else {
                            return std::nullopt;
                        }
                    }

                    auto d = declor->directDeclarator();
                    if (declor->pointer() && !sub->Colon()) {
                        var.is_pointer = true;
                        var.var_name = getFinalDeclaratorName(d);
                        var.var_size = parser->pointerMode() == PointerMode::X64
                                           ? sizeof(quint64)
                                           : sizeof(quint32);
                        decl.members.append(var);
                    } else {
                        if (t.first == QMetaType::UnknownType) {
                            return std::nullopt;
                        }

                        auto info = getDeclarator(d);
                        var.is_pointer = info->isPointer;
                        if (info) {
                            if (info->arrayCount == 0) {
                                var.array_dims.clear();

                                continue; // no nessesary to deep parse
                            }
                            auto nestedInfo = getDeclarator(info->next);

                            QVector<size_t> dims;
                            dims.append(info->arrayCount);

                            if (nestedInfo) {
                                while (nestedInfo &&
                                       nestedInfo->arrayCount > 1 &&
                                       nestedInfo->next) {
                                    dims.prepend(nestedInfo->arrayCount);
                                    nestedInfo =
                                        getDeclarator(nestedInfo->next);
                                }
                                var.var_name = getFinalDeclaratorName(d);
                                var.array_dims = dims;
                                var.var_size =
                                    t.second *
                                    std::accumulate(dims.begin(), dims.end(),
                                                    size_t(1),
                                                    std::multiplies<size_t>());
                                decl.members.append(var);
                            } else {
                                var.var_name = info->retName;
                                var.var_size = t.second;
                                decl.members.append(var);
                            }
                        } else {
                            return std::nullopt;
                        }
                    }
                } else {
                    // must be bit field
                    var.var_name.clear();

                    auto bits =
                        visitAssignmentExpression(sub->assignmentExpression());
                    if (bits.type() == typeid(quint64)) {
                        auto b = std::any_cast<quint64>(bits);
                        var.bit_size = b;
                    } else if (bits.type() == typeid(qint64)) {
                        auto b = std::any_cast<qint64>(bits);
                        var.bit_size = b;
                    }

                    var.var_size = t.second;
                    decl.members.append(var);
                }
            }
        }
    }

    return decl;
}

std::optional<CStructVisitorParser::EnumDecl>
CStructVisitorParser::parseEnum(CStructParser::EnumSpecifierContext *ctx) {
    auto name = ctx->Identifier();
    auto enums = ctx->enumeratorList();

    QString decl_name;
    QHash<QString, qint64> decl_enums;

    if (name) {
        decl_name = QString::fromStdString(name->getText());
    } else {
        // report warn

        return std::nullopt;
    }

    qint64 i = 0;

    if (enums) {
        auto es = enums->enumerator();
        for (auto &e : es) {
            QString name;

            auto en = e->enumerationConstant();
            if (en) {
                name = QString::fromStdString(en->getText());
            } else {
                // report error
                return std::nullopt;
            }

            auto value = e->assignmentExpression();
            if (value) {
                auto v = visitAssignmentExpression(value);
                if (v.type() == typeid(qint64)) {
                    i = std::any_cast<qint64>(v);
                } else if (v.type() == typeid(quint64)) {
                    i = qint64(std::any_cast<quint64>(v));
                }
            }

            decl_enums.insert(name, i);
            i++;
        }

        return qMakePair(decl_name, decl_enums);
    } else {
        // report warn
        return std::nullopt;
    }
}
