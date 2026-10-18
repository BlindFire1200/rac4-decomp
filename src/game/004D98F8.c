#include "common.h"
extern u8 D_321650[];
s32 func_00505B20(void);
void func_005014B0(s32);
void func_004D9B20(void);
void func_004D99B8(void);
void func_004D9A48(void);
void func_004D98F8(s32 a0) {
    u8 *entry = D_321650 + func_00505B20() * 0x124;
    switch (*(s32 *)entry) {
    case 0: *(s32 *)entry = 2; break;
    case 1: func_005014B0(a0); break;
    case 2: func_004D9B20(); break;
    }
    if (*(s32 *)(entry + 8) & 1) func_004D99B8();
    if (*(s32 *)(entry + 8) & 2) func_004D9A48();
}
