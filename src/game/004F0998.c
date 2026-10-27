/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_003B16E0 (NTSC-U func_003B1540, commit 403f30a9) */
#include "common.h"

s32 func_004F0998(u8 *p, void **out) {
    u8 *q = p + 0x50000;
    s32 n = *(s32 *)(q + 8) - *(s32 *)(q + 4);
    if (n != 0) {
        *out = p + *(s32 *)q;
    }
    return n;
}
