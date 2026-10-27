/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013D120 (NTSC-U func_0013D120, commit 403f30a9) */
#include "common.h"

extern s32 func_00158A30(s32, s32, void *);
s32 func_001597B8(s32 a, s32 b, s32 c, s32 d, s32 e) {
    s32 buf[5];
    buf[0] = a;
    buf[1] = b;
    buf[2] = c;
    buf[3] = d;
    buf[4] = e;
    return func_00158A30(0x3E, 0x14, buf);
}
