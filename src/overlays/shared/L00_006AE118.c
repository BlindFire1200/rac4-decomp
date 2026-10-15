#include "common.h"

extern void func_L00_005B0038(void *, void *, s32);
extern s32 D_002221DC;
extern void func_L00_006AE1E0(void);

void func_L00_006AE118(u8 *arg0) {
    if (arg0[0x25C8] == 0) {
        arg0[0x25C8] = 1;
        func_L00_005B0038(&D_002221DC, func_L00_006AE1E0, *(s32 *)(arg0 + 0x2EF0));
    }
}
