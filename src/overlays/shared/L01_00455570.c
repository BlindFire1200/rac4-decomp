#include "common.h"

// Clear pvar+0x38 and +0x40 and the two words +0x2E08/+0x2E38 of the object at pvar+0x48.

typedef struct Type3 {
    char _p0[0x2E08];
    s32 f2E08;
    char _p2E0C[0x2E38 - 0x2E0C];
    s32 f2E38;
} Type3;

typedef struct Type2 {
    char _p0[0x38];
    s32 f38;
    char _p3C[0x40 - 0x3C];
    s16 f40;
    char _p42[0x48 - 0x42];
    Type3 *f48;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_00455570(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    p->f40 = 0;
    p->f48->f2E38 = 0;
    p->f48->f2E08 = 0;
    p->f38 = 0;
}
