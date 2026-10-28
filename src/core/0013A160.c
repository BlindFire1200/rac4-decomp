/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012DCA0 (NTSC-U func_0012DCA0, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x24];
    s32 f24;
} Type1;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    u8 padC[0x14 - 0xC];
    char f14[0x400];
} Type2;

extern Type1 D_001AD880;
extern Type2 D_001AD930;
extern u8 D_001AEE40[];
extern s32 D_00167BFC;
extern s32 D_00167BF8[];
extern s32 func_00126BF0(s32);
extern s32 func_00126BC0(s32);
extern char *func_0011AFC8(char *, char *, s32);
extern s32 func_0012A718();
extern void func_0013A148();

s32 func_0013A160(s32 f0, s32 f4, char *f14, s32 f8)
{
    if (D_001AD880.f24 == 0) {
        return -100;
    }
    if (func_00126BF0(D_00167BFC) < 0) {
        return -200;
    }
    if (f14 == 0 || *f14 == 0) {
        func_00126BC0(D_00167BFC);
        return -210;
    }
    func_0011AFC8(D_001AD930.f14, f14, 0x3FF);
    D_001AD930.f0 = f0;
    D_001AD930.f8 = f8;
    D_001AD930.f4 = f4;
    D_001AD930.f14[0x3FF] = 0;
    if (func_0012A718(&D_001AD880, 2, 1, &D_001AD930, 0x414, D_001AEE40, 4, func_0013A148, 0) != 0) {
        func_00126BC0(D_00167BFC);
        return -91;
    }
    D_00167BF8[0] = 2;
    return 0;
}
