#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern u8 D_00230280[];
extern u8 *func_L00_0059B500(s32, s32, s32);
void func_L01_005209A0(s32 index, u128 *arg1) {
    u8 *base = D_00230280 + index * 0x470;
    u8 *record = *(u8 **)(base + 0x50);
    u8 *result;
    if (*(s16 *)(record + 0x86) != 5) {
        result = func_L00_0059B500(index, 5, index);
    } else {
        result = record;
    }
    *(u128 *)(*(u8 **)(result + 0x70) + 0x90) = *arg1;
}
