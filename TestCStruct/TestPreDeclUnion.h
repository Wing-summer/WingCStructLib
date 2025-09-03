#define TEST_VALUE 5

union Test;

typedef union Test UnionTest;

struct TestInc{
    int a;
    Test b;
};

typedef struct TestInc StructTest;

union Test{
    int a;
    int b;
    char c;
};

