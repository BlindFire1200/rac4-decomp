#include "common.h"
typedef unsigned int u128 __attribute__((mode(TI)));
extern u8 *func_L00_005DD000(s32, s32);
u8 *func_L01_003D3EB0(u8 *arg0, s32 arg1) {
    u8 *result;
    if (*(s8 *)(arg0 + 0x20) < 0) {
        return NULL;
    }
    result = func_L00_005DD000(0x326, 0x60);
    if (result != NULL) {
        *(u8 *)(result + 0x30) = 0x40;
        *(u8 *)(result + 0x20) = 0;
        *(u8 **)(result + 0xB8) = arg0;
        *(s8 *)(*(u8 **)(result + 0xAC) + 0xD) = arg1;
        *(u128 *)(result + 0x10) = *(u128 *)(arg0 + 0x10);
        *(s32 *)(result + 0x98) = 0;
        *(u16 *)(result + 0x34) |= 0x41;
    }
    return result;
}
