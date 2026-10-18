#include "common.h"
extern u8 D_320178[];
s32 func_00505B20(void);
s32 func_005014B0(s32);
void func_004D8770(void);
void func_004D8988(void);
void func_004D8A18(void);
void func_004D86B0(s32 arg0) {
    u8 *entry = D_320178 + func_00505B20() * 0x3AC;
    switch (*(s32 *)entry) {
    case 0: *(s32 *)entry = 2; break;
    case 1: func_005014B0(arg0); break;
    case 2: func_004D8770(); break;
    }
    if (*(s32 *)(entry + 8) & 1) func_004D8988();
    if (*(s32 *)(entry + 8) & 2) func_004D8A18();
}
