/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A988 (NTSC-U func_0013A988, commit 403f30a9) */
#include "common.h"

extern s32 func_00155580(void);
extern void func_00126C50(u32 *);
extern s32 func_00126EB0(u8 *, s32, s32);
extern u8 D_0016FC1E[];
s32 func_001556C8(void) {
    u32 buf[4];
    s32 r;
    if (func_00155580() != 0) {
        r = D_0016FC1E[0];
    } else {
        func_00126C50(buf);
        if (((buf[0] >> 13) & 7) == 0) {
            r = 0;
        } else {
            func_00126EB0((u8 *)buf + 4, 1, 1);
            r = (((u8 *)buf)[4] >> 4) & 1;
        }
    }
    return r;
}
