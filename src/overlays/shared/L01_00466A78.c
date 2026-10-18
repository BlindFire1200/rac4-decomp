#include "common.h"

extern s32 func_L00_005E6560(u8 *);
extern s32 func_L01_00466A48(s32, s32, u8 *);

s32 func_L01_00466A78(u8 *arg0, s32 arg1, s32 arg2) {
    u8 type;

    if (func_L00_005E6560(arg0) != 0) {
        return 1;
    }
    if (func_L01_00466A48(arg1, arg2, arg0) != 0) {
        return 1;
    }
    type = *(u8 *)(*(u8 **)(arg0 + 0x24) + 0x46);
    return (type != 5 && type != 9 && type != 0xD) || *(s16 *)(arg0 + 0xBC) == 0x2073;
}
