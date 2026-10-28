/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 func_00126A90(void);
extern void func_00126BE0(s32);
extern s32 D_001641E0_[];
extern s32 D_001641E4_[];
extern s32 D_00164DB0_[];

void func_0011F338(void) {
    s32 tid = func_00126A90();

    if (D_001641E0_[0] == tid) {
        D_001641E4_[0] = D_001641E4_[0] + 1;
    } else {
        func_00126BE0(D_00164DB0_[0]);
        D_001641E0_[0] = tid;
        D_001641E4_[0] = D_001641E4_[0] + 1;
    }
}
