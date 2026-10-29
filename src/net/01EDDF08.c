#include "common.h"

extern s32 D_1BCA2C_[];
#define D_1BCA2C (D_1BCA2C_[0])
extern s32 D_1BCC24_[];
#define D_1BCC24 (D_1BCC24_[0])

/* Calls the optional callback in D_1BCC24 with the 4th argument and a global value, then returns 28. */
s32 func_01EDDF08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*f)(s32, s32) = (void (*)(s32, s32))D_1BCC24;

    if (f != 0) {
        f(arg3, D_1BCA2C);
    }

    return 0x1C;
}
