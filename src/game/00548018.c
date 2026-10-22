#include "common.h"

extern void *func_00548D28(s32, s32);

/* True when the signed halfword at 0x42 of the object func_00548D28(arg0, 0)
   returns is less than 1. */
s32 func_00548018(s32 arg0) {
    return *(s16 *)((u8 *)func_00548D28(arg0, 0) + 0x42) < 1;
}
