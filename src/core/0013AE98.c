/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012E9D8 (NTSC-U func_0012E9D8, commit 403f30a9) */
#include "common.h"

extern s32 func_0012A718();
extern s32 D_001AEE80[];
extern s32 D_001AEEC0[];

s32 func_0013AE98(s32 x) {
    s32 r;
    D_001AEEC0[1] = x;
    r = func_0012A718(D_001AEE80, 6, 0, D_001AEEC0, 0x80, D_001AEEC0, 0x80, 0, 0);
    if (r >= 0) {
        return D_001AEEC0[0];
    }
    return 0;
}
