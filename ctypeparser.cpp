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
#include "cstructerrorlistener.h"
#include "cstructerrorstrategy.h"
#include "cstructvisitorparser.h"
#include "ctypeparser.h"

#include <antlr4-runtime.h>
#include <array>

// Struct = QMetaType::User

CTypeParser::~CTypeParser() {}

CTypeParser::CTypeParser(const std::function<void(const MsgInfo &)> &msgcb)
    :
#if WORDSIZE == 8
      _pmode(PointerMode::X64),
#else
      _pmode(PointerMode::X86),
#endif
#ifdef Q_OS_WIN
      _lmode(LongMode::LLP64)
#else
      _lmode(LongMode::LP64)
#endif
      ,
      _msgcb(msgcb) {
    Q_ASSERT(_msgcb);

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

    ADD_TYPE(intptr, QMetaType::VoidStar);
    ADD_TYPE(uintptr, QMetaType::VoidStar);

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
    ADD_TYPE(intptr_t, QMetaType::VoidStar);
    ADD_TYPE(uintptr_t, QMetaType::VoidStar);

#undef ADD_TYPE
#undef ADD_TYPE_S

    base_types_ = type_maps_.keys();
}

bool CTypeParser::parseFile(const QString &file) {
    auto fname = file.toStdString();

    std::ifstream fs(fname);
    if (!fs.is_open()) {
        return false;
    }

    antlr4::ANTLRInputStream input(fs);
    input.name = fname;

    CStructLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    CStructParser parser(&tokens);
    parser.removeErrorListeners();
    parser.setErrorHandler(std::make_shared<antlr4::BailErrorStrategy>());

    CStructErrorListener lis(_msgcb);
    CStructVisitorParser visitor(this, &lis);

    try {
        visitor.visit(parser.compilationUnit());
    } catch (...) {
        clear();
        tokens.reset();
        parser.reset();

        parser.setErrorHandler(std::make_shared<CStructErrorStrategy>());

        parser.addErrorListener(&lis);

        parser.compilationUnit();

        clear();
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

const QHash<QString, QPair<QString, bool>> &CTypeParser::typeDefs() const {
    return type_defs_;
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

void CTypeParser::setPointerMode(PointerMode newPmode) {
    switch (newPmode) {
    case PointerMode::X86:
        type_maps_["intptr_t"] =
            qMakePair(QMetaType::VoidStar, sizeof(quint32));
        type_maps_["uintptr_t"] =
            qMakePair(QMetaType::VoidStar, sizeof(quint32));
        type_maps_["intptr"] = qMakePair(QMetaType::VoidStar, sizeof(quint32));
        type_maps_["uintptr"] = qMakePair(QMetaType::VoidStar, sizeof(quint32));
        break;
    case PointerMode::X64:
        type_maps_["intptr_t"] =
            qMakePair(QMetaType::VoidStar, sizeof(quint64));
        type_maps_["uintptr_t"] =
            qMakePair(QMetaType::VoidStar, sizeof(quint64));
        type_maps_["intptr"] = qMakePair(QMetaType::VoidStar, sizeof(quint64));
        type_maps_["uintptr"] = qMakePair(QMetaType::VoidStar, sizeof(quint64));
        break;
    }
    _pmode = newPmode;
}

const QHash<QString, QPair<QMetaType::Type, qsizetype>> &
CTypeParser::types() const {
    return type_maps_;
}

QPair<QMetaType::Type, qsizetype>
CTypeParser::typeInfo(const QString &t) const {
    return type_maps_.value(t, qMakePair(QMetaType::Type::UnknownType, 0));
}

CTypeParser::DeclType CTypeParser::type(const QString &t) const {
    if (type_defs_.contains(t)) {
        return DeclType::TypeDef;
    }
    if (const_defs_.contains(t)) {
        return DeclType::Constant;
    }
    if (enum_defs_.contains(t)) {
        return DeclType::Enum;
    }
    if (struct_defs_.contains(t)) {
        return DeclType::Struct;
    }
    if (union_defs_.contains(t)) {
        return DeclType::Union;
    }
    return DeclType::Invalid;
}

const QHash<QString, QList<VariableDeclaration>> &
CTypeParser::unionDefs() const {
    return union_defs_;
}

const QHash<QString, std::variant<qint64, quint64>> &
CTypeParser::constDefs() const {
    return const_defs_;
}

const QHash<QString, QHash<QString, int>> &CTypeParser::enumDefs() const {
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
void CTypeParser::dumpAllTypeDefines(QTextStream &output) const {
    VariableDeclaration var;

    static QString padding(4, ' ');

    // dump typedef definitions
    output << "\ntypedef definitions:"
           << "\n--------------------" << Qt::endl;
    for (auto it = type_defs_.constKeyValueBegin();
         it != type_defs_.constKeyValueEnd(); ++it) {
        output << padding << it->first << " = " << it->second.first;
        if (it->second.second) {
            output << '*';
        }
        output << Qt::endl;
    }

    // dump numeric const variables or macros
    output << "\nconstant values:"
           << "\n--------------------" << Qt::endl;
    for (auto it = const_defs_.constKeyValueBegin();
         it != const_defs_.constKeyValueEnd(); ++it) {
        auto v = it->second;
        output << padding << it->first << padding << " = ";
        if (std::holds_alternative<qint64>(v)) {
            output << std::get<qint64>(v);
        } else if (std::holds_alternative<quint64>(v)) {
            output << std::get<quint64>(v);
        } else {
            output << "?";
        }
        output << Qt::endl;
    }

    // dump struct definitions
    output << "\nstruct definitions:"
           << "\n--------------------" << Qt::endl;
    for (auto it = struct_defs_.constKeyValueBegin();
         it != struct_defs_.constKeyValueEnd(); ++it) {

        output << "struct " << it->first << ":" << Qt::endl;

        auto members = it->second;
        while (!members.empty()) {
            var = members.front();
            output << padding << var.data_type;

            if (var.is_pointer)
                output << "* ";

            output << padding;
            if (var.var_name.isEmpty()) {
                output << '?';
            } else {
                output << var.var_name;
            }

            for (auto &dim : var.array_dims) {
                output << "[" << dim << "]";
            }

            if (var.bit_size) {
                output << " : " << var.bit_size;
            }

            output << padding << "(off: " << var.offset
                   << ", size: " << var.var_size << ")";

            if (var.bit_size) {
                output << " { mask: " << QString::number(var.op.mask, 16)
                       << ", shift: " << var.op.shift << " }";
            }

            output << Qt::endl;

            members.pop_front();
        }

        auto type = it->first;
        output << padding << "(size = " << type_maps_.value(type).second
               << ")\n"
               << Qt::endl;
    }

    // dump union definitions
    output << "\nunion definitions:"
           << "\n--------------------" << Qt::endl;
    for (auto itu = union_defs_.constKeyValueBegin();
         itu != union_defs_.constKeyValueEnd(); ++itu) {

        output << "union " << itu->first << ":" << Qt::endl;

        auto members = itu->second;
        while (!members.isEmpty()) {
            var = members.front();
            output << padding << var.data_type;

            if (var.is_pointer)
                output << "* ";

            output << padding;
            if (var.var_name.isEmpty()) {
                output << '?';
            } else {
                output << var.var_name;
            }

            for (auto &dim : var.array_dims) {
                output << "[" << dim << "]";
            }

            output << padding << "(" << var.var_size << ")" << Qt::endl;

            members.pop_front();
        }
        output << padding << "(size = " << type_maps_.value(itu->first).second
               << ")\n"
               << Qt::endl;
    }

    // dump enum definitions
    output << "\nenum definitions:"
           << "\n--------------------" << Qt::endl;
    for (auto itv = enum_defs_.constKeyValueBegin();
         itv != enum_defs_.constKeyValueEnd(); ++itv) {

        output << "enum " << itv->first << ":" << Qt::endl;

        auto members = itv->second;
        for (auto &&[key, value] : members.asKeyValueRange()) {
            output << padding << key << "(" << value << ")" << Qt::endl;
        }

        output << '\n' << Qt::endl;
    }
}

bool CTypeParser::finish() {
    QStringList ret;

    // only struct/union can be incomplete

    for (auto &l : padding_later_) {
    }

    return true;
}

bool CTypeParser::isIncompleteType(const QString &name, LazyType type) {
    return std::find_if(padding_later_.begin(), padding_later_.end(),
                        [type](const LazyStructUnion &lsu) {
                            // TODO
                        }) != padding_later_.end();
}

void CTypeParser::clear() {
    type_maps_.removeIf([this](decltype(type_maps_)::iterator p) {
        return !base_types_.contains(p.key());
    });
    const_defs_.clear();
    enum_defs_.clear();
    type_defs_.clear();
    struct_defs_.clear();
    union_defs_.clear();
    _anomyIndex = 0;
}

qsizetype CTypeParser::calcUnionSize(const QList<VariableDeclaration> &members,
                                     qsizetype alignment) const {
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
                                      QList<VariableDeclaration> &members,
                                      qsizetype alignment, bool padLater) {
    if (!padLater) {
        qsizetype size;
        if (is_struct) {
            size = padStruct(members, alignment);
            struct_defs_[type_name] = members;
        } else {
            size = calcUnionSize(members, alignment);
            union_defs_[type_name] = members;
        }

        // struct meta type = QMetaType::User;
        type_maps_[type_name] = qMakePair(QMetaType::User, size);
    } else {
        LazyStructUnion lsu;
        lsu.is_struct = is_struct;
        lsu.type_name = type_name;
        lsu.members = members;
        lsu.alignment = alignment;
        padding_later_.append(lsu);
    }
}

qsizetype CTypeParser::padStruct(QList<VariableDeclaration> &members,
                                 qsizetype alignment) {
    // Helper: round 'offset' up to the next multiple of 'align'
    auto align_up = [](qsizetype offset, qsizetype align) {
        return ((offset + align - 1) / align) * align;
    };

    qsizetype total = 0;

    // Bitfield‐tracking state
    //
    // We'll treat each
    // bitfield’s storage unit (char=1 byte, int=4 bytes, etc.) as aligned to
    // exactly 'alignment' bytes.
    qsizetype bitfield_base_size = 0; // size in bytes of current unit
    qsizetype bitfield_capacity = 0;  // bits in that unit = base_size * 8
    qsizetype bitfield_used = 0;      // bits already consumed
    qsizetype bitfield_offset = 0;    // byte offset where that unit starts
    QString bitfield_type;            // data_type of ongoing bitfield block

    for (auto &member : members) {
        if (member.bit_size > 0) {
            //
            // Bitfield branch
            //
            // Determine this bitfield’s declared storage‐unit size (in bytes).
            //   e.g. var_size=4 → int (32 bits), var_size=1 → char (8 bits).
            qsizetype this_base_size = member.var_size;
            qsizetype this_capacity = this_base_size * 8;
            qsizetype want_bits = static_cast<qsizetype>(member.bit_size);

            // Must start a new unit if:
            //  1) No unit is active (bitfield_used == 0), or
            //  2) This bitfield’s var_size differs from the current block’s
            //  base_size, or 3) Not enough bits remain in the current block.
            bool needs_new_block =
                (bitfield_used == 0) ||
                (bitfield_base_size != this_base_size) ||
                (bitfield_used + want_bits > bitfield_capacity);

            if (needs_new_block) {
                // Align 'total' up to exactly 'alignment' bytes (ignore natural
                // alignment)
                qsizetype align_req = alignment;
                if (align_req < 1)
                    align_req = 1;
                total = align_up(total, align_req);

                // Start a new bitfield storage unit of size 'this_base_size'
                bitfield_offset = total;
                total += this_base_size;

                bitfield_base_size = this_base_size;
                bitfield_capacity = this_capacity;
                bitfield_used = 0;
                bitfield_type = member.data_type;
            }

            // Assign offset, mask, and shift for this bitfield:
            member.offset = bitfield_offset;
            member.op.shift = bitfield_used;
            member.op.mask = ((size_t(1) << member.bit_size) - 1);
            bitfield_used += want_bits;

            // If this unit is now exactly full, flush it
            if (bitfield_used >= bitfield_capacity) {
                bitfield_base_size = 0;
                bitfield_capacity = 0;
                bitfield_used = 0;
                bitfield_type.clear();
            }

        } else {
            //
            // Non‐bitfield (scalar or array)
            //
            // Clear any ongoing bitfield block
            bitfield_base_size = 0;
            bitfield_capacity = 0;
            bitfield_used = 0;
            bitfield_type.clear();

            // Compute total block_size (already given by member.var_size).
            // We do NOT use natural alignment at all; instead align every field
            // to exactly 'alignment' bytes.
            qsizetype block_size = member.var_size;

            // Align 'total' up to exactly 'alignment' bytes
            qsizetype align_req = alignment;
            if (align_req < 1)
                align_req = 1;
            total = align_up(total, align_req);

            member.offset = total;
            total += block_size;
        }
    }

    // Final struct padding
    //
    // Align the overall
    // struct size up to 'alignment' bytes.
    total = align_up(total, alignment);
    return total;
}
