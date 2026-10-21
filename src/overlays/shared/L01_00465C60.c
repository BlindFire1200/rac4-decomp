#include "common.h"

// In state 0, set pvar+0xC and send event 1.

typedef struct Type2 {
    char _p0[0xC];
    u8 fC;
} Type2;

typedef struct Type1 {
    char _p0[0x20];
    u8 f20;
    char _p21[0xAC - 0x21];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

void func_L01_00465C60(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (arg0->f20 == 0) {
        p->fC = 1;
        func_L01_00591BD8(arg0, 1, -1);
    }
}
