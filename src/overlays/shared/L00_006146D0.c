#include "common.h"

extern s32 func_L00_005BC9B8(void *);
extern void func_L00_005E7AC0(void *, s32);
extern void func_L00_00607960(void *);
s32 D_0021ED70 = 0;

void func_L00_006146D0(u8 *arg0) {
    func_L00_005E7AC0(arg0 + 4, D_0021ED70);
    if (func_L00_005BC9B8(arg0 + 0xA) != 0) {
        func_L00_00607960(arg0);
    }
}
