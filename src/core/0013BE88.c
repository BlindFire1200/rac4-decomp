/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012F860 (NTSC-U func_0012F860, commit 403f30a9) */
#include "common.h"

extern s32 func_0012A718();
typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    u8 pad18[0x80 - 0x18];
} Type1;
extern Type1 D_001AF200;
extern u8 D_001AEFC0[];
extern void func_0013BB18(int arg0, int arg1, int n);

int func_0013BE88(int arg0, int arg1, int a, int b)
{
    Type1 *p;
    int r;

    p = &D_001AF200;
    p->fC = a;
    p->f10 = b;
    D_001AF200.f0 = 6;
    p->f4 = arg0;
    p->f8 = arg1;
    if (func_0012A718(D_001AEFC0, 1, 0, p, 0x80, p, 0x80, 0, 0) < 0) {
        return 0;
    }
    r = p->f14;
    if (r == 1) {
        func_0013BB18(arg0, arg1, 2);
        r = p->f14;
    }
    return r;
}
