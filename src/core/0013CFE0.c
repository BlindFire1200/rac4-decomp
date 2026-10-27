/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00130AA0 (NTSC-U func_00130AA0, commit 403f30a9) */
#include "common.h"

typedef struct {
    int f0;
    u8 pad4[0x10 - 4];
    int f10;
} Type1;
typedef struct {
    int f0;
    int pad4;
    int f8;
    int fC;
    int f10;
    u8 pad14[0x140 - 0x14];
} Type2;
typedef struct {
    u8 pad0[0x12C];
    int f12C;
    u8 pad130[0x13C - 0x130];
    int f13C;
    u8 pad140[0x184 - 0x140];
    int f184;
    u8 pad188[0x1D0 - 0x188];
    Type1 *f1D0;
    u8 pad1D4[0x1E0 - 0x1D4];
    Type1 *f1E0;
    u8 pad1E4[0x1F0 - 0x1E4];
    Type1 *f1F0;
    u8 pad1F4[0x6C8 - 0x1F4];
    Type2 blk[1];
    u8 pad808[0x820 - 0x808];
    int f820;
} Type3;
extern char D_00195208[];
void func_00146690(void *s, char *fmt, int x);
void func_0013C8D8(Type3 *s, int x, int y, int arg2, int arg3, int *mv, int *fs, int a7);
void func_0013F288();

int func_0013CFE0(Type3 *s, int arg0, int arg1, int arg2, int arg3, int *mv, int *fs, int a7)
{
    int var1;
    int mbx;
    int mby;
    Type1 *p;
    int px;
    int py;

    var1 = arg2 & 1;
    mby = arg0 / s->f13C;
    mbx = arg0 % s->f13C;
    px = mbx << 4;
    py = mby << 4;
    if (var1) {
        while ((*(volatile u32 *)0x1000D400 >> 8) & 1) {
        }
        s->blk[s->f820].f10 = 0;
    } else {
        if ((u32)(arg3 - 1) >= 3) {
            func_00146690(s, D_00195208, arg3);
            s->f12C = 1;
            return 0;
        }
        func_0013C8D8(s, px, py, arg2, arg3, mv, fs, a7);
        while ((*(volatile u32 *)0x1000D400 >> 8) & 1) {
        }
        func_0013F288(s);
        s->blk[s->f820].f10 = 1;
    }
    if (arg1 == 1 && (arg2 & 2)) {
        s->blk[s->f820].fC = arg1;
    } else {
        s->blk[s->f820].fC = 0;
    }
    s->blk[s->f820].f8 = var1;
    if (s->f184 == 3) {
        s->blk[s->f820].f0 = s->f1D0->f0 + (mbx * s->f1D0->f10 + mby) * 0x180;
    } else {
        if (s->f184 == 2) {
            p = s->f1F0;
        } else {
            p = s->f1E0;
        }
        s->blk[s->f820].f0 = p->f0 + (mbx * p->f10 + mby) * 0x180;
    }
    return 1;
}
