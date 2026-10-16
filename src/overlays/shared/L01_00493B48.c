#include "common.h"
extern void func_L00_005E75B0(void *, s32, s32, f32);
extern void func_L01_00591BD8(void *, s32, s32);

void func_L01_00493B48(void *object, s32 action) {
    if ((u32)(action - 1) < 5) {
        switch (action) {
        case 1:
            if (*((u8 *)object + 0x54) != 1) func_L00_005E75B0(object, 1, 0, 0.0f);
            break;
        case 2:
            if (*((u8 *)object + 0x54) != 2) func_L00_005E75B0(object, 2, 0, 0.0f);
            *((u8 *)object + 0x55) |= 0x10;
            break;
        case 3:
            if (*((u8 *)object + 0x54) != 0) func_L00_005E75B0(object, 0, 0, 0.0f);
            break;
        case 4:
            if (*((u8 *)object + 0x54) != 3) func_L00_005E75B0(object, 3, 0, 0.0f);
            *((u8 *)object + 0x55) |= 0x10;
            break;
        case 5:
            if (*((u8 *)object + 0x54) != 0) func_L00_005E75B0(object, 0, 0, 0.0f);
            break;
        }
    }
    func_L01_00591BD8(object, action, -1);
}
