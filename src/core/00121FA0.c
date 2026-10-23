/* cflags: -fno-opt-stack */
#include "common.h"

#include "common.h"

extern s32 func_0011A180(s32);

/* compares two strings character by character through the case table */
s32 func_00121FA0(s8 *arg0, s8 *arg1) {
    s32 d;

    while (*arg0 != 0) {
        d = func_0011A180(*arg0);
        if (d != func_0011A180(*arg1)) {
            break;
        }
        arg0++;
        arg1++;
    }
    return func_0011A180((u8)*arg0) - func_0011A180((u8)*arg1);
}
