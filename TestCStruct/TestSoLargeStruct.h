enum { I64_MAX_LITERAL = 9223372036854775807ULL };

struct alignas(4) OverflowA {
    char a[I64_MAX_LITERAL];
    char b[I64_MAX_LITERAL];
    char c[1];
};


struct Outer {
    struct Inner {
        char inner_arr[I64_MAX_LITERAL];
    } inner;
    char tail[2];
};

union alignas(4) BigUnion {
    char u1[I64_MAX_LITERAL];
    short s;
};

#define BIG_HEX 0xFFFFFFFFFFFFFFFFULL
struct OverflowC {
    char m1[BIG_HEX];
    char m2[2];
};

enum BigEnum {
    E_BIG = 9223372036854775807ULL
};
