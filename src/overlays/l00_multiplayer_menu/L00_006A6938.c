#include "common.h"

// For messages 0x6E and 0x3E9, store their +0x8 at +0x30 and return 1; else return 0.

typedef struct Type2 {
    char _p0[0x4];
    u16 f4;
    char _p6[0x8 - 0x6];
    s32 f8;
} Type2;

typedef struct Type1 {
    char _p0[0x30];
    s32 f30;
} Type1;

s32 func_L00_006A6938(Type1 *arg0, Type2 *arg1) {
    s32 r = 1;

    if (arg1->f4 == 0x6E || arg1->f4 == 0x3E9) {
        arg0->f30 = arg1->f8;
    } else {
        r = 0;
    }
    return r;
}
