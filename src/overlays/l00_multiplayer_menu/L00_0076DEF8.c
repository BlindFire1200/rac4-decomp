#include "common.h"

// Handle a reply: on success go to step 1; on error store a message id in +0x10 and go to step 2 (+0x8 set) or 1.

typedef struct Type1 {
    char _p0[0x8];
    s32 f8;
    char _pC[0x10 - 0xC];
    s32 f10;
} Type1;

typedef struct Type2 {
    char _p0[0xAC];
    s32 fAC;
} Type2;

extern void func_L00_0076E478(Type1 *arg0, s32 arg1);

void func_L00_0076DEF8(Type1 *arg0, Type2 *arg1) {
    s32 err = arg1->fAC;

    if (err >= 0) {
        func_L00_0076E478(arg0, 1);
        return;
    }
    if (err == -0x3C4) {
        arg0->f10 = 0x29;
    } else if (err == -0x3C3) {
        arg0->f10 = 0x2F;
    } else if (err == -0x3C2) {
        arg0->f10 = 0x2A;
    } else if (err == -0x3C1) {
        arg0->f10 = 0x2B;
    } else if (err == -0x3C0) {
        arg0->f10 = 0x2E;
    } else {
        arg0->f10 = 0x28;
    }
    if (arg0->f8 != 0) {
        func_L00_0076E478(arg0, 2);
    } else {
        func_L00_0076E478(arg0, 1);
    }
}
