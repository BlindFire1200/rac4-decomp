/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012DDC8 (NTSC-U func_0012DDC8, commit 403f30a9) */
#include "common.h"

extern s32 func_0013A160();
extern s32 D_00167BF8[];
s32 func_0013A288(s32 a, s32 b, s32 c) {
    s32 r = func_0013A160(a, b, c, 0x40);
    if (r == 0) {
        D_00167BF8[0] = 0xB;
    }
    return r;
}
