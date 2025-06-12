#ifndef CSTRUCTERRORLISTENER_H
#define CSTRUCTERRORLISTENER_H

#include <antlr4-runtime.h>
#include <functional>

#include <QCoreApplication>
#include <QString>

#include "define.h"

class CStructErrorListener : public antlr4::BaseErrorListener {
    Q_DECLARE_TR_FUNCTIONS(CStructErrorListener)

public:
    using ErrorHandler = std::function<void(const MsgInfo &)>;

public:
    explicit CStructErrorListener(const ErrorHandler &handler);

    // ANTLRErrorListener interface
public:
    virtual void syntaxError(antlr4::Recognizer *recognizer,
                             antlr4::Token *offendingSymbol, size_t line,
                             size_t charPositionInLine, const std::string &msg,
                             std::exception_ptr e) override;

public:
    void reportError(size_t line, size_t charPositionInLine,
                     const QString &info);

    void reportWarn(size_t line, size_t charPositionInLine,
                    const QString &info);

private:
    void reportMsg(MsgType type, size_t line, size_t charPositionInLine,
                   const QString &info);

private:
    ErrorHandler _handler;
};

#endif // CSTRUCTERRORLISTENER_H
