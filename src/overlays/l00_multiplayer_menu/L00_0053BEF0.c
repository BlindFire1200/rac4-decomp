#include "common.h"

// Clear +0xC, +0x1C and +0x20.

typedef struct Type1 {
    char _p0[0xC];
    s32 fC;
    char _p10[0x1C - 0x10];
    s32 f1C;
    s32 f20;
} Type1;

s32 func_L00_0053BEF0(Type1 *arg0) {
    arg0->fC = 0;
    arg0->f1C = 0;
    arg0->f20 = 0;
    return 1;
}
