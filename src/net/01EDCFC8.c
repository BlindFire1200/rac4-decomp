#include "common.h"

extern s32 D_1BC92C_[];
#define D_1BC92C (D_1BC92C_[0])
extern s32 D_1BCB24_[];
#define D_1BCB24 (D_1BCB24_[0])

/* Calls the registered callback (if any) with the 4th argument and a global value, then returns 420. */
s32 func_01EDCFC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*f)(s32, s32) = (void (*)(s32, s32))D_1BCB24;

    if (f != 0) {
        f(arg3, D_1BC92C);
    }

    return 0x1A4;
}
