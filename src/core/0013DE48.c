/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00131908 (NTSC-U func_00131908, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x12C];
    s32 x12C;
    u8 pad1[0x828 - 0x130];
    s32 x828;
    u32 x82C;
    u8 pad2[0x848 - 0x830];
    s32 x848;
    s32 x84C;
} Type1;

extern void func_0013EFD8(Type1 *);
extern u64 func_0013EC48(Type1 *);
extern s32 func_0013EDC8(Type1 *, s32);

#define M1 ((volatile u32 *)0x10002000)
#define M2  ((volatile u32 *)0x10002020)
#define M3 ((volatile s64 *)0x10002030)

static __inline__ void var1(Type1 *p, u32 cmd) {
    *M1 = cmd;
    p->x82C = cmd & 0xF0000000;
    if (p->x82C == 0x20000000 || p->x82C == 0x30000000 || p->x82C == 0x40000000) {
        p->x828 = 0;
    } else {
        p->x828 = 1;
    }
}

static __inline__ s16 var2(Type1 *p, u32 cmd) {
    u64 r;
    u32 bp;
    s64 top;
    var1(p, cmd);
    r = func_0013EC48(p);
    bp = *M2;
    top = *M3;
    p->x848 = top;
    if (top < 0) {
        p->x84C = -(bp & 0x1F) & 0x1F;
    } else {
        p->x84C = 32;
    }
    p->x12C = (s32)r == 0;
    return r;
}

static __inline__ s16 var3(Type1 *p, s32 tbl) {
    return var2(p, 0x30000000 | (tbl << 26));
}

static __inline__ void var4(s32 *var5, s32 var6, s32 var7, s32 var8, s32 arg5) {
    s32 lim, vec;
    lim = 16 << var6;
    vec = arg5 ? (*var5 >> 1) : (*var5);
    if (var7 > 0) {
        vec += ((var7 - 1) << var6) + var8 + 1;
        if (vec >= lim) vec -= lim + lim;
    } else if (var7 < 0) {
        vec -= ((-var7 - 1) << var6) + var8 + 1;
        if (vec < -lim) vec += lim + lim;
    }
    *var5 = arg5 ? (vec << 1) : vec;
}

void func_0013DE48(Type1 *p, s32 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 dmv, s32 arg4, s32 arg5) {
    s32 var7, var8;

    func_0013EFD8(p);
    var7 = var3(p, 2);
    var8 = (arg2 != 0 && var7 != 0) ? func_0013EDC8(p, arg2) : 0;
    var4(&arg0[0], arg2, var7, var8, arg5);
    if (dmv) {
        func_0013EFD8(p);
        arg1[0] = var3(p, 3);
    }
    func_0013EFD8(p);
    var7 = var3(p, 2);
    var8 = (arg3 != 0 && var7 != 0) ? func_0013EDC8(p, arg3) : 0;
    if (arg4) arg0[1] >>= 1;
    var4(&arg0[1], arg3, var7, var8, arg5);
    if (arg4) arg0[1] <<= 1;
    if (dmv) {
        func_0013EFD8(p);
        arg1[1] = var3(p, 3);
    }
}
