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

#include <QDebug>
#include <QDir>
#include <QFile>
#include <QList>
#include <QMap>
#include <QRandomGenerator>
#include <QSet>
#include <QTextStream>
#include <QtEndian>

#include "c/CStructLexer.h"
#include "c/CStructParser.h"
#include "cstructvisitorparser.h"
#include "ctypeparser.h"

#include <antlr4-runtime.h>
#include <array>

CTypeParser::~CTypeParser() {}

CTypeParser::CTypeParser()
    : _pmode(PointerMode::X64),
#ifdef Q_OS_WIN
      _lmode(LongMode::LLP64)
#else
      _lmode(LongMode::LP64)
#endif
{
    initialize();
}

void CTypeParser::initialize() {

#define ADD_TYPE(T, MT) type_maps_.insert(#T, qMakePair(MT, sizeof(T)))

#define ADD_TYPE_S(T, MT, S) type_maps_.insert(#T, qMakePair(MT, S))

    ADD_TYPE(uchar, QMetaType::UChar);
    ADD_TYPE(ushort, QMetaType::UShort);
    ADD_TYPE(uint, QMetaType::UInt);
    ADD_TYPE(ulong, QMetaType::ULong);

    using byte = unsigned char;
    using char8_t = unsigned char;
    using int8 = qint8;
    using int16 = qint16;
    using int32 = qint32;
    using int64 = qint64;
    using uint8 = quint8;
    using uint16 = quint16;
    using uint32 = quint32;
    using uint64 = quint64;
    using longlong = qlonglong;
    using ulonglong = qulonglong;

    using intptr = qintptr;
    using uintptr = quintptr;

    ADD_TYPE(bool, QMetaType::Bool);
    ADD_TYPE(char, QMetaType::Char);
    ADD_TYPE(short, QMetaType::Short);
    ADD_TYPE(int, QMetaType::Int);

    // LLP64: sizeof(long) = 4
    // LP64: sizeof(long) = 8
    ADD_TYPE(long, QMetaType::Long);

    ADD_TYPE(float, QMetaType::Float);
    ADD_TYPE(double, QMetaType::Double);
#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    ADD_TYPE(wchar_t, QMetaType::Char16);
#else
    ADD_TYPE(wchar_t, QMetaType::QChar);
#endif

    ADD_TYPE(char8_t, QMetaType::Char);
#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    ADD_TYPE(char16_t, QMetaType::Char16);
    ADD_TYPE(char32_t, QMetaType::Char32);
#else
    ADD_TYPE(char16_t, QMetaType::QChar);
    ADD_TYPE(char32_t, QMetaType::QChar);
#endif
    ADD_TYPE_S(void, QMetaType::Void, 0);

    ADD_TYPE(uchar, QMetaType::UChar);
    ADD_TYPE(byte, QMetaType::UChar);

    ADD_TYPE(int8, QMetaType::SChar);
    ADD_TYPE(int16, QMetaType::Short);
    ADD_TYPE(int32, QMetaType::Int);
    ADD_TYPE(int64, QMetaType::LongLong);

    ADD_TYPE(uint8, QMetaType::UChar);
    ADD_TYPE(uint16, QMetaType::UShort);
    ADD_TYPE(uint32, QMetaType::UInt);
    ADD_TYPE(uint64, QMetaType::ULongLong);

    ADD_TYPE(longlong, QMetaType::LongLong);
    ADD_TYPE(ulonglong, QMetaType::ULongLong);

    ADD_TYPE(intptr_t, QMetaType::LongLong);
    ADD_TYPE(uintptr_t, QMetaType::ULongLong);

    using BOOL = bool;
    using UCHAR = uchar;
    using BYTE = byte;
    using WORD = uint16;
    using DWORD = uint32;
    using QWORD = uint64;
    using DWORDLONG = QWORD;
    using FLOAT = float;
    using DOUBLE = double;
    using DWORD32 = uint32;
    using DWORD64 = uint64;

    ADD_TYPE(BOOL, QMetaType::Bool);
    ADD_TYPE(UCHAR, QMetaType::UChar);
    ADD_TYPE(BYTE, QMetaType::UChar);
    ADD_TYPE(WORD, QMetaType::UShort);
    ADD_TYPE(DWORD, QMetaType::UInt);
    ADD_TYPE(QWORD, QMetaType::ULongLong);
    ADD_TYPE(DWORDLONG, QMetaType::ULongLong);
    ADD_TYPE(FLOAT, QMetaType::Float);
    ADD_TYPE(DOUBLE, QMetaType::Double);
    ADD_TYPE(DWORD32, QMetaType::UInt);
    ADD_TYPE(DWORD64, QMetaType::UInt);

    using INT8 = qint8;
    using INT16 = qint16;
    using INT32 = qint32;
    using INT64 = qint64;

    ADD_TYPE(INT8, QMetaType::SChar);
    ADD_TYPE(INT16, QMetaType::Short);
    ADD_TYPE(INT32, QMetaType::Int);
    ADD_TYPE(INT64, QMetaType::LongLong);

    using UINT8 = quint8;
    using UINT16 = quint16;
    using UINT32 = quint32;
    using UINT64 = quint64;

    ADD_TYPE(UINT8, QMetaType::UChar);
    ADD_TYPE(UINT16, QMetaType::UShort);
    ADD_TYPE(UINT32, QMetaType::UInt);
    ADD_TYPE(UINT64, QMetaType::ULongLong);

    using SHORT = short;
    using INT = int;
    using LONG = int; // on windows, just keep LLP64
    using WCHAR = wchar_t;

    ADD_TYPE(SHORT, QMetaType::Short);
    ADD_TYPE(INT, QMetaType::Int);

    ADD_TYPE(LONG, QMetaType::Int);

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    ADD_TYPE(WCHAR, QMetaType::Char16);
#else
    ADD_TYPE(WCHAR, QMetaType::QChar);
#endif

    using LONGLONG = longlong;
    using ULONGLONG = ulonglong;

    ADD_TYPE(LONGLONG, QMetaType::LongLong);
    ADD_TYPE(ULONGLONG, QMetaType::ULongLong);

    using LONG32 = qint32;
    using LONG64 = qint64;

    ADD_TYPE(LONG32, QMetaType::Long);
    ADD_TYPE(LONG64, QMetaType::LongLong);

    using SIZE_T = size_t;
    if (sizeof(size_t) == sizeof(quint64)) {
        ADD_TYPE(size_t, QMetaType::ULongLong);
        ADD_TYPE(SIZE_T, QMetaType::ULongLong);
    } else {
        ADD_TYPE(size_t, QMetaType::ULong);
        ADD_TYPE(SIZE_T, QMetaType::ULong);
    }

    ADD_TYPE(int8_t, QMetaType::SChar);
    ADD_TYPE(int16_t, QMetaType::Short);
    ADD_TYPE(int32_t, QMetaType::Int);
    ADD_TYPE(int64_t, QMetaType::LongLong);

    ADD_TYPE(uint8_t, QMetaType::UChar);
    ADD_TYPE(uint16_t, QMetaType::UShort);
    ADD_TYPE(uint32_t, QMetaType::UInt);
    ADD_TYPE(uint64_t, QMetaType::ULongLong);
    ADD_TYPE(intptr_t, QMetaType::LongLong);
    ADD_TYPE(uintptr_t, QMetaType::ULongLong);

#undef ADD_TYPE
#undef ADD_TYPE_S

    base_types_ = type_maps_.keys();
}

