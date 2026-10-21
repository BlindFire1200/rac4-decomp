#include "common.h"

// Index of the first entry of the +0xB0 list (count +0xAC) whose +0x4 is at least 4, or -1.

typedef struct Type3 {
    char _p0[0x4];
    s32 f4;
} Type3;

typedef struct Type1 {
    char _p0[0xAC];
    s32 fAC;
    Type3 *fB0[1];
    char _pB4[0x230 - 0xB4];
    s32 f230;
} Type1;

s32 func_L00_0071B768(Type1 *arg0) {
    s32 r = -1;
    s32 i;

    for (i = 0; i < arg0->fAC; i++) {
        if (arg0->fB0[i]->f4 >= 4) {
            r = i;
            break;
        }
    }
    return r;
}
