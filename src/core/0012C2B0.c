/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00123B98 (NTSC-U func_00123B98, commit 403f30a9) */
#include "common.h"

extern s32 D_0016473C[];
extern s32 D_001A93C0[];
extern s32 D_001A9340[];
extern s32 D_001A9380[];
extern s32 func_0012A718();

s32 func_0012C2B0(s32 a0, s32 a1, s32 a2) {
    s32 r;
    if (D_0016473C[0] < 0) {
        return 0;
    }
    D_001A93C0[0] = a1;
    D_001A93C0[1] = a0;
    D_001A93C0[2] = a2;
    r = func_0012A718(D_001A9340, 4, 0, D_001A93C0, 0xC, D_001A9380, 4, 0, 0);
    if (r >= 0) {
        return D_001A9380[0];
    }
    return 0;
}