bool CTypeParser::parseFile(const QString &file) {
    QFile ifs(file);
    if (!ifs.open(QIODevice::ReadOnly)) {
        qWarning() << "Failed to open file -" << file;
        return false;
    }

    return parseSource(ifs.readAll());
}

bool CTypeParser::parseSource(const QString &src) {
    if (src.isEmpty()) {
        return true;
    }

    antlr4::ANTLRInputStream input(src.toStdString());

    CStructLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    CStructParser parser(&tokens);
    parser.setErrorHandler(std::make_shared<antlr4::BailErrorStrategy>());

    CStructVisitorParser visitor(this);
    try {
        visitor.visit(parser.compilationUnit());
    } catch (...) {
        tokens.reset();
        parser.reset();
        parser.setErrorHandler(
            std::make_shared<antlr4::DefaultErrorStrategy>());
        parser.compilationUnit();
        return false;
    }

    return true;
}

/// Get size of a type (in bytes)
///
/// @param[in]  data_type    name of a data type, including both C data types
/// and user-defined struct/union/enum types
/// @return -1 if is data type is unknown, else return actual type length
///
/// @note Shouldn't return 0 for unknown data type since "void" type has zero
/// length
///
qsizetype CTypeParser::getTypeSize(const QString &data_type) const {
    if (type_maps_.contains(data_type)) {
        return type_maps_.value(data_type).second;
    } else if (enum_defs_.contains(data_type)) {
        return sizeof(qlonglong);
    } else {
        qCritical() << QStringLiteral("Unknown data type - ") + data_type;
        return -1;
    }
}

LongMode CTypeParser::longMode() const { return _lmode; }

