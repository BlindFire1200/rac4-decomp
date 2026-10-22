#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

/* Sends a 0x17-id, 4-byte message whose payload is the incoming s32 argument. */
void func_00158898(s32 arg0) {
    s32 scratch = arg0;
    func_00158C60(0x17, 4, &scratch, 0, 0);
}
