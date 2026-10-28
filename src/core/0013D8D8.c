/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00131398 (NTSC-U func_00131398, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x13C];
    int f13C;
    int f140;
    u8 pad144[0x184 - 0x144];
    int f184;
    u8 pad188[0x820 - 0x188];
    int f820;
    int f824;
    u8 pad828[0x848 - 0x828];
    int f848;
    int f84C;
    u8 pad850[0x868 - 0x850];
    int f868;
    u8 pad86C[0x878 - 0x86C];
    int f878;
} Type1;
extern char D_00195248[];
int func_0013DB18(void *s, int n);
void func_0013EFD8(void *s);
int func_00142308(int x);
void func_001464D0(void);
void func_00146570(void *s);
void func_0013D6B8(void *s, int var1);
extern s32 func_00146638();

static inline int var2(Type1 *s)
{
    int ok;
    u32 bp;
    long top;
    u32 t;
    int k;

    ok = 1;
    func_0013EFD8(s);
    func_0013EFD8(s);
    while (*(volatile u32 *)0x1000B020 != 0 && !(*(volatile u32 *)0x10002010 & 0x4000)) {
        if (*(volatile u32 *)0x1000B420 == 0 && !(*(volatile u32 *)0x1000B400 & 0x100)) {
            func_00142308(s->f868);
        }
        if (s->f878) {
            func_001464D0();
            return 0;
        }
    }
    bp = *(volatile u32 *)0x10002020;
    top = *(volatile long *)0x10002030;
    s->f848 = top;
    if (top < 0) {
        t = bp & 0x1F;
        if (t) {
            k = 0x20 - t;
        } else {
            k = 0;
        }
    } else {
        k = 0x20;
    }
    s->f84C = k;
    if (*(volatile u32 *)0x10002010 & 0x4000) {
        func_00146570(s);
        ok = 0;
    }
    return ok;
}

int func_0013D8D8(Type1 *s)
{
    int n;
    int r;

    s->f820 = 0;
    s->f824 = 0;
    n = s->f13C * s->f140;
    if (s->f184 != 3) {
        n >>= 1;
    }
    do {
        r = func_0013DB18(s, n);
    } while (r == 1 || r == 3);
    if (!var2(s)) {
        if (s->f878) {
            return 4;
        }
        r = 2;
    }
    while ((*(volatile u32 *)0x1000D400 >> 8) & 1) {
    }
    if (r == 0) {
        func_0013D6B8(s, s->f820 == 0);
    }
    if ((u32)(r - 1) < 2) {
        func_00146638(s, D_00195248);
    }
    return r == 0;
}