void CTypeParser::setLongmode(LongMode newLmode) {
    // correct the size of long
    switch (newLmode) {
    case LongMode::LLP64:
        type_maps_["long"] = qMakePair(QMetaType::Long, sizeof(int));
        type_maps_["ulong"] = qMakePair(QMetaType::ULong, sizeof(uint));
        break;
    case LongMode::LP64:
        type_maps_["long"] = qMakePair(QMetaType::Long, sizeof(qlonglong));
        type_maps_["ulong"] = qMakePair(QMetaType::ULong, sizeof(qulonglong));
        break;
    }
    _lmode = newLmode;
}

PointerMode CTypeParser::pointerMode() const { return _pmode; }

void CTypeParser::setPointerMode(PointerMode newPmode) { _pmode = newPmode; }

const QHash<QString, QPair<QMetaType::Type, qsizetype>> &
CTypeParser::types() const {
    return type_maps_;
}

QPair<QMetaType::Type, qsizetype> CTypeParser::type(const QString &t) const {
    return type_maps_.value(t, qMakePair(QMetaType::Type::UnknownType, -1));
}

const QHash<QString, QList<VariableDeclaration>> &
CTypeParser::unionDefs() const {
    return union_defs_;
}

const QHash<QString, qulonglong> &CTypeParser::constDefs() const {
    return const_defs_;
}

const QHash<QString, QHash<QString, qint64>> &CTypeParser::enumDefs() const {
    return enum_defs_;
}

const QHash<QString, QList<VariableDeclaration>> &
CTypeParser::structDefs() const {
    return struct_defs_;
}

qsizetype CTypeParser::padAlignment() const { return kAlignment_; }

void CTypeParser::setPadAlignment(qsizetype newKAlignment) {
    static std::array<int, 5> allowList{1, 2, 4, 8, 16};
    if (std::find(allowList.begin(), allowList.end(), newKAlignment) !=
        allowList.end()) {
        kAlignment_ = newKAlignment;
    }
}

/// Dump the extracted type definitions
void CTypeParser::dumpTypeDefs() const {
    VariableDeclaration var;

    static QTextStream qout(stdout);

    static QString padding(4, ' ');

    // dump typedef definitions
    qout << "\ntypedef definitions:"
         << "\n--------------------" << Qt::endl;
    for (auto it = type_defs_.constKeyValueBegin();
         it != type_defs_.constKeyValueEnd(); ++it) {
        qout << padding << it->first << padding << " = " << it->second
             << Qt::endl;
    }

    // dump numeric const variables or macros
    qout << "\nconstant values:"
         << "\n--------------------" << Qt::endl;
    for (auto it = const_defs_.constKeyValueBegin();
         it != const_defs_.constKeyValueEnd(); ++it) {
        qout << padding << it->first << padding << " = " << it->second
             << Qt::endl;
    }

    // dump struct definitions
    qout << "\nstruct definitions:"
         << "\n--------------------" << Qt::endl;
    for (auto it = struct_defs_.constKeyValueBegin();
         it != struct_defs_.constKeyValueEnd(); ++it) {

        qout << "struct " << it->first << ":" << Qt::endl;

        auto members = it->second;
        while (!members.empty()) {
            var = members.front();
            qout << padding << var.data_type;

            if (var.is_pointer)
                qout << "* ";

            qout << padding << var.var_name;

            for (auto &dim : var.array_dims) {
                qout << "[" << dim << "]";
            }

            if (var.bit_size) {
                qout << " : " << var.bit_size;
            }

            qout << padding << "(off: " << var.offset
                 << ", size: " << var.var_size << ")" << Qt::endl;

            members.pop_front();
        }

        auto type = it->first;
        qout << padding << "(size = " << type_maps_.value(type).second << ")\n"
             << Qt::endl;
    }

    // dump union definitions
    qout << "\nunion definitions:"
         << "\n--------------------" << Qt::endl;
    for (auto itu = union_defs_.constKeyValueBegin();
         itu != union_defs_.constKeyValueEnd(); ++itu) {

        qout << "union " << itu->first << ":" << Qt::endl;

        auto members = itu->second;
        while (!members.isEmpty()) {
            var = members.front();
            qout << padding << var.data_type;

            if (var.is_pointer)
                qout << "* ";

            qout << padding << var.var_name;

            for (auto &dim : var.array_dims) {
                qout << "[" << dim << "]";
            }

            qout << padding << "(" << var.var_size << ")" << Qt::endl;

            members.pop_front();
        }
        qout << padding << "(size = " << type_maps_.value(itu->first).second
             << ")\n"
             << Qt::endl;
    }

    // dump enum definitions
    qout << "\nenum definitions:"
         << "\n--------------------" << Qt::endl;
    for (auto itv = enum_defs_.constKeyValueBegin();
         itv != enum_defs_.constKeyValueEnd(); ++itv) {

        qout << "enum " << itv->first << ":" << Qt::endl;

        auto members = itv->second;
        for (auto &&[key, value] : members.asKeyValueRange()) {
            qout << padding << key << "(" << value << ")" << Qt::endl;
        }

        qout << '\n' << Qt::endl;
    }
}

