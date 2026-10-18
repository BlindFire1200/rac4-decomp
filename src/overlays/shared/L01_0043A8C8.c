#include "common.h"

extern s32 func_L01_0056D9B0(s32);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);

// Store a byte on the linked object, then pick a follow-up state for states 11..13.
void func_L01_0043A8C8(u8 *object, s32 value) {
    u8 *linked = *(u8 **)(object + 0xAC);
    u8 state;
    linked[0x342] = value;
    state = object[0x20];
    if ((u32)(state - 11) < 3) {
        if (linked[0x48B] != 0 ||
            (state != 13 && *(s32 *)(linked + 0x468) != -1 &&
             func_L01_0056D9B0(*(s32 *)(linked + 0x468)) != 0)) {
            *(s32 *)(linked + 0x33C) = 3;
            if ((u32)(object[0x20] - 12) < 2) {
                func_L01_00591BD8(object, 8, -1);
            } else if (linked[0x460] != 0 && *(s32 *)(linked + 0x470) != -1) {
                func_L01_00591BD8(object, 6, -1);
            } else {
                func_L01_00591BD8(object, 1, -1);
            }
        }
    }
}
