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

#define ADD_TYPE_U(T, MT)                                                      \
    ADD_TYPE(T, MT);                                                           \
    unsigned_types_.append(#T);

#define ADD_TYPE_S(T, MT, S) type_maps_.insert(#T, qMakePair(MT, S))

    using byte = unsigned char;
    using char8_t = unsigned char;
    using int8 = qint8;
    using int16 = qint16;
    using int32 = qint32;
    using int64 = qint64;
    using int16_le = qint16_le;
    using int16_be = qint16_be;
    using int32_le = qint32_le;
    using int32_be = qint32_be;
    using int64_le = qint64_le;
    using int64_be = qint64_be;
    using uint8 = quint8;
    using uint16 = quint16;
    using uint32 = quint32;
    using uint64 = quint64;
    using uint16_le = quint16_le;
    using uint16_be = quint16_be;
    using uint32_le = quint32_le;
    using uint32_be = quint32_be;
    using uint64_le = quint64_le;
    using uint64_be = quint64_be;
    using longlong = qlonglong;
    using ulonglong = qulonglong;

    ADD_TYPE_U(bool, QMetaType::Bool);
    ADD_TYPE(char, QMetaType::Char);
    ADD_TYPE(short, QMetaType::Short);
    ADD_TYPE(int, QMetaType::Int);

    // LLP64: sizeof(long) = 4
    // LP64: sizeof(long) = 8
    ADD_TYPE(long, QMetaType::Long);
    ADD_TYPE(float, QMetaType::Float);
    ADD_TYPE(double, QMetaType::Double);
#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    ADD_TYPE_U(wchar_t, QMetaType::Char16);
#else
    ADD_TYPE_U(wchar_t, QMetaType::QChar);
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

    ADD_TYPE_U(byte, QMetaType::UChar);

    ADD_TYPE(int8, QMetaType::SChar);
    ADD_TYPE(int16, QMetaType::Short);
    ADD_TYPE(int16_le, QMetaType::Short);
    ADD_TYPE(int16_be, QMetaType::Short);
    ADD_TYPE(int32, QMetaType::Int);
    ADD_TYPE(int32_le, QMetaType::Int);
    ADD_TYPE(int32_be, QMetaType::Int);
    ADD_TYPE(int64, QMetaType::LongLong);
    ADD_TYPE(int64_le, QMetaType::LongLong);
    ADD_TYPE(int64_be, QMetaType::LongLong);

    ADD_TYPE_U(uint8, QMetaType::UChar);
    ADD_TYPE_U(uint16, QMetaType::UShort);
    ADD_TYPE_U(uint16_le, QMetaType::UShort);
    ADD_TYPE_U(uint16_be, QMetaType::UShort);
    ADD_TYPE_U(uint32, QMetaType::UInt);
    ADD_TYPE_U(uint32_le, QMetaType::UInt);
    ADD_TYPE_U(uint32_be, QMetaType::UInt);
    ADD_TYPE_U(uint64, QMetaType::ULongLong);
    ADD_TYPE_U(uint64_le, QMetaType::ULongLong);
    ADD_TYPE_U(uint64_be, QMetaType::ULongLong);

    ADD_TYPE(longlong, QMetaType::LongLong);
    ADD_TYPE_U(ulonglong, QMetaType::ULongLong);

    using uint = unsigned int;
    ADD_TYPE_U(uint, QMetaType::UInt);

    using BOOL = bool;
    using BYTE = byte;
    using WORD = uint16;
    using DWORD = uint32;
    using QWORD = uint64;
    using DWORDLONG = QWORD;
    using FLOAT = float;
    using DOUBLE = double;
    using DWORD32 = uint32;
    using DWORD64 = uint64;

    ADD_TYPE_U(BOOL, QMetaType::Bool);
    ADD_TYPE_U(BYTE, QMetaType::UChar);
    ADD_TYPE_U(WORD, QMetaType::UShort);
    ADD_TYPE_U(DWORD, QMetaType::UInt);
    ADD_TYPE_U(QWORD, QMetaType::ULongLong);
    ADD_TYPE_U(DWORDLONG, QMetaType::ULongLong);
    ADD_TYPE(FLOAT, QMetaType::Float);
    ADD_TYPE(DOUBLE, QMetaType::Double);
    ADD_TYPE_U(DWORD32, QMetaType::UInt);
    ADD_TYPE_U(DWORD64, QMetaType::UInt);

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

    ADD_TYPE_U(UINT8, QMetaType::UChar);
    ADD_TYPE_U(UINT16, QMetaType::UShort);
    ADD_TYPE_U(UINT32, QMetaType::UInt);
    ADD_TYPE_U(UINT64, QMetaType::ULongLong);

    using SHORT = short;
    using INT = int;
    using LONG = int; // on windows, just keep LLP64
    using WCHAR = wchar_t;

    ADD_TYPE(SHORT, QMetaType::Short);
    ADD_TYPE(INT, QMetaType::Int);

    ADD_TYPE(LONG, QMetaType::Int);

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    ADD_TYPE_U(WCHAR, QMetaType::Char16);
#else
    ADD_TYPE_U(WCHAR, QMetaType::QChar);
#endif

    using LONGLONG = longlong;
    using ULONGLONG = ulonglong;

    ADD_TYPE(LONGLONG, QMetaType::LongLong);
    ADD_TYPE_U(ULONGLONG, QMetaType::ULongLong);

    using LONG32 = qint32;
    using LONG64 = qint64;

    ADD_TYPE(LONG32, QMetaType::Long);
    ADD_TYPE(LONG64, QMetaType::LongLong);

    using SIZE_T = size_t;
    if (sizeof(size_t) == sizeof(quint64)) {
        ADD_TYPE_U(size_t, QMetaType::ULongLong);
        ADD_TYPE_U(SIZE_T, QMetaType::ULongLong);
    } else {
        ADD_TYPE_U(size_t, QMetaType::ULong);
        ADD_TYPE_U(SIZE_T, QMetaType::ULong);
    }

    ADD_TYPE(int8_t, QMetaType::SChar);
    ADD_TYPE(int16_t, QMetaType::Short);
    ADD_TYPE(int32_t, QMetaType::Int);
    ADD_TYPE(int64_t, QMetaType::LongLong);

    ADD_TYPE_U(uint8_t, QMetaType::UChar);
    ADD_TYPE_U(uint16_t, QMetaType::UShort);
    ADD_TYPE_U(uint32_t, QMetaType::UInt);
    ADD_TYPE_U(uint64_t, QMetaType::ULongLong);

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
        return sizeof(int);
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
        type_maps_["long"] = qMakePair(QMetaType::Int, sizeof(int));
        break;
    case LongMode::LP64:
        type_maps_["long"] = qMakePair(QMetaType::LongLong, sizeof(qlonglong));
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
    static std::array<int, 4> allowList{1, 2, 4, 8};
    if (std::find(allowList.begin(), allowList.end(), newKAlignment) !=
        allowList.end()) {
        kAlignment_ = newKAlignment;
    }
}

