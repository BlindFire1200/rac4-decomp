/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013CFF8 (NTSC-U func_0013CFF8, commit 403f30a9) */
#include "common.h"

extern s32 func_00158C60(s32, s32, void *, s32, long);
s32 func_00159670(s32 a, s32 b, s32 c, s32 d) {
    s32 buf[4];
    buf[0] = a;
    buf[1] = b;
    buf[2] = c;
    buf[3] = d;
    return func_00158C60(0x10, 0x10, buf, 0, 0);
}
