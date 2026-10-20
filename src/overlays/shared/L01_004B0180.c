#include "common.h"

// Set flag 1 of the object at pvar+0x4, clear its +0x31 and call func_L01_00591BD8(moby, 3, -1).

typedef struct Type3 {
    char _p0[0x31];
    u8 f31;
    char _p32[0x34 - 0x32];
    u16 f34;
} Type3;

typedef struct Type2 {
    char _p0[0x4];
    Type3 *f4;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

void func_L01_004B0180(Type1 *arg0) {
    Type2 *p = arg0->fAC;
    Type3 *o = p->f4;

    if (o != 0) {
        o->f34 |= 1;
        p->f4->f31 = 0;
        func_L01_00591BD8(arg0, 3, -1);
    }
}
