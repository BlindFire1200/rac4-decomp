#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Send a 4-byte message whose payload is the given value.
void func_00158598(s32 arg0) {
    u8 scratch[0x10];
    *(s32 *)scratch = arg0;
    func_00158C60(6, 4, scratch, 0, 0);
}
