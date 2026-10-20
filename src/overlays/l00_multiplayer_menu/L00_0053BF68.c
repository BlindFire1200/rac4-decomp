#include "common.h"

// func_0011C9F0(arg1, 1, arg2, +0x20) when +0xC and arg1 are set, else 0.

typedef struct Type1 {
    char _p0[0xC];
    s32 fC;
    char _p10[0x20 - 0x10];
    s32 f20;
} Type1;

extern s32 func_0011C9F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_L00_0053BF68(Type1 *arg0, s32 arg1, s32 arg2) {
    s32 r = 0;

    if (arg0->fC != 0 && arg1 != 0) {
        r = func_0011C9F0(arg1, 1, arg2, arg0->f20);
    }
    return r;
}
