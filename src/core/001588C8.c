#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Send a 4-byte message (id 0x61) carrying the given s32 as its payload.
void func_001588C8(s32 arg0) {
    s32 payload = arg0;
    func_00158C60(0x61, 4, &payload, 0, 0);
}
