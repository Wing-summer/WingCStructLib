#ifndef CSTRUCTERRORLISTENER_H
#define CSTRUCTERRORLISTENER_H

#include <antlr4-runtime.h>
#include <functional>

#include <QCoreApplication>
#include <QString>

class CStructErrorListener : public antlr4::BaseErrorListener {
    Q_DECLARE_TR_FUNCTIONS(CStructErrorListener)

public:
    struct ErrorInfo {
        size_t line;
        size_t charPositionInLine;
        QString info;
    };

public:
    using ErrorHandler = std::function<void(const ErrorInfo &)>;

public:
    explicit CStructErrorListener(const ErrorHandler &handler);

    // ANTLRErrorListener interface
public:
    virtual void syntaxError(antlr4::Recognizer *recognizer,
                             antlr4::Token *offendingSymbol, size_t line,
                             size_t charPositionInLine, const std::string &msg,
                             std::exception_ptr e) override;

private:
    ErrorHandler _handler;
};

#endif // CSTRUCTERRORLISTENER_H
