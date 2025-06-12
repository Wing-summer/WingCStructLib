/*==============================================================================
** Copyright (C) 2025-2028 WingSummer
**
** This program is free software: you can redistribute it and/or modify it under
** the terms of the GNU Affero General Public License as published by the Free
** Software Foundation, version 3.
**
** This program is distributed in the hope that it will be useful, but WITHOUT
** ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
** FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for more
** details.
**
** You should have received a copy of the GNU Affero General Public License
** along with this program. If not, see <https://www.gnu.org/licenses/>.
** =============================================================================
*/

#include "cstructvisitorparser.h"

#include "c/CStructLexer.h"
#include "cstructerrorlistener.h"
#include "ctypeparser.h"

#include <QCoreApplication>

CStructVisitorParser::CStructVisitorParser(CTypeParser *container,
                                           CStructErrorListener *listener)
    : parser(container), errlis(listener) {
    Q_ASSERT(parser);
    Q_ASSERT(errlis);
}

std::any CStructVisitorParser::visitEnumSpecifier(
    CStructParser::EnumSpecifierContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    auto e = parseEnum(ctx);
    if (e) {
        storeEnum(e.value());
    }
    return defaultResult();
}

std::any CStructVisitorParser::visitInclusiveOrExpression(
    CStructParser::InclusiveOrExpressionContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    qulonglong ret = 0;
    for (auto &v : ctx->exclusiveOrExpression()) {
        auto r = visitExclusiveOrExpression(v);
        if (r.type() == typeid(quint64)) {
            auto rr = std::any_cast<quint64>(r);
            ret |= rr;
        } else if (r.type() == typeid(qint64)) {
            auto rr = std::any_cast<qint64>(r);
            ret |= rr;
        } else {
            auto t = v->start;
            reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                                 r.type().name(), {"uint64", "int64"});
            return defaultResult();
        }
    }
    return ret;
}

std::any CStructVisitorParser::visitAssignmentExpression(
    CStructParser::AssignmentExpressionContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    if (ctx->IntegerConstant()) {
        auto t = ctx->IntegerConstant();
        auto v = parseIntegerConstant(ctx->IntegerConstant()->getText());
        if (std::holds_alternative<quint64>(v)) {
            return std::get<quint64>(v);
        } else if (std::holds_alternative<qint64>(v)) {
            return std::get<qint64>(v);
        } else {
            auto tk = t->getSymbol();
            reportUnexpectedType(tk->getLine(), tk->getCharPositionInLine(),
                                 tr("<unknown>"), {"uint64", "int64"});
            return defaultResult();
        }
    } else if (ctx->inclusiveOrExpression()) {
        return visitInclusiveOrExpression(ctx->inclusiveOrExpression());
    }

    return defaultResult();
}

std::any CStructVisitorParser::visitExclusiveOrExpression(
    CStructParser::ExclusiveOrExpressionContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

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
            auto t = ex->start;
            reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                                 tr("<unknown>"), {"uint64", "int64"});
            return defaultResult();
        }
    }

    return v;
}

