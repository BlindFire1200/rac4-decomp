#include "common.h"

void *func_00453EB0(s16);
s32 func_004E1F90(s32, s32, s32);

void func_004DFF28(s32 *arg0, s32 arg1, s32 arg2) {
    u8 *object = (u8 *)func_00453EB0(*(s16 *)arg0);

    if (object == 0 || (arg1 == *(s32 *)(object + 0x1C) && object[0x10] == 0)) {
        *arg0 = func_004E1F90(arg2, 4, arg1);
    }
}
