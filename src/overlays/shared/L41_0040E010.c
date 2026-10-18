#include "common.h"

extern s32 func_00540020(s32);
extern void func_L00_0069D028(s32, s32);
extern s32 func_L00_0069DC48(s32);
extern s32 func_L00_0069DC90(void);
extern void func_L41_0040DCA0(s32, s32);
extern s32 D_00381550[];
s32 D_002212B0[4] __attribute__((section(".sdata"))) = {6, 9, 8, 7};
static inline s32 push_ctx(s32 c) {
    s32 old = func_L00_0069DC90();
    func_L00_0069DC48(c);
    return old;
}
void func_L41_0040E010(s32 arg0) {
    s32 old = push_ctx(arg0);
    s32 idx;
    s32 i;
    idx = func_00540020(arg0);
    func_L00_0069D028(D_00381550[idx], 0);
    func_L00_0069D028(0xA0001, 0);
    for (i = 0; i < 4; i++) {
        func_L00_0069D028(D_00381550[idx] + D_002212B0[i], 0);
    }
    func_L41_0040DCA0(arg0, 0);
    func_L00_0069DC48(old);
}
