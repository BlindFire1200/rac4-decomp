#include "common.h"

// Reset pvar+0x5E4 to 60 and +0x5EA to -1, then send event 6 (pvar+0x60D set) or 0x17.

typedef struct Type2 {
    char _p0[0x5E4];
    s16 f5E4;
    char _p5E6[0x5EA - 0x5E6];
    s16 f5EA;
    char _p5EC[0x60D - 0x5EC];
    u8 f60D;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

void func_L01_004B6F50(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    p->f5E4 = 60;
    p->f5EA = -1;
    if (p->f60D != 0) {
        func_L01_00591BD8(arg0, 6, -1);
    } else {
        func_L01_00591BD8(arg0, 0x17, -1);
    }
}
