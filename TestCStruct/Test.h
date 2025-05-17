// Top-level define and typedef
#define DEFAULT_VALUE  42
typedef unsigned char  Byte;

// Enum for testing
enum TestEnum { Test1, Test2, Test3 };
enum Status { OK = 0u, ERROR = 1 << 0, WARN = 1 << 2 };

// A struct containing a nested struct and a nested union
struct Container {
    int id;
    
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
    
    enum Status state;
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

union Mirror;  // ignore forword declaration

union Mirror {
    struct Container c;      // struct inside union
};

// A stray semicolon to test that rule
;