std::variant<std::monostate, qint64, quint64>
CStructVisitorParser::parseIntegerConstant(const std::string &text) {
    auto txt = QByteArray::fromStdString(text);

    if (txt.size() >= 3 && txt.front() == '\'' && txt.back() == '\'') {
        auto inner = txt.sliced(1, text.size() - 2);

        if (inner.size() == 1) {
            return qint64(inner[0]);
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
                    return qint64(toNum(inner[1]) * 64 + toNum(inner[2]) * 8 +
                                  toNum(inner[3]));
                }
            } else {
                static QHash<QByteArray, char> buffer{
                    {R"(\n)", '\n'}, {R"(\t)", '\t'}, {R"(\0)", '\0'},
                    {R"(\\)", '\\'}, {R"(\')", '\''}, {R"(\")", '"'},
                    {R"(\?)", '\?'}, {R"(\a)", '\a'}, {R"(\b)", '\b'},
                    {R"(\f)", '\f'}, {R"(\r)", '\r'}, {R"(\v)", '\v'}};

                if (buffer.contains(inner)) {
                    return qint64(buffer.value(inner));
                }

                auto n = inner[1];
                if (n == 'x' || n == 'X' || n == 'b' || n == 'B') {
                    bool b = false;
                    auto v = inner.toLongLong(&b, 0);
                    if (b) {
                        return v;
                    } else {
                        auto v = inner.toULongLong(&b, 0);
                        if (b) {
                            return v;
                        }
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
        } else {
            auto v = numberPart.toULongLong(&b);
            if (b) {
                return v;
            }
        }
    }

    return {};
}

bool CStructVisitorParser::existedTypeName(const QString &name) {
    return parser->type_maps_.contains(name);
}

void CStructVisitorParser::reportDupError(size_t line,
                                          size_t charPositionInLine,
                                          const QString &var) {
    errlis->reportError(line, charPositionInLine,
                        tr("\"%1\" is duplicated declaration").arg(var));
}

void CStructVisitorParser::reportUnexpectedType(size_t line,
                                                size_t charPositionInLine,
                                                const QString &var,
                                                const QStringList &expected) {
    errlis->reportError(line, charPositionInLine,
                        tr("Unexprected type \"%1\", expecting: %2")
                            .arg(var, expected.join(QStringLiteral(", "))));
}

void CStructVisitorParser::reportUnexpectedToken(size_t line,
                                                 size_t charPositionInLine,
                                                 const QString &token,
                                                 const QStringList &expected) {
    errlis->reportError(line, charPositionInLine,
                        tr("Unexprected token \"%1\", expecting: {%2}")
                            .arg(token, expected.join(QStringLiteral(", "))));
}

void CStructVisitorParser::reportSyntaxDeclError(size_t line,
                                                 size_t charPositionInLine) {
    errlis->reportError(line, charPositionInLine, tr("Declaring syntax error"));
}

void CStructVisitorParser::reportUndeclaredType(size_t line,
                                                size_t charPositionInLine,
                                                const QString &type) {
    errlis->reportError(line, charPositionInLine,
                        tr("\"%1\" is unknown type").arg(type));
}

bool CStructVisitorParser::isInteger(const QString &text) {
    if (parser->enum_defs_.contains(text)) {
        return true;
    }

    auto type = parser->typeInfo(text);
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
    if (ctx == nullptr) {
        return defaultResult();
    }

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
            auto t = ex->start;
            reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                                 tr("<unknown>"), {"uint64", "int64"});
            return defaultResult();
        }
    }
    return v;
}

std::any CStructVisitorParser::visitShiftExpression(
    CStructParser::ShiftExpressionContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    auto data = ctx->additiveExpression();
    auto total = data.size();

    if (total < 1) {
        return defaultResult();
    }

    quint64 ret = 0;
    auto retv = visitAdditiveExpression(data.front());
    if (retv.type() == typeid(qint64)) {
        ret = std::any_cast<qint64>(retv);
    } else if (retv.type() == typeid(quint64)) {
        ret = std::any_cast<quint64>(retv);
    } else {
        auto t = data.front()->start;
        reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                             tr("<unknown>"), {"uint64", "int64"});
        return defaultResult();
    }

    for (size_t i = 1; i < total; ++i) {
        auto op = ctx->children[2 * i - 1]->getText();
        auto ex = data.at(i);
        auto r = visitAdditiveExpression(ex);
        if (op == "<<") {
            if (r.type() == typeid(qint64)) {
                auto rv = std::any_cast<qint64>(r);
                ret <<= rv;
            } else if (r.type() == typeid(quint64)) {
                auto rv = std::any_cast<quint64>(r);
                ret <<= rv;
            } else {
                auto t = ex->start;
                reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                                     tr("<unknown>"), {"uint64", "int64"});
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
                auto t = ex->start;
                reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                                     tr("<unknown>"), {"uint64", "int64"});
                return defaultResult();
            }
        } else {
            auto t = ex->start;
            reportUnexpectedToken(t->getLine(), t->getCharPositionInLine(),
                                  QString::fromStdString(op),
                                  {R"("<<")", R"(">>")"});
            return defaultResult();
        }
    }

    return ret;
}

