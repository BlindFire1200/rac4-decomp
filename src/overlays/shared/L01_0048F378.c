#include "common.h"

// Set pvar flags +0x12B and +0x1D5, clear +0x1D4, then call func_L01_00591BD8(moby, 1, 0).

typedef struct Type2 {
    char _p0[0x12B];
    u8 f12B;
    char _p12C[0x1D4 - 0x12C];
    u8 f1D4;
    u8 f1D5;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

void func_L01_0048F378(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    p->f1D4 = 0;
    p->f1D5 = 1;
    p->f12B = 1;
    func_L01_00591BD8(arg0, 1, 0);
}
