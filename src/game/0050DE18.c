#include "common.h"

// Stores four integer fields of the object at arg0 (offsets 0x30, 0x44, 0x48, 0x4C).
void func_0050DE18(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    *(s32 *)((u8 *)arg0 + 0x30) = arg1;
    *(s32 *)((u8 *)arg0 + 0x44) = arg2;
    *(s32 *)((u8 *)arg0 + 0x48) = arg3;
    *(s32 *)((u8 *)arg0 + 0x4C) = arg4;
}
