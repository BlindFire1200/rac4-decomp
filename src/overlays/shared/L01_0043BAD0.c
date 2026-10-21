#include "common.h"

// Reset +0x98 of each moby in the pvar+0x7C list (count from pvar+0x6C) to its class value +0x10.

typedef struct Type3 {
    char _p0[0x10];
    s32 f10;
} Type3;

typedef struct Type1 {
    char _p0[0x24];
    Type3 *f24;
    char _p28[0x98 - 0x28];
    s32 f98;
    char _p9C[0xAC - 0x9C];
    struct Type2 *fAC;
} Type1;

typedef struct Type5 {
    s32 f0;
} Type5;

typedef struct Type4 {
    char _p0[0x10];
    Type5 *f10;
} Type4;

typedef struct Type2 {
    char _p0[0x6C];
    Type4 *f6C;
    char _p70[0x7C - 0x70];
    Type1 *f7C[1];
} Type2;

void func_L01_0043BAD0(Type1 *arg0) {
    Type2 *p = arg0->fAC;
    Type5 *n;
    Type1 *o;
    s32 i;

    if (p->f6C == 0) {
        return;
    }
    n = p->f6C->f10;
    if (n == 0) {
        return;
    }
    for (i = 0; i < n->f0 - 1; i++) {
        o = p->f7C[i];
        if (o != 0) {
            o->f98 = o->f24->f10;
        }
    }
}
