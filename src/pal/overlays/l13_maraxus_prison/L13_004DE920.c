#include "common.h"

// Returns the linked object's s32 at +0x1C divided by its s32 at +0x18 converted to 50 Hz frames
// ((n * 5 + 2) / 6).
f32 func_L13_004DE920(void *arg0) {
    u8 *linked = *(u8 **)((u8 *)arg0 + 0xAC);
    return (f32)*(s32 *)(linked + 0x1C) / (f32)((*(s32 *)(linked + 0x18) * 5 + 2) / 6);
}
