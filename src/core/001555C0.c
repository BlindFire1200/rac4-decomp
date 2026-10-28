/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A880 (NTSC-U func_0013A880, commit 403f30a9) */
#include "common.h"

extern s32 func_00155580(void);
extern void func_00126C50(u32 *);
extern u8 D_0016FC1C[];
s32 func_001555C0(void) {
    u32 buf[4];
    s32 r;
    func_00126C50(buf);
    if (func_00155580() != 0) {
        r = D_0016FC1C[0];
    } else {
        func_00126C50(buf);
        if (((buf[0] >> 13) & 7) == 0) {
            r = (buf[0] >> 4) & 1;
        } else {
            r = (buf[0] >> 16) & 0x1F;
        }
    }
    return r;
}
