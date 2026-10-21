#include "common.h"

extern u8 D_307074[];
extern u8 D_307220[];
extern s32 func_004983E8(s32);
extern void func_004E0858(void);
extern void func_0049E578(s32, s32);
extern void func_0049E5B0(s32, s32);
extern void func_0049E3E8(s32);
extern void func_00497580(s32 *, s32, s32);
extern void func_00497628(s32 *, s32, s32);
extern void func_00497980(s32);

void func_0049E2B8(s32 arg0) {
    u8 *target;

    if (arg0 == 4) target = D_307074;
    else target = D_307220 + (arg0 << 9);

    switch (func_004983E8(4)) {
    case 6:
    case 8:
        func_004E0858();
        func_004E0858();
        func_0049E578(arg0, *(s32 *)(target + 0x14));
        func_00497580((s32 *)(target + 0x14), *(s32 *)(target + 0x10), 0);
        func_00497980(0);
        func_0049E5B0(arg0, *(s32 *)(target + 0x14));
        break;
    case 5:
    case 7:
        func_004E0858();
        func_004E0858();
        func_0049E578(arg0, *(s32 *)(target + 0x14));
        func_00497628((s32 *)(target + 0x14), *(s32 *)(target + 0x10), 0);
        func_00497980(0);
        func_0049E5B0(arg0, *(s32 *)(target + 0x14));
        break;
    case 2:
        *(s32 *)(target + 0x14) = 0;
        func_0049E3E8(arg0);
        break;
    case 1:
        if (target[0x30] == 0) func_0049E3E8(arg0);
        break;
    case 3:
        if (target[0x30] != 0) func_0049E3E8(arg0);
        break;
    case 4:
        break;
    }
}
