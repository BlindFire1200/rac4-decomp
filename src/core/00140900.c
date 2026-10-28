/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001343C0 (NTSC-U func_001343C0, commit 403f30a9) */
#include "common.h"

extern s32 func_0013EDC8();
extern s32 func_00140F38();
void func_00140900(u8 *p) {
    *(s32 *)(p + 0xFC) = 0;
    *(s32 *)(p + 0x864) = 1;
    *(s32 *)(p + 0x85C) = *(s32 *)(p + 0x860) + 1;
    func_0013EDC8(p, 1);
    func_0013EDC8(p, 5);
    func_0013EDC8(p, 6);
    func_0013EDC8(p, 1);
    func_0013EDC8(p, 6);
    func_0013EDC8(p, 6);
    *(s32 *)(p + 0x1B4) = func_0013EDC8(p, 1);
    *(s32 *)(p + 0x1B8) = func_0013EDC8(p, 1);
    func_00140F38(p);
}