/// Dump the extracted type definitions
void CTypeParser::dumpTypeDefs() const {
    VariableDeclaration var;

    static QTextStream qout(stdout);

    // dump typedef definitions
    qout << "\ntypedef definitions:"
         << "\n--------------------" << Qt::endl;
    for (auto it = type_defs_.constKeyValueBegin();
         it != type_defs_.constKeyValueEnd(); ++it) {
        qout << "\t" << it->first << "\t = " << it->second << Qt::endl;
    }

    // dump numeric const variables or macros
    qout << "\nconstant values:"
         << "\n--------------------" << Qt::endl;
    for (auto it = const_defs_.constKeyValueBegin();
         it != const_defs_.constKeyValueEnd(); ++it) {
        qout << "\t" << it->first << "\t = " << it->second << Qt::endl;
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
            qout << '\t' << var.data_type;

            if (var.is_pointer)
                qout << "* ";

            qout << "\t" << var.var_name;

            for (auto &dim : var.array_dims) {
                qout << "[" << dim << "]";
            }

            qout << "\t(off: " << var.offset << ", size: " << var.var_size
                 << ")" << Qt::endl;

            members.pop_front();
        }

        auto type = it->first;
        qout << "\t(size = " << type_maps_.value(type).second << ")\n"
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
            qout << '\t' << var.data_type;

            if (var.is_pointer)
                qout << "* ";

            qout << "\t" << var.var_name;

            for (auto &dim : var.array_dims) {
                qout << "[" << dim << "]";
            }

            qout << "\t(" << var.var_size << ")" << Qt::endl;

            members.pop_front();
        }
        qout << "\t(size = " << type_maps_.value(itu->first).second << ")\n"
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
            qout << '\t' << key << "(" << value << ")" << Qt::endl;
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
    // Helper: round up to next multiple of 'align'
    auto align_up = [](qsizetype offset, qsizetype align) {
        return ((offset + align - 1) / align) * align;
    };

    qsizetype total = 0;
    qsizetype max_align = 1;

    // Bitfield state
    qsizetype bit_offset = 0; // bits used in current storage unit
    qsizetype bit_base_offset =
        0;                // starting byte offset of current bitfield block
    QString current_type; // data_type of current bitfield block
    qsizetype current_base_size = 0; // size in bytes of base storage unit

    for (auto &member : members) {
        if (member.bit_size > 0) {
            // Bitfield handling: pack into base storage units
            qsizetype base_size = member.var_size; // e.g. sizeof(int)
            qsizetype base_bits = base_size * 8;
            qsizetype bits_needed = member.bit_size;

            bool start_new = (bit_offset == 0) ||
                             (current_type != member.data_type) ||
                             (bits_needed > (base_bits - bit_offset));
            if (start_new) {
                // Align to base storage unit
                total = align_up(total, base_size);
                bit_base_offset = total;
                total += base_size;

                bit_offset = 0;
                current_type = member.data_type;
                current_base_size = base_size;
                max_align = std::max(max_align, base_size);
            }

            // Assign member offset into the bitfield block
            member.offset = bit_base_offset;
            // Optionally store bit offset: member.mask determines bit position

            bit_offset += bits_needed;
            // If filled, reset to force new block next time
            if (bit_offset >= base_bits) {
                bit_offset = 0;
                current_type.clear();
            }
        } else {
            // Non-bitfield: reset bitfield grouping
            bit_offset = 0;
            current_type.clear();

            // Byte-aligned fields (including arrays)
            qsizetype block_size = member.var_size;
            qsizetype elem_size = block_size / member.element_count();
            qsizetype align_req = elem_size > 0 ? elem_size : 1;
            max_align = std::max(max_align, align_req);

            total = align_up(total, align_req);
            member.offset = total;
            total += block_size;
        }
    }

    // Final struct size aligned to largest alignment
    total = align_up(total, max_align);
    return total;
}
