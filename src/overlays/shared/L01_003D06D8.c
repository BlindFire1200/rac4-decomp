#include "common.h"

extern s32 func_L00_005E60D0(s32, s32);
extern s32 func_L01_003D0608(u8 *owner);
extern void func_L01_003D0838(u8 *owner);
extern s32 func_L01_003D0878(u8 *owner);
extern void func_L01_003D08C0(u8 *owner, s32 value, s32 flag, s32 a, s32 b);
extern s32 D_0021E824;
extern s32 D_0021E828;
extern u8 D_00171DE0_[];

// Dispatch on the mode byte at +0x92 of the linked +0xAC object and forward to func_L01_003D08C0.
void func_L01_003D06D8(u8 *owner, s32 a, s32 b) {
    s32 value;
    switch (*(*(u8 **)(owner + 0xAC) + 0x92)) {
    case 0:
        func_L01_003D08C0(owner, func_L00_005E60D0(0, func_L01_003D0878(owner) - 1), 0, a, b);
        break;
    case 1:
        func_L01_003D08C0(owner, 0, 1, a, b);
        break;
    case 3:
        if (func_L01_003D0608(owner) != 0) {
            func_L01_003D0838(owner);
            func_L01_003D08C0(owner, func_L00_005E60D0(0, func_L01_003D0878(owner) - 1), 0, a, b);
            break;
        }
    case 2:
        func_L01_003D08C0(owner, func_L00_005E60D0(0, func_L01_003D0878(owner) - 1), 1, a, b);
        break;
    case 4:
        value = 0;
        if (D_0021E824 == 0) value = D_0021E828 == 1;
        func_L01_003D08C0(owner, value, 0, a, b);
        break;
    case 5:
        func_L01_003D08C0(owner, D_00171DE0_[0] == 0, 0, a, b);
        break;
    }
}
