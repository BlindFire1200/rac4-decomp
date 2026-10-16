#include "common.h"

// Return 1 unless the object fails the +0x30 flag test, has a nonzero +0x98, or
// is one of six types (see func_L01_004CC0F8) whose linked +0xAC object has a
// positive float at +0x50; null objects count as usable.
s32 func_L01_004CC160(u8 *object) {
    s32 result = 1;
    s16 type;
    u8 *linked;
    if (object != 0) {
        if ((*(u64 *)(object + 0x30) & ((u64)0x8208 << 29)) != ((u64)0x8200 << 23) ||
            *(s32 *)(object + 0x98) != 0) result = 0;
        type = *(s16 *)(object + 0xBC);
        if (type == 0x1A63 || type == 0x2555 || type == 0x2556 ||
            type == 0x20C7 || type == 0x2107 || type == 0x2557) {
            linked = *(u8 **)(object + 0xAC);
            if (linked != 0 && 0.0f < *(f32 *)(linked + 0x50)) result = 0;
        }
    }
    return result;
}
