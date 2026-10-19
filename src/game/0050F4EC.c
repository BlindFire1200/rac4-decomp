#include "common.h"

// Advance a countdown: when -*position reaches the threshold, either subtract
// the threshold from it and set the owner's mode byte (+0x51 of its +0x40
// block) to 3 when bit 9 of the state's +0x40 flags is set, or copy the state's
// +0x4C halfword to +0x4E and set the mode to 2. Then always subtract the +0x48
// float of that block from the position.
void func_0050F4EC(s32 unused, f32 *position, void *state, void *owner, f32 unused_float, f32 threshold) {
    f32 value = *position;
    if (threshold <= -value) {
        if ((*(u16 *)((u8 *)state + 0x40) & 0x200) != 0) {
            *position = value - threshold;
            *(u8 *)(*(u8 **)((u8 *)owner + 0x40) + 0x51) = 3;
        } else {
            *(u16 *)((u8 *)state + 0x4E) = *(u16 *)((u8 *)state + 0x4C);
            *(u8 *)(*(u8 **)((u8 *)owner + 0x40) + 0x51) = 2;
        }
    }
    *position -= *(f32 *)(*(u8 **)((u8 *)owner + 0x40) + 0x48);
}
