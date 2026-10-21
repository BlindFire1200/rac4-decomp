#include "common.h"

extern void func_L08_004D1238(void *);
extern void func_L01_00586440(void *, s32);
extern void func_L01_00591BD8(void *, s32, s32);

// Run func_L08_004D1238. When none of the three 0x1E0-byte slots (words at
// +0x1F4) holds 2 or more, run func_L01_00586440 (object, 1) and move to state
// 2 (-1).
void func_L08_004D1258(void *object) {
    u8 *state = *(u8 **)(object + 0xAC);
    s32 i;
    func_L08_004D1238(object);
    for (i = 0; i < 3; i++) {
        if (*(s32 *)(state + 0x1F4 + i * 0x1E0) >= 2) return;
    }
    func_L01_00586440(object, 1);
    func_L01_00591BD8(object, 2, -1);
}
