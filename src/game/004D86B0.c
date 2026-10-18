#include "common.h"

extern u8 D_320178[];
s32 func_00505B20(void);
s32 func_005014B0(s32);
void func_004D8770(void);
void func_004D8988(void);
void func_004D8A18(void);

// Dispatch on the state word of the current owner's entry (D_320178): state 0
// moves it to 2, state 1 runs func_005014B0 with the parameter and state 2 runs
// func_004D8770. Then run func_004D8988 (bit 0) and func_004D8A18 (bit 1) for
// the bits of the +8 flags.
void func_004D86B0(s32 param) {
    u8 *entry = D_320178 + func_00505B20() * 0x3AC;
    switch (*(s32 *)entry) {
    case 0: *(s32 *)entry = 2; break;
    case 1: func_005014B0(param); break;
    case 2: func_004D8770(); break;
    }
    if (*(s32 *)(entry + 8) & 1) func_004D8988();
    if (*(s32 *)(entry + 8) & 2) func_004D8A18();
}
