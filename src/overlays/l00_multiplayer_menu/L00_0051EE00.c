#include "common.h"

// Call method +0x18 with (0x101, arg2, arg1).

typedef struct Type1 Type1;

typedef struct Type2 {
    char _p0[0x18];
    void (*f18)(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3);
} Type2;

struct Type1 {
    Type2 *f0;
};

void func_L00_0051EE00(Type1 *arg0, s32 arg1, s32 arg2) {
    arg0->f0->f18(arg0, 0x101, arg2, arg1);
}
