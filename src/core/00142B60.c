/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00136620 (NTSC-U func_00136620, commit 403f30a9) */
#include "common.h"

extern s32 func_00146638();
typedef struct {
    u8 pad0[4];
    int f4;
    int f8;
    int fC;
    int f10;
    u8 pad14[4];
    long f18;
    long f20;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    int f54;
    int f58;
    int f5C;
    int f60;
} Type1;
typedef struct {
    long a;
    long b;
    long c;
} Type2;
typedef struct {
    u8 pad0[0x10];
    Type2 ts[2];
} Type3;
typedef struct {
    u8 pad0[8];
    int f8;
    u8 padC[0x8C - 0xC];
    int f8C;
    long f90;
    int f98;
    int f9C;
    long fA0;
    u8 padA8[0xC0 - 0xA8];
    int fC0;
    int fC4;
    int fC8;
    int fCC;
    int fD0;
    int fD4;
    int fD8;
    u8 padDC[0xE0 - 0xDC];
    int fE0;
    int fE4;
    u8 padE8[0xF0 - 0xE8];
    int fF0;
    int fF4;
    int fF8;
    u8 padFC[0x100 - 0xFC];
    long f100;
    int f108;
    u8 pad10C[0x128 - 0x10C];
    int f128;
    u8 pad12C[0x184 - 0x12C];
    int f184;
    u8 pad188[0x834 - 0x188];
    int f834;
    u8 pad838[0x868 - 0x838];
    Type3 *f868;
} Type4;
extern char D_001956A8[];
int func_001294A8(char *buf, int n, const char *fmt, ...);
void func_00143290();
void func_00142610();

static inline void var1(Type4 *s, long *pa, long *pb, long *pc, Type1 *in)
{
    long t;
    int n;
    int odd;
    int b;

    if (s->f8C && in->f18 < 0 && s->f98 >= 0) {
            n = s->fA0;
            b = n & 1;
            { long q = s->f90 & 1; long r = s->f9C & 1; odd = b & r & q; }
            *pa = s->f98 + ((int)((s->f90 * n) >> 1) + odd);
            if (b & s->f90) {
                s->f9C++;
            }
    } else {
        *pa = in->f18;
    }
    if (s->f108 == 2 && s->f100 >= 0) {
        *pa = s->f100;
        s->f108 = 0;
        s->f100 = -1;
    }
    *pb = in->f20;
    *pc = (long)in->f34 << 8 | (long)in->f38 << 7 | (long)in->f3C << 6 | (long)in->f40 << 5 | (long)in->f30 << 3 | in->f2C;
}

static inline int var2(Type4 *s, Type1 *a1)
{
    char buf[0x100];
    int ok;

    if (s->fF4) {
        ok = s->fF0 >= a1->f4 && s->fF4 >= a1->f8;
    } else {
        ok = s->fF8 >= a1->fC * a1->f10;
    }
    if (!ok) {
        func_001294A8(buf, 0x100, D_001956A8, a1->f4, a1->f8);
        func_00146638(s, buf);
    }
    return ok;
}

void func_00142B60(Type4 *s, Type1 *a1, Type1 *a2, int n)
{
    int var3;
    Type1 *top;
    Type1 *bot;

    var3 = 0;
    if (s->f184 == 2) {
        top = a1;
        bot = a2;
        var3 = 0x40;
    } else {
        top = a2;
        bot = a1;
    }
    var1(s, &s->f868->ts[0].a, &s->f868->ts[0].b, &s->f868->ts[0].c, top);
    s->f98 = s->f868->ts[0].a;
    s->fA0 = 1;
    var1(s, &s->f868->ts[1].a, &s->f868->ts[1].b, &s->f868->ts[1].c, bot);
    s->f98 = s->f868->ts[1].a;
    s->fA0 = 1;
    s->f868->ts[0].c |= var3;
    s->f868->ts[1].c |= var3;
    s->fE0 = top->f5C;
    s->fE4 = top->f60;
    s->fC8 = top->f44;
    s->fCC = bot->f48;
    s->fD4 = top->f50;
    s->fD8 = bot->f54;
    if (var2(s, a1) && a1->f28 == 1 && a2->f28 == 1) {
        a1->f10 <<= 1;
        if (s->fC4) {
            func_00143290(s, a1);
        } else {
            func_00142610(s, a1);
        }
        a1->f10 >>= 1;
        if (s->f8 != 2) {
            s->f8 = 2;
            s->fC0 = s->f128;
        }
        s->f834 = 1;
    }
}