std::any CStructVisitorParser::visitAdditiveExpression(
    CStructParser::AdditiveExpressionContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    auto data = ctx->multiplicativeExpression();
    auto total = data.size();

    if (total < 1) {
        return defaultResult();
    }

    quint64 ret = 0;
    auto retv = visitMultiplicativeExpression(data.front());
    if (retv.type() == typeid(qint64)) {
        ret = std::any_cast<qint64>(retv);
    } else if (retv.type() == typeid(quint64)) {
        ret = std::any_cast<quint64>(retv);
    } else {
        auto t = data.front()->start;
        reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                             tr("<unknown>"), {"uint64", "int64"});
        return defaultResult();
    }

    for (size_t i = 1; i < total; i++) {
        auto ex = data.at(i);
        auto r = visitMultiplicativeExpression(ex);
        auto op = ctx->children[2 * i - 1]->getText();
        if (r.type() == typeid(qint64)) {
            auto rv = std::any_cast<qint64>(r);
            if (op == "+") {
                ret += rv;
            } else if (op == "-") {
                ret -= rv;
            } else {
                auto t = ex->start;
                reportUnexpectedToken(t->getLine(), t->getCharPositionInLine(),
                                      QString::fromStdString(op),
                                      {R"("+")", R"("-")"});
                return defaultResult();
            }
        } else if (r.type() == typeid(quint64)) {
            auto rv = std::any_cast<quint64>(r);
            if (op == "+") {
                ret += rv;
            } else if (op == "-") {
                ret -= rv;
            } else {
                auto t = ex->start;
                reportUnexpectedToken(t->getLine(), t->getCharPositionInLine(),
                                      QString::fromStdString(op),
                                      {R"("+")", R"("-")"});
                return defaultResult();
            }
        } else {
            auto t = ex->start;
            reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                                 tr("<unknown>"), {"uint64", "int64"});
            return defaultResult();
        }
    }

    return ret;
}

std::any CStructVisitorParser::visitMultiplicativeExpression(
    CStructParser::MultiplicativeExpressionContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    auto data = ctx->castExpression();
    auto total = data.size();

    if (total < 1) {
        return defaultResult();
    }

    quint64 ret = 0;
    auto retv = visitCastExpression(data.front());
    if (retv.type() == typeid(qint64)) {
        ret = std::any_cast<qint64>(retv);
    } else if (retv.type() == typeid(quint64)) {
        ret = std::any_cast<quint64>(retv);
    } else {
        auto t = data.front()->start;
        reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                             tr("<unknown>"), {"uint64", "int64"});
        return defaultResult();
    }

    for (size_t i = 1; i < total; i++) {
        auto ex = data.at(i);
        auto r = visitCastExpression(ex);
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
                auto t = ex->start;
                reportUnexpectedToken(t->getLine(), t->getCharPositionInLine(),
                                      QString::fromStdString(op),
                                      {R"("*")", R"("/")", R"("%")"});
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
                auto t = ex->start;
                reportUnexpectedToken(t->getLine(), t->getCharPositionInLine(),
                                      QString::fromStdString(op),
                                      {R"("*")", R"("/")", R"("%")"});
                return defaultResult();
            }
        } else {
            auto t = ex->start;
            reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                                 tr("<unknown>"), {"uint64", "int64"});
            return defaultResult();
        }
    }

    return ret;
}

std::any CStructVisitorParser::visitCastExpression(
    CStructParser::CastExpressionContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    if (ctx->IntegerConstant()) {
        auto ex = ctx->IntegerConstant();
        auto r = parseIntegerConstant(ex->getText());
        if (std::holds_alternative<quint64>(r)) {
            return std::get<quint64>(r);
        } else if (std::holds_alternative<qint64>(r)) {
            return std::get<qint64>(r);
        } else {
            auto tk = ex->getSymbol();
            reportUnexpectedType(tk->getLine(), tk->getCharPositionInLine(),
                                 tr("<unknown>"), {"uint64", "int64"});
            return defaultResult();
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
            default: {
                auto t = ctx->typeName()->start;
                errlis->reportError(
                    t->getLine(), t->getCharPositionInLine(),
                    tr("Invalid typeName Mask with converting"));
                return defaultResult();
            }
            }
        } else {
            if (!parser->enum_defs_.contains(tname)) {
                auto t = ctx->typeName()->start;
                errlis->reportError(
                    t->getLine(), t->getCharPositionInLine(),
                    tr("Can not convert Interger to \"%1\"").arg(tname));
                return defaultResult();
            }
            mask = std::numeric_limits<int>::max();
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
    if (ctx == nullptr) {
        return defaultResult();
    }

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
                auto t = op->start;
                reportUnexpectedToken(t->getLine(), t->getCharPositionInLine(),
                                      QString::fromStdString(op->getText()),
                                      {R"("+")", R"("-")", R"("~")"});
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
                auto t = op->start;
                reportUnexpectedToken(t->getLine(), t->getCharPositionInLine(),
                                      QString::fromStdString(op->getText()),
                                      {R"("+")", R"("-")", R"("~")"});
                return defaultResult();
            }
        } else {
            auto tk = ctx->castExpression()->start;
            reportUnexpectedType(tk->getLine(), tk->getCharPositionInLine(),
                                 QStringLiteral("<unknown>"),
                                 {"uint64", "int64"});
        }
    }

    return visitChildren(ctx);
}

