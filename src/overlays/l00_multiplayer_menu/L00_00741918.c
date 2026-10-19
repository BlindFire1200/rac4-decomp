#include "common.h"

// Return the halfword at +0x274.
s16 func_L00_00741918(u8 *object) {
    return *(s16 *)(object + 0x274);
}
