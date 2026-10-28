/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00134E48 (NTSC-U func_00134E48, commit 403f30a9) */
#include "common.h"

extern s32 func_0013EDC8();
u32 func_00141388(void *s) {
    func_0013EDC8(s, 1);
    func_0013EDC8(s, 8);
    func_0013EDC8(s, 1);
    func_0013EDC8(s, 7);
    func_0013EDC8(s, 1);
    func_0013EDC8(s, 0x14);
    func_0013EDC8(s, 1);
    func_0013EDC8(s, 0x16);
    func_0013EDC8(s, 1);
    return func_0013EDC8(s, 0x16);
}
