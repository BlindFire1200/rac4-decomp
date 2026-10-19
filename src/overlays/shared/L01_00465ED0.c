#include "common.h"

// Stores a value pair in slot arg1 of the moby's pvar (+0x20 words, +0x10 halfwords).

typedef struct Type2 {
    char _p0[0x10];
    s16 f10[8];
    s32 f20[1];
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_00465ED0(Type1 *arg0, s32 arg1, s32 arg2, s16 arg3) {
    Type2 *p = arg0->fAC;

    p->f20[arg1] = arg2;
    p->f10[arg1] = arg3;
}