std::any CStructVisitorParser::visitPostfixExpression(
    CStructParser::PostfixExpressionContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

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
        auto tk = ctx->primaryExpression()->start;
        reportUnexpectedType(tk->getLine(), tk->getCharPositionInLine(),
                             QStringLiteral("<unknown>"), {"uint64", "int64"});
        return defaultResult();
    }
}

std::any CStructVisitorParser::visitPrimaryExpression(
    CStructParser::PrimaryExpressionContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    if (ctx->IntegerConstant()) {
        auto t = ctx->IntegerConstant();
        auto r = parseIntegerConstant(t->getText());
        if (std::holds_alternative<quint64>(r)) {
            return std::get<quint64>(r);
        } else if (std::holds_alternative<qint64>(r)) {
            return std::get<qint64>(r);
        } else {
            auto tk = t->getSymbol();
            reportUnexpectedType(tk->getLine(), tk->getCharPositionInLine(),
                                 QStringLiteral("<unknown>"),
                                 {"uint64", "int64"});
            return defaultResult();
        }
    } else if (ctx->Identifier()) {
        auto t = ctx->Identifier();
        auto vname = QString::fromStdString(t->getText());
        if (parser->const_defs_.contains(vname)) {
            auto v = parser->const_defs_.value(vname);
            if (std::holds_alternative<qint64>(v)) {
                return std::get<qint64>(v);
            } else if (std::holds_alternative<quint64>(v)) {
                return std::get<quint64>(v);
            } else {
                auto tk = t->getSymbol();
                reportUnexpectedType(tk->getLine(), tk->getCharPositionInLine(),
                                     QStringLiteral("<unknown>"),
                                     {"uint64", "int64"});
                return defaultResult();
            }
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
    if (ctx == nullptr) {
        return defaultResult();
    }

    auto decl = parseStructOrUnion(ctx);
    if (decl) {
        if (!decl->name.isEmpty()) {
            parser->storeStructUnionDef(decl->isStruct, decl->name,
                                        decl->members, decl->alignment);
        } else {
            // TODO
        }
    }
    return defaultResult();
}

std::any
CStructVisitorParser::visitDefineDecl(CStructParser::DefineDeclContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    std::string def;

    if (ctx->DirectiveInclude()) {
        auto tdinc = ctx->DirectiveInclude();
        def = tdinc->getText();

        constexpr auto prefixLen = std::char_traits<char>::length("#include");
        antlr4::ANTLRInputStream input(def.data() + prefixLen,
                                       def.length() - prefixLen);
        CStructLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);

        tokens.fill();
        auto t = tdinc->getSymbol();

        if (tokens.size() == 2) {
            if (tokens.get(1)->getType() != CStructLexer::EOF) {
                return defaultResult();
            }

            auto t = tokens.get(0);
            if (t->getType() == CStructLexer::StringLiteral) {
                auto path = QString::fromStdString(t->getText())
                                .removeFirst()
                                .removeLast();

                auto p = tdinc->getSymbol()->getTokenSource()->getSourceName();

                QDir dir;
                if (p.empty()) {
                    dir.setPath(qApp->applicationDirPath());
                } else {
                    QFileInfo pinfo(QString::fromStdString(p));
                    dir = pinfo.absoluteDir();
                }

                auto header = dir.absoluteFilePath(path);
                if (QFile::exists(header)) {
                    if (!parser->parseFile(header)) {
                        errlis->reportWarn(t->getLine(),
                                           t->getCharPositionInLine(),
                                           tr("Invalid #include marco failed"));
                    }
                    return defaultResult();
                } else {
                    errlis->reportWarn(
                        t->getLine(), t->getCharPositionInLine(),
                        tr("Invalid #include file is not exists: ") +
                            header.prepend('"').append('"'));
                }
            }
        }

        // report warning and ignored
        errlis->reportWarn(t->getLine(), t->getCharPositionInLine(),
                           tr("Invalid #include marco syntax"));
    } else {
        antlr4::Token *t = nullptr;

        if (ctx->DirectiveDefine()) {
            auto ex = ctx->DirectiveDefine();
            t = ex->getSymbol();
            def = ex->getText();
        } else if (ctx->MultiLineMacroDefine()) {
            auto ex = ctx->MultiLineMacroDefine();
            t = ex->getSymbol();
            def = ex->getText();

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

        if (t == nullptr) {
            return defaultResult();
        }

        constexpr auto prefixLen = std::char_traits<char>::length("#define");
        antlr4::ANTLRInputStream input(def.data() + prefixLen,
                                       def.length() - prefixLen);
        CStructLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);

        tokens.fill();
        auto ts = tokens.getTokens();
        auto identifer = ts.front()->getText();

        auto dname = QString::fromStdString(identifer);
        if (parser->type_maps_.contains(dname)) {
            // report error
            reportDupError(t->getLine(), t->getCharPositionInLine(), dname);
            return defaultResult();
        }

        tokens.consume(); // remove the first token

        CStructVisitorParser visitor(parser, errlis);
        CStructParser parser(&tokens);

        auto ret = visitor.visit(parser.assignmentExpressionDef());
        if (ret.type() == typeid(quint64)) {
            this->parser->const_defs_.insert(dname,
                                             std::any_cast<quint64>(ret));
        } else if (ret.type() == typeid(qint64)) {
            this->parser->const_defs_.insert(dname, std::any_cast<qint64>(ret));
        } else {
            reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                                 QStringLiteral("<unknown>"),
                                 {"uint64", "int64"});
        }
    }

    return defaultResult();
}

