#include "common.h"

extern void *memcpy(void *, const void *, u32);
extern void func_00158C60(s32, s32, void *, s32, s32);

// Send a 0x1C-byte message through func_00158C60 (0x60): the id word followed
// by the 0x18-byte payload, or -1 when there is no payload.
void func_00158630(s32 id, const void *payload) {
    u8 scratch[0x1C];
    *(s32 *)scratch = id;
    if (payload != 0) {
        memcpy(scratch + 4, payload, 0x18);
    } else {
        *(s32 *)(scratch + 4) = -1;
    }
    func_00158C60(0x60, 0x1C, scratch, 0, 0);
}
