#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Sends a 4-byte message with id 0x15 whose payload is arg0.
void func_001587E0(s32 arg0) {
    s32 v = arg0;
    func_00158C60(0x15, 4, &v, 0, 0);
}
