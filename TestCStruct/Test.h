// other marcos will be ignored
#ifdef OS_WIN
#endif

// Top-level define and typedef
#define DEFAULT_VALUE  42
#define DVALUE \
                    ((2 << 1) + 1)
typedef unsigned char  Byte;

// Enum for testing
enum TestEnum { Test1, Test2, Test3 };
enum Status { OK = (8u), ERROR = 1 << 0 << 1 << 1, WARN = 1 << 4 };

struct Cont {
    int id[8][4];
};

// A struct containing a nested struct and a nested union
struct Container {
    int id, uid;

    void (*greet)(const char *name);  // function pointer
    
    // Nested struct
    struct InnerStruct {
        short x;
        short y : 4;   // bit-field
        short   : 3;   // unnamed padding
    } coords;
    
    // Nested union
    union InnerUnion {
        float f;
        Byte b[2+3*2];
    } raw;

    uint8 te;
    
    enum Status state; // pre-declaration
};

// A union containing a nested struct and a nested union
union Variant {
    
    // Nested struct inside union
    struct {
        char name[DEFAULT_VALUE][1];
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
