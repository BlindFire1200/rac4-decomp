#include "common.h"

extern s32 func_1587E0(s32, s32);
extern s32 D_00335EE0[];
extern s32 D_00335F20[];
s32 D_00220260 = 0;

// Call func_1587E0 on the mapped value for an in-range index when it is not -1.
void func_L00_00684778(s32 index) {
    s32 value;
    if (index < 0) return;
    if (index >= D_00220260) return;
    value = D_00335F20[D_00335EE0[index]];
    if (value != -1) func_1587E0(value, -1);
}
