#include "common.h"
extern s32 func_0069CC48(s32, s32, s32);
s32 func_L00_00711500(u8 *arg0, s32 arg1, s32 arg2) {
    s32 result = 0;
    s32 value = *(s32 *)(arg0 + 0x14);
    if (value != 0) result = func_0069CC48(value, arg1, arg2);
    value = *(s32 *)(arg0 + 0x60);
    if (value != 0) result |= func_0069CC48(value, arg1, arg2);
    return result != 0;
}
