#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Send a 4-byte message: id 6, length 4, payload pointer to the saved first argument.
void func_001585C8(s32 arg0, s32 arg1, s32 arg2) {
    func_00158C60(6, 4, &arg0, arg1, arg2);
}
