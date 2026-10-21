#include "common.h"

extern s32 D_00308108_[];
#define D_00308108 (D_00308108_[0])

u8 func_004A7C30(s32 arg0) {
    u8 *ptr = (u8 *)((u32)&D_00308108 + (arg0 * 0xB8));
    return ptr[0xB4];
}
