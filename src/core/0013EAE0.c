/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001325A0 (NTSC-U func_001325A0, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x82C];
    int f82C;
    u8 pad830[0x868 - 0x830];
    int f868;
    u8 pad86C[0x878 - 0x86C];
    int f878;
} Type1;
int func_00142308(int x);
void func_001464D0(void);

void func_0013EAE0(Type1 *s)
{
    int cnt;
    u32 bp;
    int var1;
    u32 var2;

    cnt = 0;
    while ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000) {
        bp = *(volatile u32 *)0x10002020;
        var1 = s->f82C;
        var2 = ((bp & 0xFF00) >> 1) + ((bp & 0x30000) >> 9) - (bp & 0x7F);
        if ((var1 == 0x20000000 || var1 == 0x30000000 || var1 == 0x40000000) && var2 < 0x20 &&
            *(volatile u32 *)0x1000B420 == 0) {
            func_00142308(s->f868);
            if (s->f878) {
                goto err;
            }
            cnt = 0;
        }
        if (cnt++ > 0x1388) {
            func_00142308(s->f868);
            if (s->f878) {
            err:
                func_001464D0();
                s->f82C = 0;
                return;
            }
            cnt = 0;
        }
    }
    s->f82C = 0;
}
