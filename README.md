## WingCStructLib

该仓库为 WingHexExplorer2 的 WingCStruct 插件解析 C 结构体基础库的预览版本。协议为`AGPL-v3`。代码完成并测试成功之后将会直接合并到 WingHexExplorer2 仓库。

该库与 Qt 深度绑定，因为 WingHexExplorer2 原来的代码就使用了一些 Qt 的特性，我不会再提供一个非 Qt 的版本。感兴趣可以自行 fork 去实现一个无需 Qt 的版本，也欢迎 PR 。

## 语法说明

本库参考 C 结构体进行描述数据结构，但会比 C 原语法有更多的限制，为了保证简洁丢弃了一些特性或者不常用的声明，但基本上原有的纯描述结构体的头文件是基本都能用的，只要你的写法并不是特别怪。

### 支持的语法

* struct 声明以及符合纯 C 结构体嵌套声明
* enum 声明
* union 声明
* typedef 声明
* #define 预处理指令中的`#define [标识符] [可计算为最终数字结果的表达式]`，其他忽略
* #include 预处理指令，仅支持`#include "xxx.h"`
* 支持位域和内存对齐
* 支持注释
  
### 变量类型

本语法解析器支持原 C 内置类型以及常见标准库的别名、Windows 变量类型宏以及我自定义的别名，如下所示：

* void
* bool
* char
* short
* int
* long
* float
* double
* uchar
* ushort
* uint
* ulong
* wchar_t
* char8_t
* char16_t
* char32_t
* byte
* int8
* int16
* int32
* int64
* uint8
* uint16
* uint32
* uint64
* longlong
* ulonglong
* intptr
* uintptr
* size_t
* BOOL
* UCHAR
* BYTE
* WORD
* DWORD
* QWORD
* DWORDLONG
* FLOAT
* DOUBLE
* DWORD32
* DWORD64
* INT8
* INT16
* INT32
* INT64
* UINT8
* UINT16
* UINT32
* UINT64
* SHORT
* INT
* LONG
* WCHAR
* LONGLONG
* ULONGLONG
* LONG32
* LONG64
* SIZE_T
* int8_t
* int16_t
* int32_t
* int64_t
* uint8_t
* uint16_t
* uint32_t
* uint64_t
* intptr_t
* uintptr_t

你可以像内置变量一样正常使用它们，它们的字节大小遵循 C 标准。

但是，有些类型的大小会很特殊，尤其针对`long`的字节大小规定就有两种，在不同的操作系统上，它具有不同的字节大小，你可以自行查询`LLP64`和`LP64`，但对于`LONG`，由于它是`Windows`的宏，所以它的大小是确定的，遵守`LLP64`，故大小为 4 个字节。

以下类型的大小受`PointerMode`的影响 —— 32位还是64位：

* intptr_t
* uintptr_t
* intptr_t
* uintptr_t
* 其他指针类型，比如 `char*`、`int*` 等等

## 原变量类型声明

纯 C 支持`signed`、`unsigned`、`const`，这些该库也支持，但是像`auto`、`volatile`、`restrict`这样的关键字不会受支持，请用它修饰的变量类型移除这些不受支持的关键字。

对于变量类型声明，我用几个`antlr4`语法结构描述了它：

```g4
// pure C types
internalBasicTypes
    : signOrUnsigned?  Const? ('char' | 'short' | 'int' | 'long')
    | ('char' | 'short' | 'int' | 'long')  Const? signOrUnsigned? 
    | signOrUnsigned?  Const? 'long' 'long'
    | 'long' 'long' Const? signOrUnsigned?
    | 'float'
    | 'double'
;

signOrUnsigned
    : Signed 
    | Unsigned
    ;

typeSpecifier
    : 'void' 
    | internalBasicTypes
    | structOrUnionSpecifier
    | enumSpecifier
    | Identifier
    ;

specifierQualifierList
    : Const? typeSpecifier Const?
    ;
```

实际解析的时候，会解析`specifierQualifierList`，这个就是解析变量类型声明的规则。你可以明确看到，我对原 C 支持的声明方式做了进一步限制，这是为了方便简化编写更贴合上下文无关的语法 + `typedef`做出的一点牺牲。

如果你对`antlr4`语法不熟悉，强烈建议去看一下，其实很简洁明了，还是很容易懂的。

在解析过程中，`const`会被忽略掉，因为这个对二进制分析没有任何帮助，但通常有这个修饰来限定访问权限，是可以被认为可理解且兼容的，而那些不常用的关键字不纳入考虑范围内。

### struct 和 union

完全支持原生语法。不过在有关内存对齐上，我加入了`alignas`特性以覆盖内存对齐属性。虽然这是个 C++ 关键字，但这个在这里只能修饰结构体和联合体，且内容只能为 1、2、4、8、16：

```c
struct alignas(4) TestPad{
    char b0 : 6;
    char b1 : 2;
    int a;
    char b;
    ushort c;
};
```

结果为：

```bash
struct TestPad:
    char    b0 : 6    (off: 0, size: 1) { mask: 3f, shift: 0 }
    char    b1 : 2    (off: 0, size: 1) { mask: 3, shift: 6 }
    int     a         (off: 4, size: 4)
    char    b         (off: 8, size: 1)
    ushort  c         (off: 12, size: 2)
    (size = 16)
```

### typedef 和 enum

完全支持原生语法。

### 其他

剩下的我就强调一点：`#define [标识符] [可计算为最终数字结果的表达式]`。此时该预处理指令将会失去替换文本的功能，而是一个普通的常量生命语句，类似`constexpr`。因为这种形式太常见，通常用于常量声明，于是就加上这个特例了。

其他的就没什么可以强调了。

## 写到最后

该库开发耗费了我大量时间上手、开发、调试。请给个 star 来表示对我的支持。也欢迎投喂：

> If you are not Chinese, you can use [Afadian](https://afdian.com/a/wingsummer) to support me.

**<p align="center">您的每一份支持都将是本项目推进的强大动力，十分感谢您的支持</p>**

<p align="center">

<img alt="捐助" src="Donate.jpg" />
<p align="center">感谢支持</p>
</p>

该库一旦完成，将会合并到 WingHexExplorer2，距离完善还会有一段时间。如果你觉得该十六进制编辑器很好用的话，也欢迎 star 和赞助或者帮忙多多宣传，请注意我的开源协议！感谢！
