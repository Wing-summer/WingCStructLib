#ifndef CSTRUCTVISITORPARSER_H
#define CSTRUCTVISITORPARSER_H

#include "c/CStructBaseVisitor.h"

class CTypeParser;

class CStructVisitorParser : public CStructBaseVisitor {
public:
    explicit CStructVisitorParser(CTypeParser *container);

    // CStructVisitor interface
public:
    virtual std::any
    visitEnumSpecifier(CStructParser::EnumSpecifierContext *context) override;

private:
    CTypeParser *parser;

    // CStructVisitor interface
public:
    virtual std::any visitInclusiveOrExpression(
        CStructParser::InclusiveOrExpressionContext *context) override;

    virtual std::any visitAssignmentExpression(
        CStructParser::AssignmentExpressionContext *context) override;
};

#endif // CSTRUCTVISITORPARSER_H
