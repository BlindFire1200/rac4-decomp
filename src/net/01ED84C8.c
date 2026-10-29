#include "common.h"

/* Stores arg1, arg2 and arg3 into the object at arg0 when all three args are non-zero and returns 0, else -0x15. */
s32 func_01ED84C8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 ret;

    ret = -0x15;
    if (arg0 != 0 && arg1 != 0 && arg2 != 0) {
        ret = 0;
        *(s32 *)((u8 *)arg0 + 0x0) = arg1;
        *(s32 *)((u8 *)arg0 + 0x4) = arg2;
        *(s32 *)((u8 *)arg0 + 0xC) = arg3;
        *(s32 *)((u8 *)arg0 + 0x8) = arg3;
        *(s16 *)((u8 *)arg0 + 0x10) = 0;
    }
    return ret;
}
