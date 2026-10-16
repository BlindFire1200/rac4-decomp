#include "common.h"
s32 func_L01_004CC160(u8 *arg0) {
    s32 result = 1;
    s16 type;
    u8 *linked;
    if (arg0 != 0) {
        if ((*(u64 *)(arg0 + 0x30) & ((u64)0x8208 << 29)) != ((u64)0x8200 << 23) ||
            *(s32 *)(arg0 + 0x98) != 0) result = 0;
        type = *(s16 *)(arg0 + 0xBC);
        if (type == 0x1A63 || type == 0x2555 || type == 0x2556 ||
            type == 0x20C7 || type == 0x2107 || type == 0x2557) {
            linked = *(u8 **)(arg0 + 0xAC);
            if (linked != 0 && 0.0f < *(f32 *)(linked + 0x50)) result = 0;
        }
    }
    return result;
}
