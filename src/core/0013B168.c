/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012EC28 (NTSC-U func_0012EC28, commit 403f30a9) */
#include "common.h"

extern s32 func_0012A718();
extern s32 D_001AEE80[];
extern s32 D_001AEEC0[];
extern u8 D_00195050[];
extern void func_0013AE70();

s32 func_0013B168(void) {
    s32 r;
    r = func_0012A718(D_001AEE80, 5, 0, D_001AEEC0, 0x80, D_001AEEC0, 0x80, 0, 0);
    if (r < 0) {
        func_0013AE70(D_00195050);
        return 0;
    }
    return D_001AEEC0[0];
}
