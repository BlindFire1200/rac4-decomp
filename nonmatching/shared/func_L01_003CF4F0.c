/* Not matching yet: BYTES 12/144 (tools/try_func.py func_L01_003CF4F0 --diff). Not part of the build. */
#include "common.h"

extern s32 D_0021E948_[];
#define D_0021E948 (D_0021E948_[0])
extern u8 D_00222A9C[];
extern void func_L00_005DB6B8(void);
extern void func_L00_005B0038(void *, void *, void *);
extern s32 func_L01_00573DA0(void);
extern void func_L01_00573D00(void);
extern void func_L01_00591BD8(void *, s32, s32);

void func_L01_003CF4F0(u8 *arg0) {
    switch (arg0[0x20]) {
    case 0:
        if (D_0021E948 == 0) {
            if (func_L01_00573DA0() != 0) {
                func_L01_00591BD8(arg0, 1, -1);
                return;
            }
            break;
        }
    case 1:
        func_L01_00573D00();
        func_L00_005B0038(D_00222A9C, func_L00_005DB6B8, arg0);
        return;
    default:
        break;
    }
}
