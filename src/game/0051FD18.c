#include "common.h"

extern void func_004DFF28(s32 *handle_ptr, s32 owner, s32 param);

/* Registers a handle slot in the object's table and stores the owner id into that slot. */
void func_0051FD18(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1 = arg1 * 4;
    func_004DFF28((s32 *)((u8 *)arg0 + (temp_s1 + 0x2D30)), arg2, arg3);
    *(s32 *)((u8 *)arg0 + temp_s1 + 0x2D54) = arg2;
}
