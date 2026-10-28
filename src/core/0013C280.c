/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012FCE8 (NTSC-U func_0012FCE8, commit 403f30a9) */
#include "common.h"

extern s32 func_0012A718();
extern s32 D_001AF200[];
extern u8 D_001AEFC0[];
s32 func_0013C280(void) {
    s32 r;
    D_001AF200[0] = 0x12;
    r = func_0012A718(D_001AEFC0, 1, 0, D_001AF200, 0x80, D_001AF200, 0x80, 0, 0);
    if (r < 0) {
        return 0;
    }
    return D_001AF200[3];
}
