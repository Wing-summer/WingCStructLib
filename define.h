#ifndef DEFINE_H
#define DEFINE_H

#include <QString>
#include <QVector>

/// @beief Struct for variable declaration
///
/// A variable declaration may contain 4 parts
/// (take this statement as example: char* argv[2]):
///    - data_type:     char
///    - var_name:      argv
///    - array_size:    2
///    - is_pointer:    true
/// @note Only one-demension array is supported here, but it's easy to extend
/// with this awareness
///
struct VariableDeclaration {
    QString data_type;  ///< name of a data type, either basic type or
                        ///< user-defined type
    QString var_name;   ///< variable name
    qsizetype offset = -1;   ///< member offset in struct: -1 for non-struct
    size_t bit_size = 0;     // int v : bit_size , 0 for no bit_size exists
    struct {
        size_t shift = 0;
        size_t mask = std::numeric_limits<size_t>::max(); // mask for bit_field
    } op;
    QVector<size_t> array_dims; ///< array size: empty for non-array
    bool is_pointer = false; ///< true when it's a pointer
    qsizetype var_size = -1; ///< total size in bytes

public:
    size_t element_count() const {
        size_t ret = 1;
        for (auto &dims : array_dims) {
            ret *= dims;
        }
        return ret;
    }
};

enum class MsgType { Error, Warn };

struct MsgInfo {
    MsgType type = MsgType::Error;
    size_t line = 0;
    size_t charPositionInLine = 0;
    QString info;
};

#endif // DEFINE_H
