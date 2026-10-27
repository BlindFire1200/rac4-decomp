/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B2360 (NTSC-U func_003B21C0, commit 403f30a9) */
#include "common.h"

extern void func_004F0C58(s32);
extern void func_00126BB0(s32);
s32 func_004F1618(u8 *p) {
    func_004F0C58(5);
    *(volatile u32 *)0x1000B420 = 0;
    *(volatile u32 *)0x1000B410 = 0;
    *(volatile u32 *)0x1000B430 = 0;
    func_00126BB0(*(s32 *)(p + 0x40));
    return 1;
}
