#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern u8 D_00230280[];
extern u8 *func_L00_0059B500(s32, s32, s32);

// Like func_L01_00520938, but the 128-bit value is read through a pointer and
// stored in the +0x90 slot.
void func_L01_005209A0(s32 index, u128 *value) {
    u8 *entry = D_00230280 + index * 0x470;
    u8 *object = *(u8 **)(entry + 0x50);
    u8 *result;
    if (*(s16 *)(object + 0x86) != 5) {
        result = func_L00_0059B500(index, 5, index);
    } else {
        result = object;
    }
    *(u128 *)(*(u8 **)(result + 0x70) + 0x90) = *value;
}
