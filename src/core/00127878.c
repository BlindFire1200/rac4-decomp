/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0011FAE8 (NTSC-U func_0011FAE8, commit 403f30a9) */
#include "common.h"

typedef struct {
    int f0;
    void *f4;
    void *f8;
    int fC;
    void *f10;
    int f14;
    int f18;
    u32 f1C;
    u32 f20;
    u8 pad24[0x30 - 0x24];
} Type1;
typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
    u32 f10;
    u32 f14;
} Type2;
extern int D_00164690;
extern int D_001A5730;
extern int D_001A5738[];
extern u8 D_001A5330[];
extern u8 D_0022597F[];
extern char D_00192D78[];
extern int func_00126BA0();
extern int func_00126BB0();
extern int func_001269A0();
extern int func_00127AD0();
extern int func_00126A90();
extern int func_00126A30();
extern void func_001277A0();

int func_00127878(void)
{
    Type1 tp;
    Type2 sp;

    if (D_00164690 > 0) {
        return -1;
    }
    sp.f4 = 0xFF;
    sp.f8 = 0;
    sp.f14 = (u32)D_00192D78;
    D_001A5730 = func_00126BA0(&sp);
    if (D_001A5730 < 0) {
        return -1;
    }
    tp.f4 = func_001277A0;
    tp.f8 = D_001A5330;
    tp.fC = 0x400;
    tp.f10 = D_0022597F;
    tp.f14 = 0;
    tp.f20 = (u32)D_00192D78;
    D_00164690 = func_001269A0(&tp);
    if (D_00164690 < 0) {
        func_00126BB0(D_001A5730);
        return -1;
    }
    D_001A5738[0] = 0;
    D_001A5738[1] = 0;
    func_00127AD0(D_00164690, D_001A5738);
    func_00126A30(func_00126A90(), 1);
    return D_00164690;
}
