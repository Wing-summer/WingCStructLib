
// Top-level define and typedef
#define DEFAULT_VALUE  42
#define DVALUE \
          ((2 << 1) + 1)

// alignas can only be used in struct or union type

struct alignas(4) TestPad{
    char b0 : 6;
    char b1 : 2;
    int a;
    char ?;
    ushort ?;
};
