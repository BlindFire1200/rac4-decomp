#include "common.h"

extern void func_005E3660(s32, s32 *, s32 *, s32 *);

// Pack three values returned by func_005E3660 into one word with bit 31 set.
s32 func_L00_005EE760(s32 arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 flag;

    func_005E3660(arg0, &sp0, &sp4, &sp8);
    flag = 0x80000000;
    return (sp8 << 16) | ((sp4 << 8) | flag) | sp0;
}
