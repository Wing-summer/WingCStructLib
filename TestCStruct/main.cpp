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
