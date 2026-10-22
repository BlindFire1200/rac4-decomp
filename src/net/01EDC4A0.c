#include "common.h"

extern void (*D_001BCAD0[])(s32, s32);
extern s32 D_001BC8D8[];

/* Calls the optional net callback with the 4th argument and the stored word, then returns 0x34 (52). */
s32 func_01EDC4A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*hook)(s32, s32) = D_001BCAD0[0];
    if (hook != 0) {
        hook(arg3, D_001BC8D8[0]);
    }
    return 0x34;
}
