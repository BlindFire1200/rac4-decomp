#include "common.h"

// Reset pvar+0x80 and +0x88 to 0 and pvar+0x86 to -1.

typedef struct Type2 {
    char _p0[0x80];
    s32 f80;
    char _p84[0x86 - 0x84];
    s16 f86;
    s16 f88;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_004E4F60(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    p->f86 = -1;
    p->f88 = 0;
    p->f80 = 0;
}
