#include "common.h"

extern void func_00126BC0(s32);
extern s32 D_001641E0_[];
extern s32 D_001641E4_[];
extern s32 D_00164DB0_[];

void func_0011F398(void) {
    D_001641E4_[0] = D_001641E4_[0] - 1;
    if (D_001641E4_[0] == 0) {
        D_001641E0_[0] = -1;
        func_00126BC0(D_00164DB0_[0]);
    }
}
