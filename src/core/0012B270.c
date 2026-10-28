/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00123368 (NTSC-U func_00123368, commit 403f30a9) */
#include "common.h"

extern u8 D_001A9268[];
extern u8 D_00164684[];
extern s32 D_00164738[];
extern s32 func_0011A2DC();
s32 func_0012B270(void) {
    u8 *pb = D_00164684;
    u8 *pa = D_001A9268;
    s32 r = 0;
    if (func_0011A2DC(pa, pb, 4) != 0) {
        if (func_0011A2DC(pa, D_00164738[0], 4) != 0) {
            r = func_0011A2DC(pb, D_00164738[0], 4) != 0;
        }
    }
    return r;
}
