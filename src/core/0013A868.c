/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012E3A8 (NTSC-U func_0012E3A8, commit 403f30a9) */
#include "common.h"

extern s32 func_00126BD0();
extern s32 *D_001AD8A8;
extern s32 *D_001AD8AC;
extern s32 *D_001AD8B0;
extern s32 D_00167C00;
void func_0013A868(u32 a) {
    s32 *q = (s32 *)(a | 0x20000000);
    if (D_001AD8A8) *D_001AD8A8 = q[0];
    if (D_001AD8AC) *D_001AD8AC = q[1];
    if (D_001AD8B0) *D_001AD8B0 = q[0x24];
    func_00126BD0(D_00167C00);
}
