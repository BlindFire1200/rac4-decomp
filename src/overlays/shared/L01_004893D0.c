#include "common.h"

// Resets pvar+0x84 to -1 and pvar+0x88/+0x8C to 0.

typedef struct Type2 {
    char _p0[0x84];
    s32 f84;
    s32 f88;
    s32 f8C;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_004893D0(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    p->f84 = -1;
    p->f8C = 0;
    p->f88 = 0;
}
