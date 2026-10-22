#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Send a 0x18-byte message (id 0x21) carrying eight words through func_00158C60.
void func_001589A8(s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7) {
    s32 buf[6];
    buf[0] = p0;
    buf[1] = p1;
    buf[2] = p2;
    buf[3] = p3;
    buf[4] = p4;
    buf[5] = p5;
    func_00158C60(0x21, 0x18, buf, p6, p7);
}
