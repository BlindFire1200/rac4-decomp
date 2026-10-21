#include "common.h"

// When pvar+0x5AA is set, clear it and send event 1.

typedef struct Type2 {
    char _p0[0x5AA];
    u8 f5AA;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

void func_L01_004DDAF0(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->f5AA != 0) {
        p->f5AA = 0;
        func_L01_00591BD8(arg0, 1, -1);
    }
}
