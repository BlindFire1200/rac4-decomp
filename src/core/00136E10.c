/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012AAE0 (NTSC-U func_0012AAE0, commit 403f30a9) */
#include "common.h"

extern volatile int D_00165FD4;
extern volatile int D_00165FE0;
extern volatile int D_00165FE8;
extern volatile int D_00165FF4;
extern volatile int D_00166020;
extern volatile int D_00166024;
extern int D_001AD5C0;
extern void func_00126BD0(s32);

void func_00136E10(s32 *p) {
    u64 var1;

    D_00166020 = p[0];
    D_00166024 = D_00166020;
    if (D_00166020 == 11) {
        D_00166020 = 0;
        D_00165FF4 = 0;
        return;
    }
    func_00126BD0(D_00165FE8);
    var1 = D_00165FD4;
    if (var1 != 0 && D_001AD5C0 != 0) {
        func_00126BD0(D_00165FE0);
    } else {
        D_00165FF4 = 0;
    }
    D_00166020 = 0;
}
