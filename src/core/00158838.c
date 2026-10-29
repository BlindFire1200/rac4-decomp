#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Send a message with id 0x18 and no payload.
void func_00158838(void) {
    func_00158C60(0x18, 0, 0, 0, 0);
}
