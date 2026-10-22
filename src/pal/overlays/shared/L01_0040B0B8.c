#include "common.h"

extern void func_L01_0040A5D8(f32, f32);

// Passes the linked object's byte at +0xF2, divided by 21, to func_L01_0040A5D8 as both arguments.
void func_L01_0040B0B8(void *arg0) {
    f32 scale = (f32)(*(u8 **)((u8 *)arg0 + 0xAC))[0xF2] / 21.0f;
    func_L01_0040A5D8(scale, scale);
}
