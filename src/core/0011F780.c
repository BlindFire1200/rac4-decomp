#include "common.h"
s32 func_0011F780(u32 *arg0) {
    s32 count;
    u32 value;
    value = *arg0;
    if (value & 7) {
        if (value & 1) return 0;
        if (value & 2) {
            *arg0 = value >> 1;
            return 1;
        }
        *arg0 = value >> 2;
        return 2;
    }
    count = 0;
    if (!(value & 0xFFFF)) {
        count = 0x10;
        value >>= 0x10;
    }
    if (!(value & 0xFF)) {
        count += 8;
        value >>= 8;
    }
    if (!(value & 0xF)) {
        count += 4;
        value >>= 4;
    }
    if (!(value & 3)) {
        count += 2;
        value >>= 2;
    }
    if (!(value & 1)) {
        value >>= 1;
        count++;
        if (value == 0) return 0x20;
    }
    *arg0 = value;
    return count;
}
