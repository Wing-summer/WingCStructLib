// other marcos will be ignored
#ifdef OS_WIN
#endif

typedef unsigned char Byte;
typedef const char* str ;

#include "TestOut.h"

// we dont't support #include <xxx.h>

// Enum for testing
enum TestEnum { Test1, Test2, Test3 };
enum Status { OK = (8u), ERROR = 1 << 0 << 1 << 1, WARN = 1 << 4 };

struct Cont {
    int bf : 3;
    char bff : 6;
    char : 2;
    char : 3;
    int vb[sizeof(Status)];
    uint id[8][4],sub;
    char c;
    char tc[3];
    const int unsigned op;
    int* h;
    const char ch;
};

struct alignas(4) NestAlign{
    int a;
    struct NAlign{
        char a;
        int b;
    };
};

typedef union {
    int heu;
    short ss;
    uint64 ts;
} UCont;

// A struct containing a nested struct and a nested union
struct Container {
    int id, uid;
    
    // Nested struct
    struct InnerStruct {
        short x;
        short y : 4;   // bit-field
        short   : 3;   // unnamed padding
    } coords;
    
    // Nested union
    union InnerUnion {
        float f;
        byte b[2+3*2];
    } raw;

    uint8 te;
};


// A union containing a nested struct and a nested union
union Variant {

    // Nested struct inside union
    struct {
        char name[DEFAULT_VALUE];
        int  count;
    } info;

    // Nested union inside union
    union {
        long  L;
        double D;
    } numeric;
};

// A struct that itself contains the above union, and a union that contains the above struct
struct Mix {
    enum key_t { Host, Cookie, Agent };
    union Variant v;         // union inside struct
};

union Mirror;  // forword declaration

union Mirror {
    struct Container c;      // struct inside union
};

// A stray semicolon to test that rule
;
