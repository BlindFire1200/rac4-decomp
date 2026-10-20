#include "common.h"

// Call method +0x18 of the object's table.

typedef struct Type1 Type1;

typedef struct Type2 {
    char _p0[0x18];
    void (*f18)(Type1 *arg0);
} Type2;

struct Type1 {
    Type2 *f0;
};

void func_L00_0051EE28(Type1 *arg0) {
    arg0->f0->f18(arg0);
}
