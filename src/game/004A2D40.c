/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B4A40 (NTSC-U func_003B4890, commit 403f30a9) */
#include "common.h"

extern s32 func_00469C40();
s32 func_004A2D40(s32 *p) {
    s32 v = 1;
    if (p[3] != 0) {
        if (p[4] != 0) {
            func_00469C40((u8 *)p[3], p[4]);
        }
        v = 2;
    }
    p[0] = v;
    return 1;
}
