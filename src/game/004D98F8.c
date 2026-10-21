#include "common.h"

extern u8 D_321650[];
s32 func_00505B20(void);
void func_005014B0(s32);
void func_004D9B20(void);
void func_004D99B8(void);
void func_004D9A48(void);

// Dispatch on the state word of the current owner's entry (D_321650): state 0
// moves it to 2, state 1 runs func_005014B0 with the parameter and state 2 runs
// func_004D9B20. Then run func_004D99B8 (bit 0) and func_004D9A48 (bit 1) for
// the bits of the +8 flags.
void func_004D98F8(s32 param) {
    u8 *entry = D_321650 + func_00505B20() * 0x124;
    switch (*(s32 *)entry) {
    case 0: *(s32 *)entry = 2; break;
    case 1: func_005014B0(param); break;
    case 2: func_004D9B20(); break;
    }
    if (*(s32 *)(entry + 8) & 1) func_004D99B8();
    if (*(s32 *)(entry + 8) & 2) func_004D9A48();
}
