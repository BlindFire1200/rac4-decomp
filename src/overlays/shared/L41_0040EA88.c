#include "common.h"
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
} Type1;
extern s32 func_00540020(s32);
extern void func_005C1C60(s32, s32);
extern s32 func_L00_0069DC48(s32);
extern s32 func_L00_0069DC90(void);
extern s32 func_L41_0040E4E8(s32, s32);
extern Type1 D_00375B50[][4];
extern s32 D_00381550[];
s32 D_002212B0[4] __attribute__((section(".sdata"))) = {6, 9, 8, 7};
void func_L41_0040EA88(s32 arg0) {
    s32 i;
    s32 *base;
    s32 old;
    old = func_L00_0069DC90();
    func_L00_0069DC48(arg0);
    base = &D_00381550[func_00540020(arg0)];
    for (i = 0; i < 4; i++) {
        if (func_L41_0040E4E8(arg0, i) == 0) {
            func_005C1C60(*base + D_002212B0[i], D_00375B50[arg0][i].fC);
        }
    }
    func_L00_0069DC48(old);
}
