#ifndef CSTRUCTVISITORPARSER_H
#define CSTRUCTVISITORPARSER_H

#include <QHash>
#include <QPair>
#include <QString>

#include <optional>

#include "c/CStructBaseVisitor.h"
#include "define.h"

class CTypeParser;

class CStructVisitorParser : public CStructBaseVisitor {
public:
    explicit CStructVisitorParser(CTypeParser *container);

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

    virtual std::any visitExternalDeclaration(
        CStructParser::ExternalDeclarationContext *ctx) override;

private:
    using EnumDecl = QPair<QString, QHash<QString, qint64>>;

    std::optional<EnumDecl> parseEnum(CStructParser::EnumSpecifierContext *ctx);

    enum class StructMemType { Normal, Pointer, Enum, Struct, Union };

    struct StructUnionDecl {
        QString name;
        bool isStruct = true;
        QVector<VariableDeclaration> members;
    };

    std::optional<StructUnionDecl>
    parseStructOrUnion(CStructParser::StructOrUnionSpecifierContext *ctx);

    struct Specifier {
        bool isUnsigned = false;
        bool isSigned = false;
        QString tname;
        StructMemType type = StructMemType::Normal;
    };

    std::optional<Specifier>
    getSpecifier(CStructParser::SpecifierQualifierListContext *ctx);

    struct Declarator {
        QString retName;
        bool isPointer = false;
        bool isFunctionPtr = false;
        size_t arrayCount = 1;
        size_t bitField = 0;
        CStructParser::DirectDeclaratorContext *next = nullptr;
    };

    std::optional<Declarator>
    getDeclarator(CStructParser::DirectDeclaratorContext *ctx);

    QString getFinalDeclaratorName(CStructParser::DirectDeclaratorContext *ctx);

private:
    CTypeParser *parser;

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
    std::optional<qint64> parseIntegerConstant(const std::string &text);

private:
    bool isInteger(const QString &text);

private:
    quint64 _anomyIndex = 0;
};

#endif // CSTRUCTVISITORPARSER_H
