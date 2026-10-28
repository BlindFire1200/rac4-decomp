/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B23B8 (NTSC-U func_003B2218, commit 403f30a9) */
#include "common.h"

extern void func_00126BE0(s32);
extern void func_00126BC0(s32);
s32 func_004F1670(u8 *p) {
    s32 r;
    func_00126BE0(*(s32 *)(p + 0x40));
    r = (*(s32 *)(p + 0x10) << 11) + *(s32 *)(p + 0x14);
    func_00126BC0(*(s32 *)(p + 0x40));
    return r;
}
