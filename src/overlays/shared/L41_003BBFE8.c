#include "common.h"

// Store arg1 at pvar+0x5C, set pvar+0x50 to 300, put the moby in state 3 and set its +0x30 to 0xFF.

typedef struct Type2 {
    char _p0[0x50];
    s16 f50;
    char _p52[0x5C - 0x52];
    s32 f5C;
} Type2;

typedef struct Type1 {
    char _p0[0x20];
    u8 f20;
    char _p21[0x30 - 0x21];
    u8 f30;
    char _p31[0xAC - 0x31];
    Type2 *fAC;
} Type1;

void func_L41_003BBFE8(Type1 *arg0, s32 arg1) {
    Type2 *p = arg0->fAC;

    p->f5C = arg1;
    arg0->f20 = 3;
    p->f50 = 300;
    arg0->f30 = 0xFF;
}
