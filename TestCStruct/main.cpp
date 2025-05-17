#include <QCoreApplication>
#include <QTextStream>

#include "ctypeparser.h"

static QTextStream qout(stdout);

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    CTypeParser parser;

    parser.parseFile(CODE_PATH "/Test.h");

    parser.dumpTypeDefs();

    return 0;
}
