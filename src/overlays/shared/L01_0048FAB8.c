#include "common.h"

extern void func_00591BD8(void *o, u8 state, s32 type);

/* Checks whether the byte at offset 0x20 of the object is 4; if so, calls func_00591BD8(o, 1, -1) and returns 1, otherwise returns 0. */
s32 func_L01_0048FAB8(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = (*(u8 *)(arg0 + 0x20) == 4);
    if (temp_s0 != 0) {
        func_00591BD8(arg0, 1, -1);
    }
    return temp_s0;
}
