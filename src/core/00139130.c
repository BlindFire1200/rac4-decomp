/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012CCC8 (NTSC-U func_0012CCC8, commit 403f30a9) */
#include "common.h"

extern int func_001294F0();
extern char D_00194C20[];

int func_00139130(u64 *p1, u64 *p2)
{
    u32 i;

    i = 0;
    while (*(volatile u32 *)0x1000A000 & 0x100) {
        if (i++ > 0x1000000) {
            goto L1;
        }
    }
    *(volatile u32 *)0x1000A020 = 6;
    if (((u32)p1 & 0x70000000) == 0x70000000) {
        *(volatile u32 *)0x1000A010 = ((u32)p1 & 0x0FFFFFFF) | 0x80000000;
    } else {
        *(volatile u32 *)0x1000A010 = (u32)p1 & 0x0FFFFFFF;
    }
    *(volatile u32 *)0x1000A000 = 0x101;
    while (*(volatile u32 *)0x1000A000 & 0x100) {
        if (i++ > 0x1000000) {
            goto L1;
        }
    }
    *(volatile u32 *)0x1000A020 = p1[10] & 0x7FFF;
    if (((u32)p2 & 0x70000000) != 0x70000000) {
        goto L2;
    }
    *(volatile u32 *)0x1000A010 = ((u32)p2 & 0x0FFFFFFF) | 0x80000000;
    goto L3;
L1:
    func_001294F0(D_00194C20);
    return -1;
L2:
    *(volatile u32 *)0x1000A010 = (u32)p2 & 0x0FFFFFFF;
L3:
    *(volatile u32 *)0x1000A000 = 0x101;
    return 0;
}
