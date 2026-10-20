#include "common.h"

// Handle a reply: on success copy it to +0x20 and go to step 7; on error store a message id in +0x10 and go to step 3 (+0x8 set) or 1.

typedef struct Type3 {
    s32 f0[0xAC / 4];
} Type3;

typedef struct Type2 {
    Type3 f0;
    s32 fAC;
} Type2;

typedef struct Type1 {
    char _p0[0x8];
    s32 f8;
    char _pC[0x10 - 0xC];
    s32 f10;
    char _p14[0x20 - 0x14];
    Type3 f20;
} Type1;

extern void func_L00_0076E478(Type1 *arg0, s32 arg1);

void func_L00_0076DFA0(Type1 *arg0, Type2 *arg1) {
    s32 err = arg1->fAC;

    if (err >= 0) {
        arg0->f20 = arg1->f0;
        func_L00_0076E478(arg0, 7);
        return;
    }
    if (err == -0x3C4) {
        arg0->f10 = 0x29;
    } else if (err == -0x3C2) {
        arg0->f10 = 0x2A;
    } else if (err == -0x3C1) {
        arg0->f10 = 0x2B;
    } else if (err == -0x3C5) {
        arg0->f10 = 0x28;
    } else {
        arg0->f10 = 0x28;
    }
    if (arg0->f8 != 0) {
        func_L00_0076E478(arg0, 3);
    } else {
        func_L00_0076E478(arg0, 1);
    }
}
