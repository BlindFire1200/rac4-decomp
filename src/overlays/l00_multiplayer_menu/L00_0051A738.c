#include "common.h"

// Return the 64-bit value at +0x88.
s64 func_L00_0051A738(u8 *object) {
    return *(s64 *)(object + 0x88);
}
