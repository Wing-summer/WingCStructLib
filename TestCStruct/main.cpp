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

#include <QCoreApplication>
#include <QTextStream>

#include "ctypeparser.h"

static QTextStream qout(stdout);

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    CTypeParser parser([](const MsgInfo &info) {
        switch (info.type) {
        case MsgType::Error:
            qout << QStringLiteral("[Error] ");
            break;
        case MsgType::Warn:
            qout << QStringLiteral("[Warn] ");
            break;
        }
        qout << QStringLiteral("(") << info.line << QStringLiteral(", ")
             << info.charPositionInLine + 1 << QStringLiteral(") ") << info.info
             << Qt::endl;
    });

    // only take effects before parsing
    parser.setPointerMode(PointerMode::X64);
    parser.setPadAlignment(4);

    // parsing the file tests

    // parser.parse(CODE_PATH "/Test.h");
    // parser.parse(CODE_PATH "/TestPreDeclStruct.h");
    // parser.parse(CODE_PATH "/TestPreDeclUnion.h");
    // parser.parse(CODE_PATH "/TestPreEnum.h");
    // parser.parse(CODE_PATH "/TestAutoDeclStruct.h");
    parser.parse(CODE_PATH "/TestLargeInt.h");

    // dump message to check
    parser.dumpAllTypeDefines(qout);

    return 0;
}