std::any CStructVisitorParser::visitAssignmentExpressionDef(
    CStructParser::AssignmentExpressionDefContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    if (ctx->assignmentExpression()) {
        return visitAssignmentExpression(ctx->assignmentExpression());
    }

    return defaultResult();
}

std::any
CStructVisitorParser::visitDeclaration(CStructParser::DeclarationContext *ctx) {
    if (ctx == nullptr) {
        return defaultResult();
    }

    if (ctx->TypeDef()) {
        auto ex = ctx->Identifier();
        auto iden = QString::fromStdString(ex->getText());

        if (parser->type_maps_.contains(iden)) {
            // error report
            auto t = ex->getSymbol();
            reportDupError(t->getLine(), t->getCharPositionInLine(), iden);
            return defaultResult();
        }

        auto spec = getSpecifier(ctx->typeSpecifier());
        if (spec) {
            parser->type_defs_.insert(
                iden, qMakePair(spec->tname, ctx->pointer() != nullptr));
            parser->type_maps_.insert(iden,
                                      parser->type_maps_.value(spec->tname));
        }
        return defaultResult();
    } else {
        return visitChildren(ctx);
    }
}

void CStructVisitorParser::storeEnum(const EnumDecl &e) {
    parser->type_maps_.insert(e.first, qMakePair(QMetaType::Int, sizeof(int)));
    parser->enum_defs_.insert(e.first, e.second);
}

