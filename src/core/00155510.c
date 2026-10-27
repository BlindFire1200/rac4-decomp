/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A7D0 (NTSC-U func_0013A7D0, commit 403f30a9) */
#include "common.h"

extern s8 D_0016FC20[];
extern char D_001A4618[];
extern s32 func_0012B338();
extern void func_0012B980();
extern void func_0012B5C8();

s8 *func_00155510(void) {
    s32 r;
    if (D_0016FC20[0] == 0) {
        r = func_0012B338(D_001A4618, 1);
        if (r >= 0) {
            func_0012B980(r, D_0016FC20, 0xE);
            func_0012B5C8(r);
        }
    }
    return D_0016FC20;
}
