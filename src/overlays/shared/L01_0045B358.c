#include "common.h"

// The 16-byte value at +0xF0 of the object linked at pvar+0x320, or pvar+0x5E0 when there is none.

typedef struct Vec {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec __attribute__((aligned(16)));

typedef struct Type3 {
    char _p0[0xF0];
    Vec fF0;
} Type3;

typedef struct Type2 {
    char _p0[0x320];
    Type3 *f320;
    char _p324[0x5E0 - 0x324];
    Vec f5E0;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

Vec func_L01_0045B358(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->f320 != 0) {
        return p->f320->fF0;
    }
    return p->f5E0;
}