std::optional<CStructVisitorParser::Specifier>
CStructVisitorParser::getSpecifier(CStructParser::TypeSpecifierContext *ctx) {
    if (ctx == nullptr) {
        return std::nullopt;
    }

    Specifier sq;

    if (ctx->Void()) {
        sq.type = StructMemType::Normal;
        sq.tname = QStringLiteral("void");
    } else if (ctx->internalBasicTypes()) {
        auto btype = ctx->internalBasicTypes();
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
                default: {
                    auto t = ctx->start;
                    reportSyntaxDeclError(t->getLine(),
                                          t->getCharPositionInLine());
                    return std::nullopt;
                }
                }
            } else {
                switch (len) {
                case 1:
                    sq.tname = QStringLiteral("ulong");
                    break;
                case 2:
                    sq.tname = QStringLiteral("ulonglong");
                    break;
                default: {
                    auto t = ctx->start;
                    reportSyntaxDeclError(t->getLine(),
                                          t->getCharPositionInLine());
                    return std::nullopt;
                }
                }
            }
        }
    } else if (ctx->Identifier()) {
        sq.type = StructMemType::Normal;
        sq.tname = QString::fromStdString(ctx->Identifier()->getText());
    } else if (ctx->enumSpecifier()) {
        sq.type = StructMemType::Enum;

        auto es = ctx->enumSpecifier();
        auto iden = es->Identifier();
        if (es->enumeratorList()) {
            auto en = parseEnum(es);
            if (en) {
                if (en->first.isEmpty()) {
                    // anonymous? I will give you a name!
                    en->first =
                        QString::number(parser->_anomyIndex).prepend('?');
                    Q_ASSERT(!parser->type_maps_.contains(en->first));
                    parser->_anomyIndex++;
                }
                sq.tname = en->first;

                // store it
                storeEnum(en.value());
            } else {
                // error occurred
                return std::nullopt;
            }
        } else {
            // iden can not be nullptr
            auto name = QString::fromStdString(iden->getText());
            if (!parser->enum_defs_.contains(name)) {
                auto t = iden->getSymbol();
                reportUndeclaredType(t->getLine(), t->getCharPositionInLine(),
                                     name);
                return std::nullopt;
            }
            sq.tname = name;
        }
    } else if (ctx->structOrUnionSpecifier()) {
        sq.type = StructMemType::Struct;

        auto sus = ctx->structOrUnionSpecifier();
        auto iden = sus->Identifier();
        if (sus->structDeclarationList()) {
            auto st = parseStructOrUnion(sus);
            if (st) {
                if (st->name.isEmpty()) {
                    st->name =
                        QString::number(parser->_anomyIndex).prepend('?');
                    Q_ASSERT(!parser->type_maps_.contains(st->name));
                    parser->_anomyIndex++;
                }

                sq.tname = st->name;
                // store it
                parser->storeStructUnionDef(st->isStruct, st->name, st->members,
                                            st->alignment);
            } else {
                // error occurred
                return std::nullopt;
            }
        } else {
            // iden can not be nullptr
            auto name = QString::fromStdString(iden->getText());
            if (sus->structOrUnion()->Struct()) {
                if (!parser->struct_defs_.contains(name)) {
                    auto t = iden->getSymbol();
                    reportUndeclaredType(t->getLine(),
                                         t->getCharPositionInLine(), name);
                    return std::nullopt;
                }
            } else {
                if (!parser->union_defs_.contains(name)) {
                    auto t = iden->getSymbol();
                    reportUndeclaredType(t->getLine(),
                                         t->getCharPositionInLine(), name);
                    return std::nullopt;
                }
            }
            sq.tname = name;
        }
    } else {
        return std::nullopt;
    }

    return sq;
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
    } else if (ctx->QuestionMark()) {
        dor.retName.clear();
    } else if (ctx->declarator()) {
        auto d = ctx->declarator();

        // only pointer in the first level is valid member in struct
        if (d->pointer()) {
            dor.retName = getFinalDeclaratorName(d->directDeclarator());
            dor.isPointer = true;
        } else {
            // TODO
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
            auto t = ctx->assignmentExpression()->start;
            reportUnexpectedType(t->getLine(), t->getCharPositionInLine(),
                                 tr("<unknown>"), {"uint64", "int64"});
            return std::nullopt;
        }
        dor.next = ctx->directDeclarator();
    } else {
        // TODO
        return std::nullopt;
    }

    return dor;
}

std::optional<CStructVisitorParser::Specifier>
CStructVisitorParser::getSpecifier(
    CStructParser::SpecifierQualifierListContext *ctx) {
    if (!ctx) {
        return std::nullopt;
    }
    auto spec = ctx->typeSpecifier();
    return getSpecifier(spec);
}

