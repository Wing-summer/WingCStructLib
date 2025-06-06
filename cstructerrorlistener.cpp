#include "cstructerrorlistener.h"
#include <antlr4-runtime.h>

CStructErrorListener::CStructErrorListener(const ErrorHandler &handler)
    : antlr4::BaseErrorListener(), _handler(handler) {
    Q_ASSERT(handler);
}

void CStructErrorListener::syntaxError(antlr4::Recognizer *recognizer,
                                       antlr4::Token *offendingSymbol,
                                       size_t line, size_t charPositionInLine,
                                       const std::string &msg,
                                       std::exception_ptr e) {
    if (_handler) {
        ErrorInfo info;
        info.line = line;
        info.charPositionInLine = charPositionInLine;
        info.info = QString::fromStdString(msg);
        _handler(info);
    }
}
