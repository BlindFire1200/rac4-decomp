#include "common.h"
extern u8 D_321140[];
s32 func_00505B20(void);
s32 func_005014B0(s32);
void func_004D8F70(void);
void func_004D9378(void);
void func_004D9408(void);
void func_004D8EB0(s32 arg0) {
    u8 *entry = D_321140 + func_00505B20() * 0x114;
    switch (*(s32 *)entry) {
    case 0: *(s32 *)entry = 2; break;
    case 1: func_005014B0(arg0); break;
    case 2: func_004D8F70(); break;
    }
    if (*(s32 *)(entry + 8) & 1) func_004D9378();
    if (*(s32 *)(entry + 8) & 2) func_004D9408();
}
