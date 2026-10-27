/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001345A8 (NTSC-U func_001345A8, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x134];
    u32 f134;
    u32 f138;
    u8 pad13C[0x144 - 0x13C];
    int f144;
    int f148;
    int f14C;
    int f150;
    u8 pad154[0x858 - 0x154];
    int f858;
} Type1;
extern char D_00195378[];
extern char D_001953A0[];
int func_0013EDC8(void *s, int n);
extern s32 func_00146638();

void func_00140AE8(Type1 *s)
{
    u32 v;
    u32 var1;
    u32 var2;
    u32 var3;
    u32 var4;
    u32 var5;

    s->f858 = 1;
    *(u32 *)0x10002010 &= ~0x800000;
    v = (u32)func_0013EDC8(s, 0x1C);
    var4 = (v >> 1) & 0xFFF;
    s->f150 = (v >> 17) & 3;
    var3 = (v >> 13) & 3;
    var2 = (v >> 15) & 3;
    if (s->f150 != 1) {
        func_00146638(s, D_00195378);
    }
    s->f14C = (v >> 19) & 1;
    var1 = v >> 20;
    var5 = (u32)func_0013EDC8(s, 0x10) >> 8;
    if (var1 != 0x48 && var1 != 0x58 && var1 != 0x44) {
        func_00146638(s, D_001953A0);
    }
    s->f134 = (var2 << 12) | (s->f134 & 0xFFF);
    s->f138 = (var3 << 12) | (s->f138 & 0xFFF);
    s->f144 += var4 << 18;
    s->f148 += var5 << 10;
}
