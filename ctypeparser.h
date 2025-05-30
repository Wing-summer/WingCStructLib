/*==============================================================================
** Copyright (C) 2024-2027 WingSummer
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

#ifndef CTYPE_PARSER_H
#define CTYPE_PARSER_H

#include "define.h"

#include <QDir>
#include <QFile>
#include <QHash>
#include <QList>
#include <QPair>
#include <QRegularExpression>
#include <QStringList>
#include <QTextStream>

class CStructVisitorParser;

enum class PointerMode { X86, X64 };

enum class LongMode { LLP64, LP64 };

class CTypeParser {
    friend class CStructVisitorParser;

public:
    explicit CTypeParser();
    virtual ~CTypeParser();

public:
    bool parseFile(const QString &file);
    bool parseSource(const QString &src);

public:
    qsizetype padAlignment() const;

    ///
    /// \brief set the struct alignment
    /// \param newKAlignment alignment value (only for 1, 2, 4, 8)
    /// \warning it takes no effect for structs/union that
    ///          already have been added
    ///
    void setPadAlignment(qsizetype newKAlignment);

    PointerMode pointerMode() const;

    ///
    /// \brief set the pointer size mode
    /// \param newPmode
    /// \warning it takes no effect for structs/union that
    ///          already have been added
    ///
    void setPointerMode(PointerMode newPmode);

    LongMode longMode() const;

    ///
    /// \brief set the specification rule for long type
    /// \param newLmode
    /// \warning it takes no effect for structs/union that
    ///          already have been added
    ///
    void setLongmode(LongMode newLmode);

public:
    const QHash<QString, QList<VariableDeclaration>> &structDefs() const;

    const QHash<QString, QHash<QString, qint64>> &enumDefs() const;

    const QHash<QString, QPair<QMetaType::Type, qsizetype>> &types() const;

    QPair<QMetaType::Type, qsizetype> type(const QString &t) const;

    const QHash<QString, qulonglong> &constDefs() const;

    const QHash<QString, QList<VariableDeclaration>> &unionDefs() const;

public:
    void dumpTypeDefs() const;

    void clear();

private:
    qsizetype padStruct(QList<VariableDeclaration> &members);
    qsizetype calcUnionSize(const QList<VariableDeclaration> &members) const;

    void storeStructUnionDef(const bool is_struct, const QString &type_name,
                             QList<VariableDeclaration> &members);

private:
    /// read in basic data such as keywords/qualifiers, and basic data type
    /// sizes
    void initialize();

    void findHeaderFiles(const QString &path);
    QString getFile(QString &filename) const;

    qsizetype getTypeSize(const QString &data_type) const;

    /// class members
private:
    qsizetype kAlignment_ = 1; ///< alignment

private:
    CStructVisitorParser *_visitor = nullptr;

    PointerMode _pmode;
    LongMode _lmode;

    /// Size of C data types and also user-defined struct/union types
    /// @note All enum types have fixed size, so they're not stored
    QHash<QString, QPair<QMetaType::Type, qsizetype>> type_maps_;

    /// basic types
    QStringList base_types_;

    /// unsigned types
    QStringList unsigned_types_;

    /// Parsing result - extracted type definitions
    /// for below 3 maps:
    /// key     - type name
    /// value   - type members

    /// struct definitions
    QHash<QString, QList<VariableDeclaration>> struct_defs_;

    /// union definitions
    QHash<QString, QList<VariableDeclaration>> union_defs_;

    /// typedef definitions
    QHash<QString, QString> type_defs_;

    /// enum definitions
    QHash<QString, QHash<QString, qint64>> enum_defs_;

    /// constants and macros that have integer values
    /// key     - constant/macro name
    /// value   - an integer (all types of number are cast to long type for
    /// convenience)
    QHash<QString, qulonglong> const_defs_;
};

#endif // _TYPE_PARSER_H_
