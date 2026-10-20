#include "common.h"

// Call method +0x10 with (+0xC, arg1, arg2 widened to 64 bits).

typedef struct Type2 {
    char _p0[0x10];
    void (*f10)(s32 arg0, s32 arg1, u64 arg2);
} Type2;

typedef struct Type1 {
    Type2 *f0;
    char _p4[0xC - 0x4];
    s32 fC;
} Type1;

void func_L00_00519578(Type1 *arg0, s32 arg1, u32 arg2) {
    arg0->f0->f10(arg0->fC, arg1, arg2);
}
