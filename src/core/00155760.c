/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013AA20 (NTSC-U func_0013AA20, commit 403f30a9) */
#include "common.h"

u8 func_00155760(u8 x) {
    u32 q = x >> 4;
    u8 r = (u8)(q * 6);
    return x - r;
}
