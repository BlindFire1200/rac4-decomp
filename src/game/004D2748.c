#include "common.h"
extern void func_004D27F8(void);
extern void func_004D2BC0(void);
extern void func_005014B0(s32);
extern s32 func_00505B20(void);
extern u8 D_31B6B0[];
void func_004D2748(s32 arg0) {
    u8 *entry = D_31B6B0 + func_00505B20() * 0x1C;
    switch (*(s32 *)entry) {
    case 1:
        *(s32 *)entry = 0;
        break;
    case 2:
        func_005014B0(arg0);
        break;
    case 0:
        func_004D2BC0();
        break;
    }
    if (*(s32 *)(entry + 8) & 1) func_004D27F8();
}
