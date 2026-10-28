/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00131ED0 (NTSC-U func_00131ED0, commit 403f30a9) */
#include "common.h"

typedef struct {
    s32 f0;
    u8 pad4[0x138 - 4];
    s32 f138;
    u8 pad13C[0x140 - 0x13C];
} Type1;

typedef struct {
    u8 pad0[0x12C];
    s32 f12C;
    u8 pad130[0x160 - 0x130];
    s32 f160;
    s32 f164;
    s32 f168;
    s32 f16C;
    s32 f170;
    s32 f174;
    s32 f178;
    s32 f17C;
    s32 f180;
    s32 f184;
    s32 f188;
    s32 f18C;
    s32 f190;
    u8 pad194[0x1C0 - 0x194];
    s32 f1C0;
    s32 f1C4;
    u8 pad1C8[0x5A4 - 0x1C8];
    Type1 blk[1];
    u8 pad6E4[0x820 - 0x6E4];
    s32 f820;
    s32 f824;
    s32 f828;
    s32 f82C;
    u8 pad830[0x848 - 0x830];
    s32 f848;
    s32 f84C;
    u8 pad850[0x858 - 0x850];
    s32 f858;
} Type2;

extern void func_0013EFD8();
extern long func_0013EC48();
extern s32 func_00146638();
extern s32 func_0013EDC8();
extern void func_0013E270();
extern void func_0013DE48();
extern void func_0013F010();
extern void func_001400F8();
extern char D_001952B8[];

static __inline__ void var1(Type2 *p, u32 cmd)
{
    u32 m;

    *(volatile u32 *)0x10002000 = cmd;
    m = cmd & 0xF0000000;
    p->f82C = m;
    if (m == 0x20000000 || m == 0x30000000 || m == 0x40000000) {
        p->f828 = 0;
    } else {
        p->f828 = 1;
    }
}

s32 func_0013E410(Type2 *p, s32 *arg0, s32 *arg1, s32 *a3, s32 *mv, s32 *a5, s32 a6)
{
    long r;
    u32 bp;
    long top;
    s32 s;
    s32 fwd;
    s32 bwd;
    s32 var2;
    s32 var3;
    s32 v;

    *(volatile u32 *)0x10002010 = (*(volatile u32 *)0x10002010 & 0xF8FFFFFF) | (p->f160 << 24);
    func_0013EFD8(p);
    var1(p, 0x34000000);
    r = func_0013EC48(p);
    bp = *(volatile u32 *)0x10002020;
    top = *(volatile long *)0x10002030;
    p->f848 = top;
    if (top < 0) {
        p->f84C = -(bp & 0x1F) & 0x1F;
    } else {
        p->f84C = 0x20;
    }
    p->f12C = (s32)r == 0;
    s = (s16)r;
    *arg0 = s;
    if (s == 0) {
        func_00146638(p, D_001952B8);
        p->f12C = 1;
        return 0;
    }
    if (s & 0xC) {
        if (p->f184 == 3 && p->f18C != 0) {
            *arg1 = 2;
        } else {
            *arg1 = func_0013EDC8(p, 2);
        }
    } else if (s & 1) {
        if (p->f190 != 0) {
            *arg1 = (p->f184 == 3) ? 2 : 1;
        }
    }
    if (p->f184 == 3) {
        fwd = (*arg1 == 1) ? 2 : 1;
        bwd = (*arg1 == 2);
    } else {
        fwd = (*arg1 == 2) ? 2 : 1;
        bwd = 0;
    }
    var2 = (*arg1 == 3);
    var3 = 0;
    if (!bwd) {
        var3 = (p->f184 == 3);
    }
    *a3 = (p->f184 == 3 && p->f18C == 0 && (*arg0 & 3)) ? func_0013EDC8(p, 1) : 0;
    if (*arg0 & 0x10) {
        p->f1C4 = func_0013EDC8(p, 5);
    }
    if ((*arg0 & 8) || ((*arg0 & 1) && p->f190 != 0)) {
        if (p->f858 != 0) {
            func_0013E270(p, mv, a6, a5, 0, fwd, bwd, p->f174 - 1, p->f178 - 1, var2, var3);
        } else {
            func_0013DE48(p, mv, a6, p->f168 - 1, p->f168 - 1, 0, 0, p->f164);
        }
    }
    if (p->f12C != 0) {
        return 0;
    }
    if (*arg0 & 4) {
        if (p->f858 != 0) {
            func_0013E270(p, mv, a6, a5, 1, fwd, bwd, p->f17C - 1, p->f180 - 1, 0, var3);
        } else {
            func_0013DE48(p, mv + 2, a6, p->f170 - 1, p->f170 - 1, 0, 0, p->f16C);
        }
    }
    if (p->f12C != 0) {
        return 0;
    }
    if ((*arg0 & 1) && p->f190 != 0) {
        func_0013F010(p, 1);
    }
    if (*arg0 & 3) {
        func_001400F8(p->blk[p->f820].f0, 0x300);
        func_0013EFD8(p);
        var1(p, ((*arg0 & 1) << 27) | (((*a3 << 25) | (p->f1C0 << 26)) | ((p->f1C4 << 16) | 0x20000000)));
    } else {
        p->blk[p->f820].f138 = 1;
    }
    p->f1C0 = 0;
    if (p->f12C != 0) {
        return 0;
    }
    if (!(*arg0 & 1)) {
        p->f1C0 = 1;
    }
    if ((*arg0 & 1) && p->f190 == 0) {
        mv[5] = 0;
        mv[4] = 0;
        mv[1] = 0;
        mv[0] = 0;
        mv[7] = 0;
        mv[6] = 0;
        mv[3] = 0;
        mv[2] = 0;
    }
    if (p->f160 == 2 && !(*arg0 & 9)) {
        mv[5] = 0;
        mv[4] = 0;
        mv[1] = 0;
        mv[0] = 0;
        if (p->f184 == 3) {
            *arg1 = 2;
        } else {
            *arg1 = 1;
            *a5 = (p->f184 == 2);
        }
    }
    return 1;
}
