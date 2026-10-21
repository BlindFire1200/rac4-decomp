#include "common.h"

// Call method +0x8 with (5, 0, arg1).

typedef struct Type1 Type1;

typedef struct Type2 {
    char _p0[0x8];
    void (*f8)(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3);
} Type2;

struct Type1 {
    Type2 *f0;
};

void func_L00_0051ED40(Type1 *arg0, s32 arg1) {
    arg0->f0->f8(arg0, 5, 0, arg1);
}
