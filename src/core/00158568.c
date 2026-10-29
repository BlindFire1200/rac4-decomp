#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Send a message with id 8 and no payload.
void func_00158568(void) {
    func_00158C60(8, 0, 0, 0, 0);
}
