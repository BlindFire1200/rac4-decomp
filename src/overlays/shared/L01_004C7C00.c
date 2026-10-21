#include "common.h"

// Set pvar+0x58D when any of the 6 entries at pvar+0x42C is 2.

typedef struct Type2 {
    char _p0[0x42C];
    u8 f42C[6];
    char _p432[0x58D - 0x432];
    u8 f58D;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_004C7C00(Type1 *arg0) {
    Type2 *p = arg0->fAC;
    s32 i;

    p->f58D = 0;
    for (i = 0; i < 6; i++) {
        if (p->f42C[i] == 2) {
            p->f58D = 1;
        }
    }
}
