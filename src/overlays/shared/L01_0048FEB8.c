#include "common.h"

// If pvar+0x1C is free, store arg1/arg2 there, set the flags and call func_L01_00591BD8(moby, 1, -1).

typedef struct Type2 {
    char _p0[0x1C];
    s32 f1C;
    s32 f20;
    char _p24[0x28 - 0x24];
    u8 f28;
} Type2;

typedef struct Type1 {
    char _p0[0x30];
    u8 f30;
    char _p31[0xAC - 0x31];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

s32 func_L01_0048FEB8(Type1 *arg0, s32 arg1, s32 arg2) {
    Type2 *p = arg0->fAC;

    if (p->f1C == 0) {
        arg0->f30 = 0xFF;
        p->f1C = arg1;
        p->f20 = arg2;
        p->f28 = 1;
        func_L01_00591BD8(arg0, 1, -1);
        return 1;
    }
    return 0;
}
