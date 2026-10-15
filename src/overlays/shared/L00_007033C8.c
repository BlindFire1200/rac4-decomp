#include "common.h"

extern void func_L00_005BCBF0(void *, u8 *, s32);
extern void func_L00_006F0A40(void *);

// Build a small record and process it when its tag matches.
s32 func_L00_007033C8(s32 unused0, s32 unused1, s32 unused2, u8 *arg3) {
    u8 buffer[0x18];
    s32 value = 0x18;
    if ((*arg3 & 4) != 0) {
        value = 0x12;
    }
    func_L00_005BCBF0(buffer, arg3, value);
    if (((*(u32 *)(buffer + 4) >> 24) & 0xF) == 2) {
        func_L00_006F0A40(buffer);
    }
    return value;
}
