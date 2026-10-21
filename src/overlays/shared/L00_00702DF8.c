#include "common.h"

// Conditional return based on bit 2
s32 func_L00_00702DF8(s32 unused0, s32 unused1, s32 unused2, u8 *arg3) {
    s32 v0 = 0x18;
    if ((*arg3 & 4) != 0) {
        v0 = 0x12;
    }
    return v0;
}
