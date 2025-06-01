#include <QCoreApplication>
#include <QTextStream>

#include "ctypeparser.h"

static QTextStream qout(stdout);

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    CTypeParser parser;

    // only take effects before parsing
    parser.setPointerMode(PointerMode::X64);
    parser.setPadAlignment(1);

    // parsing the file
    parser.parseFile(CODE_PATH "/Test.h");

    // dump message to check
    parser.dumpTypeDefs();

    return 0;
}
