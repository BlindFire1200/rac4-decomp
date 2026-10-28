/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124D78 (NTSC-U func_00124D78, commit 403f30a9) */
#include "common.h"

s32 func_0012D878(u8 *dst, u8 *src, u32 n) {
    u32 i = 0;
    u32 var1;
    if (n != 0) {
        do {
            u8 c = *src;
            i++;
            src++;
            var1 = i < n;
            *dst = c;
            dst++;
        } while (var1);
    }
    return 0;
}
