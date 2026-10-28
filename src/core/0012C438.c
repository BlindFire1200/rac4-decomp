/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00123C90 (NTSC-U func_00123C90, commit 403f30a9) */
#include "common.h"

extern s32 func_0012A718();
extern s32 D_0016473C[];
extern u8 D_001A9340[];
extern s32 D_001A9380[];
u32 func_0012C438(void) {
    if (D_0016473C[0] < 0) {
        return 0;
    }
    if (func_0012A718(D_001A9340, 7, 0, 0, 0, D_001A9380, 4, 0, 0) < 0) {
        return 0xFFFFFFFF;
    }
    return D_001A9380[0];
}
