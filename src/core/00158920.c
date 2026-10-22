#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Sends a 4-byte message (id 0x19) whose payload is the first argument.
void func_00158920(s32 arg0, s32 arg1, s32 arg2) {
    s32 payload[4];
    payload[0] = arg0;
    func_00158C60(0x19, 4, payload, arg1, arg2);
}
