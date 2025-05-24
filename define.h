#ifndef DEFINE_H
#define DEFINE_H

#include <QString>

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
typedef struct {
    QString data_type;  ///< name of a data type, either basic type or
                        ///< user-defined type
    QString var_name;   ///< variable name
    qsizetype offset;   ///< member offset in struct: -1 for non-struct
    size_t array_size;  ///< array size: 0 for non-array
    bool is_pointer;    ///< true when it's a pointer
    qsizetype var_size; ///< size in bytes
} VariableDeclaration;

#endif // DEFINE_H
