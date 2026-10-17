#include "common.h"

void *func_00453EB0(s16);
s32 func_004E1F90(s32, s32, s32);

// Look up the object for the halfword handle at handle_ptr. When it is missing,
// or belongs to owner and has a clear +0x10 byte, replace the handle with
// func_004E1F90(param, 4, owner).
void func_004DFF28(s32 *handle_ptr, s32 owner, s32 param) {
    u8 *object = (u8 *)func_00453EB0(*(s16 *)handle_ptr);

    if (object == 0 || (owner == *(s32 *)(object + 0x1C) && object[0x10] == 0)) {
        *handle_ptr = func_004E1F90(param, 4, owner);
    }
}