std::optional<CStructVisitorParser::StructUnionDecl>
CStructVisitorParser::parseStructOrUnion(
    CStructParser::StructOrUnionSpecifierContext *ctx) {
    if (ctx == nullptr) {
        return std::nullopt;
    }

    StructUnionDecl decl;
    decl.isStruct = ctx->structOrUnion()->Struct();

    auto mems = ctx->structDeclarationList();
    if (!mems) {
        return std::nullopt;
    }

    if (ctx->Identifier()) {
        decl.name = QString::fromStdString(ctx->Identifier()->getText());
        if (existedTypeName(decl.name)) {
            return std::nullopt;
        }
    }

    if (ctx->alignAsAttr()) {
        auto num = parseIntegerConstant(
            ctx->alignAsAttr()->IntegerConstant()->getText());

        int v = 0;
        if (std::holds_alternative<quint64>(num)) {
            v = std::get<quint64>(num);
        } else if (std::holds_alternative<qint64>(num)) {
            v = std::get<qint64>(num);
        }

        if (v) {
            static std::array<int, 5> allowList{1, 2, 4, 8, 16};
            if (std::find(allowList.begin(), allowList.end(), v) !=
                allowList.end()) {
                decl.alignment = v;
            }
        } else {
            // report warning and ignored
            decl.alignment = parser->kAlignment_;
        }

    } else {
        decl.alignment = parser->kAlignment_;
    }

    QStringList used_names;

    for (auto &m : mems->structDeclaration()) {
        auto dl = getSpecifier(m->specifierQualifierList());
        if (!dl) {
            return std::nullopt;
        }

        auto t = parser->typeInfo(dl->tname);

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

                        if (var.bit_size > t.second * 8 || var.bit_size == 0) {
                            return std::nullopt;
                        }
                    }

                    auto d = declor->directDeclarator();
                    if (declor->pointer() && !sub->Colon()) {
                        var.is_pointer = true;
                        var.var_name = getFinalDeclaratorName(d);
                        if (used_names.contains(var.var_name)) {
                            return std::nullopt;
                        }
                        var.var_size = parser->pointerMode() == PointerMode::X64
                                           ? sizeof(quint64)
                                           : sizeof(quint32);
                        decl.members.append(var);

                        if (!var.var_name.isEmpty()) {
                            used_names.append(var.var_name);
                        }
                    } else {
                        if (t.first == QMetaType::UnknownType) {
                            return std::nullopt;
                        }

                        auto info = getDeclarator(d);
                        if (info) {
                            var.is_pointer = info->isPointer;
                            if (info->arrayCount == 0) {
                                var.array_dims = {0};
                                var.var_size = 0;
                                decl.members.append(var);
                                used_names.append(var.var_name);
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
                                if (used_names.contains(var.var_name)) {
                                    return std::nullopt;
                                }
                                var.var_size =
                                    t.second *
                                    std::accumulate(dims.begin(), dims.end(),
                                                    size_t(1),
                                                    std::multiplies<size_t>());
                                if (var.var_size) {
                                    var.array_dims = dims;
                                } else {
                                    var.array_dims = {0};
                                }
                                decl.members.append(var);

                                if (!var.var_name.isEmpty()) {
                                    used_names.append(var.var_name);
                                }
                            } else {
                                var.var_name = info->retName;
                                if (used_names.contains(var.var_name)) {
                                    return std::nullopt;
                                }
                                var.var_size = t.second;
                                decl.members.append(var);

                                if (!var.var_name.isEmpty()) {
                                    used_names.append(var.var_name);
                                }
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

                    if (var.bit_size > t.second * 8) {
                        return std::nullopt;
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
    if (ctx == nullptr) {
        return std::nullopt;
    }

    auto name = ctx->Identifier();
    auto enums = ctx->enumeratorList();

    QString decl_name;
    QHash<QString, int> decl_enums;

    if (name) {
        decl_name = QString::fromStdString(name->getText());
        if (existedTypeName(decl_name)) {
            return std::nullopt;
        }
    }

    int i = 0;

    if (enums) {
        auto es = enums->enumerator();

        for (auto &e : es) {
            QString name;

            auto en = e->enumerationConstant();
            if (en) {
                name = QString::fromStdString(en->getText());
                if (decl_enums.contains(name)) {
                    // report
                    return std::nullopt;
                }
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
                } else {
                    // report error
                    return std::nullopt;
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
