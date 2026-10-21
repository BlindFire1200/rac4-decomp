#include "common.h"

extern u8 D_321140[];
s32 func_00505B20(void);
s32 func_005014B0(s32);
void func_004D8F70(void);
void func_004D9378(void);
void func_004D9408(void);

// Dispatch on the state word of the current owner's entry (D_321140): state 0
// moves it to 2, state 1 runs func_005014B0 with the parameter and state 2 runs
// func_004D8F70. Then run func_004D9378 (bit 0) and func_004D9408 (bit 1) for
// the bits of the +8 flags.
void func_004D8EB0(s32 param) {
    u8 *entry = D_321140 + func_00505B20() * 0x114;
    switch (*(s32 *)entry) {
    case 0: *(s32 *)entry = 2; break;
    case 1: func_005014B0(param); break;
    case 2: func_004D8F70(); break;
    }
    if (*(s32 *)(entry + 8) & 1) func_004D9378();
    if (*(s32 *)(entry + 8) & 2) func_004D9408();
}
