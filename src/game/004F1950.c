/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B2698 (NTSC-U func_003B24F8, commit 403f30a9) */
#include "common.h"

typedef struct { long f0; long f8; s32 f10; s32 f14; } Type1;
typedef struct { u8 *f0; u8 p4[4]; s32 f8; u8 pC[0x2C]; s32 f38; u8 p3C[4]; s32 f40; u8 p44[0xC]; Type1 *f50; s32 f54; s32 f58; s32 f5C; } Type2;
typedef struct { long a, b; } Type3;
extern s32 func_00126BE0(s32);
extern void func_00126BC0(s32);
s32 func_004F1950(Type2 *p, Type3 *out) {
    s32 var1 = 0;
    u32 pos;
    s32 var2;
    s32 n, i, idx;
    u32 st;
    s32 off;
    s32 rem, var3;
    pos = *(volatile u32 *)0x1000B410;
    st = *(volatile u32 *)0x10002020;
    off = p->f38 & 0x7F;
    var2 = p->f8 << 11;
    pos -= (((st >> 16) & 3) + ((st >> 8) & 0xF)) << 4;
    func_00126BE0(p->f40);
    out->a = -1;
    out->b = -1;
    rem = (pos + (off >> 3) + var2 - (u32)p->f0) % var2;
    n = p->f58;
    var3 = p->f5C;
    for (i = 0; i < n && !var1; i++) {
        idx = (var3 - n + p->f54 + i) % p->f54;
        if ((rem + var2 - p->f50[idx].f10) % var2 < p->f50[idx].f14) {
            var1 = 1;
            out->a = p->f50[idx].f0;
            out->b = p->f50[idx].f8;
            p->f50[idx].f0 = -1;
            p->f50[idx].f8 = -1;
            p->f58 -= p->f58 < 2 ? p->f58 : 1;
        }
    }
    func_00126BC0(p->f40);
    return 1;
}
