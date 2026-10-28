/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001218B8 (NTSC-U func_001218B8, commit 403f30a9) */
#include "common.h"

typedef struct {
    void *f0;
    void *f4;
    s32 f8;
    void *fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 *f1C;
} Type1;
typedef struct {
    void (*fn)(void *, void *);
    void *arg;
    s32 pad;
} Type2;
typedef struct {
    u8 pad0[0xC];
    s32 fC;
    void *f10;
} Type3;
extern s32 D_00164698[];
extern s32 D_001A6240[];
extern s32 D_001A6094[];
extern u8 D_001A5FC0[];
extern u8 D_001A6040[];
extern Type1 D_001A6098;
extern Type2 D_001A60C0[];
extern Type3 D_001A6080;
extern s32 func_0012D420(void);
extern s32 func_0012D470(void);
extern void func_00126E20(s32);
extern void func_00126F80(void);
extern s32 func_001268B0(s32, void *, s32);
extern s32 func_00127738(s32);
extern u32 func_00126FB0();
extern s32 func_00126FA0(s32, s32);
extern s32 func_00129B18(s32, s32, s32, s32, s32, s32);
extern void func_00129610();
extern void func_001295F0();
extern void func_00129B98();

void func_00129660(void)
{
    s32 i;
    s32 r;

    func_0012D420();
    if (D_00164698[0] != 0) {
        func_0012D470();
        return;
    }
    D_00164698[0] = 1;
    D_001A6098.f0 = (void *)((u32)D_001A5FC0 | 0x20000000);
    D_001A6098.f4 = (void *)((u32)D_001A6040 | 0x20000000);
    D_001A6098.f8 = 0;
    D_001A6098.fC = D_001A60C0;
    D_001A6098.f10 = 0x20;
    D_001A6098.f14 = 0;
    D_001A6098.f18 = 0;
    D_001A6098.f1C = D_001A6240;
    for (i = 0; i < 0x20; i++) {
        D_001A60C0[i].fn = 0;
        D_001A60C0[i].arg = 0;
    }
    for (i = 0; i < 0x20; i++) {
        D_001A6240[i] = 0;
    }
    D_001A60C0[0].fn = func_00129610;
    D_001A60C0[1].fn = func_001295F0;
    D_001A60C0[0].arg = &D_001A6098;
    D_001A60C0[1].arg = &D_001A6098;
    func_0012D470();
    func_00126E20(0);
    if (*(volatile u32 *)0x1000E010 & 0x20) {
        *(volatile u32 *)0x1000E010 = 0x20;
    }
    if (!(*(volatile u32 *)0x1000C000 & 0x100)) {
        func_00126F80();
    }
    D_001A6094[0] = func_001268B0(5, func_00129B98, 0);
    func_00127738(5);
    r = func_00126FB0(0x80000000);
    D_001A6098.f8 = r;
    if (r != 0) {
        D_001A6080.f10 = D_001A5FC0;
        func_00129B18(0x80000000, (s32)&D_001A6080, 0x14, 0, 0, 0);
        return;
    }
    while (!(func_00126FB0(4) & 0x20000)) {
    }
    r = func_00126FB0(2);
    D_001A6098.f8 = r;
    func_00126FA0(0x80000000, r);
    func_00126FA0(0x80000001, (s32)&D_001A6098);
    D_001A6080.f10 = D_001A5FC0;
    D_001A6080.fC = 0;
    func_00129B18(0x80000002, (s32)&D_001A6080, 0x14, 0, 0, 0);
}
