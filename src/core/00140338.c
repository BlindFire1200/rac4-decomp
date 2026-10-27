/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00133DF8 (NTSC-U func_00133DF8, commit 403f30a9) */
#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    u8 pad14[0x68 - 0x14];
} Type1;

typedef struct {
    u8 pad0[0x10C];
    u32 f10C;
    u32 f110;
    u32 f114;
    s32 f118[3];
    s32 f124;
    u8 pad128[0x134 - 0x128];
    s32 f134;
    s32 f138;
    s32 f13C;
    s32 f140;
    u8 pad144[0x14C - 0x144];
    s32 f14C;
    s32 f150;
    s32 f154;
    u8 pad158[0x184 - 0x158];
    s32 f184;
    s32 f188;
    s32 f18C;
    u8 pad190[0x198 - 0x190];
    s32 f198;
    u8 pad19C[0x1F8 - 0x19C];
    Type1 fb[9];
    u8 pad5A0[0x858 - 0x5A0];
    s32 f858;
    u8 pad85C[0x87C - 0x85C];
    s32 f87C;
} Type2;

typedef struct {
    s32 w;
    s32 h;
    u8 pad8[0x40 - 8];
    Type2 *q;
} Type3;

extern void func_00142540();
extern u32 func_00142550();

static __inline__ void var1(Type1 *f, s32 w, s32 h)
{
    f->f4 = w;
    f->f8 = h;
    f->fC = w >> 4;
    f->f10 = h >> 4;
}

void func_00140338(Type3 *hd)
{
    Type2 *q;
    s32 var2;
    s32 w;
    s32 h;
    u32 sz;
    u32 a;
    u32 b;
    u32 c;
    s32 k;
    s32 v;

    q = hd->q;
    var2 = q->f858;
    if (var2 == 0) {
        q->f184 = 3;
        q->f14C = 1;
        q->f150 = 1;
        q->f198 = 1;
        q->f18C = 1;
        q->f154 = 5;
    }
    q->f13C = (q->f134 + 15) >> 4;
    if (var2 != 0 && q->f14C == 0) {
        v = ((q->f138 + 31) >> 5) << 1;
    } else {
        v = (q->f138 + 15) >> 4;
    }
    q->f140 = v;
    h = v << 4;
    w = q->f13C << 4;
    if (w == hd->w && h == hd->h) {
        return;
    }
    k = 0x180;
    hd->w = w;
    hd->h = h;
    sz = (u32)(w * (h * k)) >> 8;
    func_00142540(q->f118);
    q->f10C = func_00142550(q, q->f118, sz, 0x40);
    q->f110 = func_00142550(q, q->f118, sz, 0x40);
    q->f114 = func_00142550(q, q->f118, sz, 0x40);
    if (q->f87C == 0) {
        s32 n;
        a = (q->f10C & 0x0FFFFFFF) | 0x20000000;
        b = (q->f110 & 0x0FFFFFFF) | 0x20000000;
        c = (q->f114 & 0x0FFFFFFF) | 0x20000000;
        n = hd->w * hd->h / 512 * k;
        q->fb[0].f0 = a;
        q->fb[1].f0 = b;
        q->fb[2].f0 = c;
        q->fb[3].f0 = a;
        q->fb[4].f0 = b;
        q->fb[5].f0 = c;
        q->fb[6].f0 = a + n;
        q->fb[7].f0 = b + n;
        q->fb[8].f0 = c + n;
    } else if (q->f87C == 1) {
        s32 n;
        n = hd->w * hd->h / 512 * k;
        q->fb[0].f0 = q->f10C;
        q->fb[1].f0 = q->f110;
        q->fb[2].f0 = q->f114;
        q->fb[3].f0 = q->f10C;
        q->fb[4].f0 = q->f110;
        q->fb[5].f0 = q->f114;
        q->fb[6].f0 = q->f10C + n;
        q->fb[7].f0 = q->f110 + n;
        q->fb[8].f0 = q->f114 + n;
    }
    var1(&q->fb[0], w, h);
    var1(&q->fb[1], w, h);
    var1(&q->fb[2], w, h);
    var1(&q->fb[3], w, h / 2);
    var1(&q->fb[4], w, h / 2);
    var1(&q->fb[5], w, h / 2);
    var1(&q->fb[6], w, h / 2);
    var1(&q->fb[7], w, h / 2);
    var1(&q->fb[8], w, h / 2);
}
