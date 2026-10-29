#include "common.h"

/* Stores -1 in a local byte and passes its address as the fourth argument. */
extern s32 func_0054AFB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_00541B38(void) {
    s8 buf[16];

    buf[0] = -1;
    func_0054AFB8(0, 0, 0, buf);
}
