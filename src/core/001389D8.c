/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012C570 (NTSC-U func_0012C570, commit 403f30a9) */
#include "common.h"

extern void *func_001384E0(void);

s16 func_001389D8(s16 psm, s16 w, s16 h)
{
    u64 *gs;
    s32 bw;
    s32 bh;

    gs = func_001384E0();
    bw = (w + 63) / 64;
    if (psm & 2) {
        bh = (h + 63) / 64;
    } else {
        bh = (h + 31) / 32;
    }
    if ((*gs & 0x0000FFFF0000FFFFULL) == 1) {
        return bw * bh;
    }
    return bw * bh * 2;
}
