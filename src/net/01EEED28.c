#include "common.h"

// Returns 1 when the unk5B10 fields of both sub-objects are zero, testing the second only when the first is zero.
s32 func_01EEED28(u8 *a0) {
    s32 v1 = 0;
    u8 *p = *(u8 **)(a0 + 0xA4);
    if (*(s32 *)(p + 0x5B10) == 0) {
        p = *(u8 **)(a0 + 0xA8);
        v1 = *(s32 *)(p + 0x5B10) == 0;
    }
    return v1;
}
