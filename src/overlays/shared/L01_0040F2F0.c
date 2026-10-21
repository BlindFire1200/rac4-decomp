#include "common.h"

// Return 1 when the object's +0x30 link is set and is not other, and the linked
// object's stage byte (+0x46 of its +0x24 block) is 5 or 9 or its +0x34 flags
// have bit 14 set; otherwise 0.
s32 func_L01_0040F2F0(u8 *object, void *other) {
    u8 *linked = *(u8 **)(object + 0x30);
    s32 result = 0;
    u8 stage;
    if (linked != 0 && linked != other) {
        stage = *(*(u8 **)(linked + 0x24) + 0x46);
        if (stage == 5 || stage == 9 || (*(u16 *)(linked + 0x34) & 0x4000)) result = 1;
    }
    return result;
}
