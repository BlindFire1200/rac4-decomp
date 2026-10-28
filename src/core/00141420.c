/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00134EE0 (NTSC-U func_00134EE0, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x14C];
    s32 f14C;
    u8 pad150[0x184 - 0x150];
    s32 f184;
    s32 f188;
    u8 pad18C[0x194 - 0x18C];
    s32 f194;
    u8 pad198[0x19C - 0x198];
    s32 f19C[3];
    s32 f1A8[3];
} Type1;

extern u32 func_0013EDC8();

void func_00141420(Type1 *p)
{
    s32 n;
    s32 i;

    if (p->f14C != 0) {
        if (p->f194 != 0) {
            n = p->f188 ? 3 : 2;
        } else {
            n = 1;
        }
    } else {
        if (p->f184 != 3) {
            n = 1;
        } else {
            n = p->f194 ? 3 : 2;
        }
    }
    for (i = 0; i < n; i++) {
        p->f19C[i] = func_0013EDC8(p, 16);
        func_0013EDC8(p, 1);
        p->f1A8[i] = func_0013EDC8(p, 16);
        func_0013EDC8(p, 1);
    }
}
