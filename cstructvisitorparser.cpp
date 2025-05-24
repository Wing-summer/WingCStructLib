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
    }

    return defaultResult();
}

std::any CStructVisitorParser::visitStructOrUnionSpecifier(
    CStructParser::StructOrUnionSpecifierContext *ctx) {
    auto name = ctx->Identifier();
    auto memdecls = ctx->structDeclarationList();

    if (name) {
        if (memdecls) {
            bool isStruct = ctx->structOrUnion()->Struct();

        } else {
        }
    } else {
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

std::optional<CStructVisitorParser::Specifier>
CStructVisitorParser::getSpecifier(
    CStructParser::SpecifierQualifierListContext *ctx) {
    Specifier sq;

    // I only focus on typeSpecifier

    while (ctx->typeSpecifier()) {
        auto s = ctx->typeSpecifier();
        if (s->Signed()) {
            sq.isSigned = true;
        }

        if (s->Unsigned()) {
            sq.isUnsigned = true;
        }

        if (s->enumSpecifier()) {
            auto es = s->enumSpecifier();
            if (es->enumeratorList()) {
                sq.type = StructMemType::Enum;
            } else {
                return std::nullopt;
            }
        }

        if (s->structOrUnionSpecifier()) {
            auto sus = s->structOrUnionSpecifier();
            if (sus->structDeclarationList()) {
                sq.type = sus->structOrUnion()->Struct() ? StructMemType::Struct
                                                         : StructMemType::Union;

                // sq.tname = "";
                // I won't use struc or union type name declared
                // in struct or union
            } else {
                return std::nullopt;
            }
        }

        ctx = ctx->specifierQualifierList();
    }

    return sq;
}

std::optional<CStructVisitorParser::StructUnionDecl>
CStructVisitorParser::parseStructOrUnion(
    CStructParser::StructOrUnionSpecifierContext *ctx) {

    StructUnionDecl decl;
    // decl.isStruct = ctx->structOrUnion()->Struct() != nullptr;

    auto mems = ctx->structDeclarationList();
    if (!mems) {
        return std::nullopt;
    }

    if (ctx->Identifier()) {
        decl.first = QString::fromStdString(ctx->Identifier()->getText());
    }

    for (auto &m : mems->structDeclaration()) {
        auto decl = m->specifierQualifierList();

        auto dclist = m->structDeclaratorList();
        if (dclist) {
            for (auto &sub : dclist->structDeclarator()) {
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
