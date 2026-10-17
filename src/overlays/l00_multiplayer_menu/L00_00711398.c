#include "common.h"
extern s32 func_0069DA50(s32, f32, f32);
s32 func_L00_00711398(u8 *arg0, f32 x, f32 y) {
    s32 result = 0;
    s32 value = *(s32 *)(arg0 + 0x14);
    if (value != 0) result = func_0069DA50(value, x, y);
    value = *(s32 *)(arg0 + 0x60);
    if (value != 0) result |= func_0069DA50(value, x, y);
    return result != 0;
}
