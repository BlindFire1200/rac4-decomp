/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012E400 (NTSC-U func_0012E400, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad0[0x24];
    s32 f24;
} Type1;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    void *f1C;
} Type2;

extern Type1 D_001AD880;
extern Type2 D_001AD900;
extern u8 D_001ADD80[];
extern u8 D_001AEE40[];
extern s32 *D_001AD8A8;
extern s32 *D_001AD8AC;
extern s32 *D_001AD8B0;
extern s32 D_00167BFC;
extern s32 D_00167BF8[];
extern s32 func_00126BF0(s32);
extern s32 func_00126BC0(s32);
extern void func_00129CE0(void *, s32);
extern s32 func_0012A718();
extern void func_0013A868();

s32 func_0013A8C0(s32 f4, s32 f8, s32 *arg0, s32 *arg1, s32 *arg2)
{
    if (D_001AD880.f24 == 0) {
        return -100;
    }
    if (func_00126BF0(D_00167BFC) < 0) {
        return -200;
    }
    D_001AD900.f4 = f4;
    D_001AD900.f8 = f8;
    D_001AD900.f1C = D_001ADD80;
    if (arg0 != 0) {
        D_001AD900.f14 = 1;
    } else {
        D_001AD900.f14 = 0;
    }
    if (arg1 != 0) {
        D_001AD900.f10 = 1;
    } else {
        D_001AD900.f10 = 0;
    }
    if (arg2 != 0) {
        D_001AD900.fC = 1;
    } else {
        D_001AD900.fC = 0;
    }
    D_001AD8A8 = arg0;
    D_001AD8AC = arg1;
    D_001AD8B0 = arg2;
    func_00129CE0(D_001ADD80, 0xC0);
    if (func_0012A718(&D_001AD880, 1, 1, &D_001AD900, 0x30, D_001AEE40, 4, func_0013A868, D_001ADD80) != 0) {
        func_00126BC0(D_00167BFC);
        return -91;
    }
    D_00167BF8[0] = 1;
    return 0;
}
