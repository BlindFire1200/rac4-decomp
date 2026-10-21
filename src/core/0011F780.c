#include "common.h"

// Count the trailing zero bits of *value_ptr, shift them out and return the
// count (0x20 for zero; a value with bit 0 set returns 0). The first three low
// bits are special-cased: bit 1 set gives 1, otherwise 2.
s32 func_0011F780(u32 *value_ptr) {
    s32 shift;
    u32 bits;
    bits = *value_ptr;
    if (bits & 7) {
        if (bits & 1) return 0;
        if (bits & 2) {
            *value_ptr = bits >> 1;
            return 1;
        }
        *value_ptr = bits >> 2;
        return 2;
    }
    shift = 0;
    if (!(bits & 0xFFFF)) {
        shift = 0x10;
        bits >>= 0x10;
    }
    if (!(bits & 0xFF)) {
        shift += 8;
        bits >>= 8;
    }
    if (!(bits & 0xF)) {
        shift += 4;
        bits >>= 4;
    }
    if (!(bits & 3)) {
        shift += 2;
        bits >>= 2;
    }
    if (!(bits & 1)) {
        bits >>= 1;
        shift++;
        if (bits == 0) return 0x20;
    }
    *value_ptr = bits;
    return shift;
}