void CTypeParser::clear() {
    type_maps_.removeIf([this](decltype(type_maps_)::iterator p) {
        return !base_types_.contains(p.key());
    });
}

qsizetype
CTypeParser::calcUnionSize(const QList<VariableDeclaration> &members) const {
    qsizetype size = 0;
    for (auto it = members.begin(); it != members.end(); ++it) {
        size = qMax(size, it->var_size);
    }

    if (0 != size % kAlignment_) {
        size = static_cast<qsizetype>(ceil(size * 1.0 / kAlignment_) *
                                      kAlignment_);
    }

    return size;
}

/// Store the definition and size of a struct or union
///
/// For structs, the members are padded based on alignment, @see
/// CTypeParser::padStruct
///
void CTypeParser::storeStructUnionDef(const bool is_struct,
                                      const QString &type_name,
                                      QList<VariableDeclaration> &members) {
    qsizetype size;
    if (is_struct) {
        size = padStruct(members);
        struct_defs_[type_name] = members;
    } else {
        size = calcUnionSize(members);
        union_defs_[type_name] = members;
    }

    type_maps_[type_name] = qMakePair(QMetaType::User, size);
}

qsizetype CTypeParser::padStruct(QList<VariableDeclaration> &members) {
    // Helper to round up 'offset' to the next multiple of 'align'.
    auto align_up = [](qsizetype offset, qsizetype align) {
        return ((offset + align - 1) / align) * align;
    };

    const qsizetype struct_align = kAlignment_; // can be 1, 2, 4, 8, 16
    qsizetype total = 0;

    // Track the “current” bitfield storage unit:
    qsizetype bitfield_base_size = 0; // in bytes (e.g. 1 for char, 4 for int)
    qsizetype bitfield_capacity = 0;  // in bits  (base_size * 8)
    qsizetype bitfield_used = 0;      // bits already consumed
    qsizetype bitfield_offset = 0;    // byte-offset where this block starts
    QString bitfield_type;            // data_type of that block

    for (auto &member : members) {
        if (member.bit_size > 0) {
            // “want_bits” is how many bits this field needs:
            qsizetype want_bits = static_cast<qsizetype>(member.bit_size);

            // Each bitfield declares its own var_size (e.g. 4 for int, 1 for
            // char)
            qsizetype this_base_size = member.var_size;
            qsizetype this_capacity = this_base_size * 8;

            // If we haven’t started a block, OR
            // if the incoming bitfield’s base‐size differs from the current
            // block’s, OR if it won’t fit in the remaining bits of the current
            // block, then start a brand‐new storage unit here:
            bool needs_new_block =
                (bitfield_used == 0) ||
                (bitfield_base_size != this_base_size) ||
                (bitfield_used + want_bits > bitfield_capacity);

            if (needs_new_block) {
                // Align “total” up to this_base_size (but never exceed
                // struct_align)
                qsizetype align_req = std::min(this_base_size, struct_align);
                if (align_req < 1)
                    align_req = 1;
                total = align_up(total, align_req);

                // Start a fresh block of exactly this_base_size bytes:
                bitfield_offset = total;
                total += this_base_size;

                bitfield_base_size = this_base_size;
                bitfield_capacity = this_capacity;
                bitfield_used = 0;
                bitfield_type = member.data_type;
            }

            // Place this bitfield at bitfield_offset
            member.offset = bitfield_offset;
            bitfield_used += want_bits;

            // If we’ve exactly filled all bits, flush this block:
            if (bitfield_used >= bitfield_capacity) {
                bitfield_base_size = 0;
                bitfield_capacity = 0;
                bitfield_used = 0;
                bitfield_type.clear();
            }

        } else {
            // Non‐bitfield: clear any ongoing bitfield block
            bitfield_base_size = 0;
            bitfield_capacity = 0;
            bitfield_used = 0;
            bitfield_type.clear();

            // Compute how many elements (for arrays) or 1 (for scalar):
            size_t count = member.element_count();
            qsizetype block_size = member.var_size;
            qsizetype elem_size =
                (count > 0) ? (block_size / static_cast<qsizetype>(count))
                            : block_size;

            // Align “total” up to min(elem_size, struct_align)
            qsizetype align_req = std::min(elem_size, struct_align);
            if (align_req < 1)
                align_req = 1;
            total = align_up(total, align_req);

            member.offset = total;
            total += block_size;
        }
    }

    // Finally, align the entire struct size up to kAlignment_
    total = align_up(total, struct_align);
    return total;
}
