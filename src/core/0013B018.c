/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012EB40 (NTSC-U func_0012EB40, commit 403f30a9) */
#include "common.h"

extern s32 D_001AEE80;
extern s32 func_0012A718();
extern s32 func_0013AE70();
extern u8 D_001AEEC0[];
extern u8 D_00194FC0[];
s32 func_0013B018(void *a) {
    s32 *p;
    s32 r;
    s32 v;
    *(void **)D_001AEEC0 = a;
    p = (s32 *)D_001AEEC0;
    if (func_0012A718(&D_001AEE80, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0) {
        func_0013AE70(D_00194FC0);
        return 0;
    }
    return p[1];
}
