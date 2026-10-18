#include "common.h"
extern s32 func_00540020(s32);
extern void func_005C16E8(s32, s32);
extern void func_005C1A90(s32, u32);
extern void func_L00_0069D028(s32, s32);
extern void func_L00_0069DC48(s32);
extern s32 func_L00_0069DC90(void);
extern s32 D_00381550[];
s32 D_002212B0[4] __attribute__((section(".sdata"))) = {6, 9, 8, 7};
void func_L41_0040E218(s32 arg0, s32 arg1) {
    s32 old = func_L00_0069DC90();
    s32 target;
    func_L00_0069DC48(arg0);
    target = D_00381550[func_00540020(arg0)] + D_002212B0[arg1];
    func_005C1A90(target, 0x80D0D0D0);
    func_005C16E8(target, 1);
    func_L00_0069D028(target, 0);
    func_L00_0069DC48(old);
}
