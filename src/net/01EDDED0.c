#include "common.h"

extern s32 D_1BCA28_[];
#define D_1BCA28 (D_1BCA28_[0])
extern s32 D_1BCC20_[];
#define D_1BCC20 (D_1BCC20_[0])

/* Calls the optional callback in D_1BCC20 with the 4th argument and a global value, then returns 28. */
s32 func_01EDDED0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*f)(s32, s32) = (void (*)(s32, s32))D_1BCC20;

    if (f != 0) {
        f(arg3, D_1BCA28);
    }

    return 0x1C;
}
