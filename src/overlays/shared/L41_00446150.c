#include "common.h"

// Call func_L41_004489F0(moby) when pvar+0x18 is set, then store arg1/arg2 at pvar+0x10/+0x14.

typedef struct Type2 {
    char _p0[0x10];
    s32 f10;
    s32 f14;
    s32 f18;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L41_004489F0(Type1 *arg0);

void func_L41_00446150(Type1 *arg0, s32 arg1, s32 arg2) {
    Type2 *p = arg0->fAC;

    if (p->f18 != 0) {
        func_L41_004489F0(arg0);
    }
    p->f10 = arg1;
    p->f14 = arg2;
}
