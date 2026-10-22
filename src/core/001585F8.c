#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Send an 0x8-byte message (two words) through func_00158C60: id 9, length 8,
// with the payload being the two incoming words.
void func_001585F8(s32 arg0, s32 arg1) {
    s32 buf[2];
    buf[0] = arg0;
    buf[1] = arg1;
    func_00158C60(9, 8, buf, 0, 0);
}
