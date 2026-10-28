/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124430 (NTSC-U func_00124430, commit 403f30a9) */
#include "common.h"

s32 func_0012DA70(s32 *dst, s32 *src, u32 n) {
    u32 i = 0;
    n >>= 2;
    if (n != 0) {
        do {
            s32 v = src[0];
            i++;
            src++;
            dst[0] = v;
            dst++;
        } while (i < n);
    }
    return 0;
}
