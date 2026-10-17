#include "common.h"

extern void func_00499CE0(s32);
extern void func_004D2FF8(void);
extern s32 func_00505B20(void);
extern u8 D_31B6B0[];
void func_004D26D8(void) {
    u8 *object = D_31B6B0 + func_00505B20() * 0x1C;
    *(s32 *)(object + 8) = 0;
    func_004D2FF8();
    if (*(s32 *)(object + 0x14) != 0) {
        func_00499CE0(*(s32 *)(object + 0x14));
        *(s32 *)(object + 0x14) = 0;
    }
    if (*(s32 *)(object + 0x18) != 0) {
        func_00499CE0(*(s32 *)(object + 0x18));
        *(s32 *)(object + 0x18) = 0;
    }
}
