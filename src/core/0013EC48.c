/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00132708 (NTSC-U func_00132708, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x82C];
    s32 f82C;
    u8 pad830[0x868 - 0x830];
    s32 f868;
    u8 pad86C[0x878 - 0x86C];
    s32 f878;
} Type1;

extern s32 func_00142308(s32);
extern void func_001464D0(void);

long func_0013EC48(Type1 *p)
{
    long r;
    s32 n;
    u32 bp;
    s32 m;
    u32 var1;

    n = 0;
    while ((r = *(volatile long *)0x10002000) < 0 && !(*(volatile u32 *)0x10002010 & 0x4000)) {
        bp = *(volatile u32 *)0x10002020;
        m = p->f82C;
        var1 = ((bp & 0xFF00) >> 1) + ((bp & 0x30000) >> 9) - (bp & 0x7F);
        if ((m == 0x20000000 || m == 0x30000000 || m == 0x40000000) && var1 < 0x20
            && *(volatile u32 *)0x1000B420 == 0) {
            func_00142308(p->f868);
            if (p->f878 != 0) {
                func_001464D0();
                break;
            }
            n = 0;
        }
        if (n++ >= 0x1F5) {
            func_00142308(p->f868);
            if (p->f878 != 0) {
                func_001464D0();
                break;
            }
            n = 0;
        }
    }
    p->f82C = 0;
    return r;
}
