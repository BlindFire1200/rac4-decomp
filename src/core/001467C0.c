/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A280 (NTSC-U func_0013A280, commit 403f30a9) */
#include "common.h"

extern void func_00146748(s32);
extern void func_001466D0(s32);

void func_001467C0(u8 *p)
{
    u32 *s = (u32 *)p;

    func_00146748(1);
    s[0] = *(volatile u32 *)0x1000B410;
    s[1] = *(volatile u32 *)0x1000B430;
    s[2] = *(volatile u32 *)0x1000B420;
    s[3] = *(volatile u32 *)0x1000B400;
    while (*(volatile u32 *)0x10002010 & 0xF0) {
    }
    func_001466D0(0);
    s[4] = *(volatile u32 *)0x1000B010;
    s[5] = *(volatile u32 *)0x1000B020;
    s[6] = *(volatile u32 *)0x1000B000;
    s[7] = *(volatile u32 *)0x10002020;
    s[8] = *(volatile u32 *)0x10002010;
}
