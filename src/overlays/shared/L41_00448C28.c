#include "common.h"

// Clear +0x98 of the moby at pvar+0x30, when there is one.

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

typedef struct Type2 {
    char _p0[0x30];
    Type1 *f30;
} Type2;

void func_L41_00448C28(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p != 0 && p->f30 != 0) {
        p->f30->f98 = 0;
    }
}
