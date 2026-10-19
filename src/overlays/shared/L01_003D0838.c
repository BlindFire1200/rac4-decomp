#include "common.h"

// Clear the 4 flags at pvar+0x8C whose slot at pvar+0x50 is in use (not -1).

typedef struct Type2 {
    char _p0[0x50];
    s32 f50[4];
    char _p60[0x8C - 0x60];
    u8 f8C[4];
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_003D0838(Type1 *arg0) {
    Type2 *p = arg0->fAC;
    s32 i;

    for (i = 0; i < 4; i++) {
        if (p->f50[i] != -1) {
            p->f8C[i] = 0;
        }
    }
}
