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

#ifndef CSTRUCTVISITORPARSER_H
#define CSTRUCTVISITORPARSER_H

#include <QCoreApplication>
#include <QHash>
#include <QPair>
#include <QString>

#include <optional>

#include "c/CStructBaseVisitor.h"
#include "define.h"

class CTypeParser;
class CStructErrorListener;

class CStructVisitorParser : public CStructBaseVisitor {
    Q_DECLARE_TR_FUNCTIONS(CStructVisitorParser)

public:
    explicit CStructVisitorParser(CTypeParser *container,
                                  CStructErrorListener *listener);

    // CStructVisitor interface
public:
    virtual std::any
    visitEnumSpecifier(CStructParser::EnumSpecifierContext *ctx) override;

    virtual std::any visitStructOrUnionSpecifier(
        CStructParser::StructOrUnionSpecifierContext *ctx) override;

    virtual std::any
    visitDefineDecl(CStructParser::DefineDeclContext *ctx) override;

    virtual std::any visitAssignmentExpressionDef(
        CStructParser::AssignmentExpressionDefContext *ctx) override;

    virtual std::any
    visitDeclaration(CStructParser::DeclarationContext *ctx) override;

private:
    using EnumDecl = QPair<QString, QHash<QString, int>>;

    std::optional<EnumDecl> parseEnum(CStructParser::EnumSpecifierContext *ctx);

    void storeEnum(const EnumDecl &e);

    enum class StructMemType { Normal, Pointer, Enum, Struct, Union };

    struct StructUnionDecl {
        QString name;
        bool isStruct = true;
        qsizetype alignment = 0;
        QVector<VariableDeclaration> members;
    };

    std::optional<StructUnionDecl>
    parseStructOrUnion(CStructParser::StructOrUnionSpecifierContext *ctx);

    struct Specifier {
        StructMemType type = StructMemType::Normal;
        QString tname;
    };

    std::optional<Specifier>
    getSpecifier(CStructParser::SpecifierQualifierListContext *ctx);

    std::optional<Specifier>
    getSpecifier(CStructParser::TypeSpecifierContext *ctx);

    struct Declarator {
        QString retName;
        bool isPointer = false;
        size_t arrayCount = 1;
        size_t bitField = 0;
        CStructParser::DirectDeclaratorContext *next = nullptr;
    };

    std::optional<Declarator>
    getDeclarator(CStructParser::DirectDeclaratorContext *ctx);

    static QString
    getFinalDeclaratorName(CStructParser::DirectDeclaratorContext *ctx);

private:
    CTypeParser *parser;

    CStructErrorListener *errlis;

    // CStructVisitor interface
public:
    virtual std::any visitInclusiveOrExpression(
        CStructParser::InclusiveOrExpressionContext *ctx) override;

    virtual std::any visitAssignmentExpression(
        CStructParser::AssignmentExpressionContext *ctx) override;

    virtual std::any visitExclusiveOrExpression(
        CStructParser::ExclusiveOrExpressionContext *ctx) override;

    virtual std::any
    visitAndExpression(CStructParser::AndExpressionContext *ctx) override;

    virtual std::any
    visitShiftExpression(CStructParser::ShiftExpressionContext *ctx) override;

    virtual std::any visitAdditiveExpression(
        CStructParser::AdditiveExpressionContext *ctx) override;

    virtual std::any visitMultiplicativeExpression(
        CStructParser::MultiplicativeExpressionContext *ctx) override;

    virtual std::any
    visitCastExpression(CStructParser::CastExpressionContext *ctx) override;

    virtual std::any
    visitUnaryExpression(CStructParser::UnaryExpressionContext *ctx) override;

    virtual std::any visitPostfixExpression(
        CStructParser::PostfixExpressionContext *ctx) override;

    virtual std::any visitPrimaryExpression(
        CStructParser::PrimaryExpressionContext *ctx) override;

private:
    std::variant<std::monostate, qint64, quint64>
    parseIntegerConstant(const std::string &text);

    bool existedTypeName(const QString &name);

    void reportDupError(size_t line, size_t charPositionInLine,
                        const QString &var);

    void reportUnexpectedType(size_t line, size_t charPositionInLine,
                              const QString &var, const QStringList &expected);

    void reportUnexpectedToken(size_t line, size_t charPositionInLine,
                               const QString &token,
                               const QStringList &expected);

    void reportSyntaxDeclError(size_t line, size_t charPositionInLine);

    void reportUndeclaredType(size_t line, size_t charPositionInLine,
                              const QString &type);

private:
    bool isInteger(const QString &text);
};

#endif // CSTRUCTVISITORPARSER_H
