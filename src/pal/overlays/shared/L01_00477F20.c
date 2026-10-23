#include "common.h"

extern void func_L01_00477440(f32, f32);

// Passes the linked object's byte at +0xF6, divided by 12, to func_L01_00477440 as both arguments.
void func_L01_00477F20(void *arg0) {
    f32 scale = (f32)(*(u8 **)((u8 *)arg0 + 0xAC))[0xF6] / 12.0f;
    func_L01_00477440(scale, scale);
}
