#include "cstructvisitorparser.h"

#include "ctypeparser.h"

CStructVisitorParser::CStructVisitorParser(CTypeParser *container)
    : parser(container) {
    Q_ASSERT(parser);
}

std::any CStructVisitorParser::visitEnumSpecifier(
    CStructParser::EnumSpecifierContext *context) {
    auto name = context->Identifier();
    auto enums = context->enumeratorList();

    QString decl_name;
    QHash<QString, int> decl_enums;

    if (name) {
        decl_name = QString::fromStdString(name->getText());
    } else {
        // report warn

        return defaultResult();
    }

    int i = 0;

    if (enums) {
        auto es = enums->enumerator();
        for (auto &e : es) {
            QString name;

            auto en = e->enumerationConstant();
            if (en) {
                name = QString::fromStdString(en->getText());
            } else {
                // report error

                return defaultResult();
            }

            auto value = e->assignmentExpression();
            if (value) {
                auto v = visitAssignmentExpression(value);
                //     decl_enums.insert(name, i);
                //     i++;
                //     // std::cout << " = " << value->getText();
            } else {
                decl_enums.insert(name, i);
                i++;
            }
        }

        parser->enum_defs_.insert(decl_name, decl_enums);
    } else {
        // report warn

        return defaultResult();
    }

    return visitChildren(context);
}

std::any CStructVisitorParser::visitInclusiveOrExpression(
    CStructParser::InclusiveOrExpressionContext *context) {
    qulonglong ret = 0;
    for (auto &v : context->exclusiveOrExpression()) {
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
    CStructParser::AssignmentExpressionContext *context) {
    qDebug().noquote() << context->getText();

    if (context->IntegerConstant()) {
        auto txt = context->IntegerConstant()->getText();
        qDebug() << txt;
    } else {
        // return visitLogicalOrExpression(context->logicalOrExpression());
    }

    return visitChildren(context);
}
