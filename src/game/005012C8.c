/* cflags: -G0 */
/* C adapted from rac3-decomp func_003E71C8 (NTSC-U func_003E7080, commit 403f30a9) */
#include "common.h"

extern s32 func_00510BD0(s32 *);
s32 func_005012C8(s32 *a0, s32 a1) {
    u8 *t;
    if (func_00510BD0(a0) != 0) {
        return 0;
    }
    t = (u8 *)a0[1];
    if (t != 0 && (u32)a1 < 8 && *(s32 *)(t + (a1 << 2)) != 0) {
        *(s32 *)(t + 0x14) = a1;
        return 1;
    }
    return 0;
}
