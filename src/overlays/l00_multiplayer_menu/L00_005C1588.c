#include "common.h"

extern s32 func_0011AB04(u8 *);
extern void func_L00_005C0EA0(u8 *, u8 *);
void func_L00_005C1588(u8 *arg0, u8 *arg1) {
    s32 len = 0;
    u8 *p;
    u8 *d;
    if ((arg0[0] | arg0[1]) != 0) {
        p = arg0;
        do {
            d = arg1 + len;
            func_L00_005C0EA0(p, d);
            p += 2;
            len += func_0011AB04(d);
        } while ((p[0] | p[1]) != 0);
    }
    arg1[len] = 0;
}
