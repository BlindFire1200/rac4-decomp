/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00134460 (NTSC-U func_00134460, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x160];
    s32 f160;
    s32 f164;
    s32 f168;
    s32 f16C;
    s32 f170;
    u8 pad174[0x1BC - 0x174];
    s32 f1BC;
    u8 pad1C0[0x85C - 0x1C0];
    s32 f85C;
    s32 f860;
    s32 f864;
} Type1;

extern u32 func_0013EDC8();
extern void func_00141140();
extern void func_00140F38();

void func_001409A0(Type1 *p)
{
    s32 tr;
    s32 var1;
    s32 var2;

    tr = func_0013EDC8(p, 10);
    p->f160 = func_0013EDC8(p, 3);
    func_0013EDC8(p, 16);
    if (p->f160 == 2 || p->f160 == 3) {
        p->f164 = func_0013EDC8(p, 1);
        p->f168 = func_0013EDC8(p, 3);
    }
    if (p->f160 == 3) {
        p->f16C = func_0013EDC8(p, 1);
        p->f170 = func_0013EDC8(p, 3);
    }
    while (func_0013EDC8(p, 1) != 0) {
        func_00141140(p, 8);
    }
    func_00140F38(p);
    var1 = 0;
    var2 = 0;
    if (p->f160 != 3 && tr != 0) {
        if (tr < 0) {
            var1 = p->f864 == 0;
        }
        p->f864 = 0;
        var2 = tr;
    }
    p->f1BC = p->f85C + tr;
    if (var1 && var2 >= tr) {
        p->f1BC += 0x400;
    }
    p->f860 = (p->f860 < p->f1BC) ? p->f1BC : p->f860;
}
