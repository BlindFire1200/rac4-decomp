#include "common.h"

// Clear +0x98 of every object in the pvar's list at +0x7C (count from pvar+0x6C, minus one).

typedef struct Type5 {
    char _p0[0x98];
    s32 f98;
} Type5;

typedef struct Type4 {
    s32 f0;
} Type4;

typedef struct Type3 {
    char _p0[0x10];
    Type4 *f10;
} Type3;

typedef struct Type2 {
    char _p0[0x6C];
    Type3 *f6C;
    char _p70[0x7C - 0x70];
    Type5 *f7C[1];
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_0043BA70(Type1 *arg0) {
    Type2 *p = arg0->fAC;
    Type4 *n;
    s32 i;

    if (p->f6C != 0 && (n = p->f6C->f10) != 0) {
        for (i = 0; i < n->f0 - 1; i++) {
            if (p->f7C[i] != 0) {
                p->f7C[i]->f98 = 0;
            }
        }
    }
}
