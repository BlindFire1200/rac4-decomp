#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Packs its two arguments into a stack buffer and passes it to func_00158C60.
void func_00159638(s32 arg0, s32 arg1) {
    s32 buf[2];

    buf[0] = arg0;
    buf[1] = arg1;
    func_00158C60(0x51, 8, buf, 0, 0);
}
