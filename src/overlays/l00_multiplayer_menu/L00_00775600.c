#include "common.h"

// Initialise the pool: every entry in state 2, chained to the next one, free list from 0.

typedef struct Type2 {
    s32 f0;
    char _p4[0xC - 0x4];
    u32 fC;
    char _p10[0x20 - 0x10];
    u32 f20;
} Type2;

typedef struct Type1 {
    char _p0[0x8];
    u32 f8;
    u32 fC;
    Type2 f10[1];
} Type1;

void func_L00_00775600(Type1 *arg0) {
    u32 i;

    for (i = 0; i < arg0->f8; i++) {
        arg0->f10[i].fC = i;
        arg0->f10[i].f0 = 2;
        arg0->f10[i].f20 = i + 1;
    }
    arg0->fC = 0;
}
