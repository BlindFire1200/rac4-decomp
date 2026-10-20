#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern void *func_L00_005DD000(s32, s32);

void *func_L01_004D71B0(void *arg0, u128 arg1, u128 arg2, s32 arg3, s32 arg4, f32 fparg0, f32 fparg1, f32 fparg2) {
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_L00_005DD000(0x1B79, 0x80);
    if (temp_v0 != NULL) {
        *(u8 *)((u8 *)temp_v0 + 0x30) = 0xFF;
        *(s16 *)((u8 *)temp_v0 + 0x32) = 0xFF;
        *(u8 *)((u8 *)temp_v0 + 0x31) = 1;
        *(u8 *)((u8 *)temp_v0 + 0x20) = 0;
        *(void **)((u8 *)temp_v0 + 0xB8) = arg0;
        temp_v1 = *(void **)((u8 *)temp_v0 + 0xAC);
        *(s64 *)((u8 *)temp_v0 + 0x38) = *(s64 *)((u8 *)arg0 + 0x38);
        *(u128 *)((u8 *)temp_v0 + 0x10) = *(u128 *)temp_v1;
        *(f32 *)((u8 *)temp_v1 + 0x4C) = fparg2;
        *(u128 *)temp_v1 = arg1;
        *(u128 *)((u8 *)temp_v1 + 0x20) = arg2;
        *(f32 *)((u8 *)temp_v1 + 0x3C) = fparg0;
        *(s32 *)((u8 *)temp_v1 + 0x44) = arg3;
        *(s32 *)((u8 *)temp_v1 + 0x48) = arg4;
        *(s32 *)((u8 *)temp_v1 + 0x38) = 0;
        *(s32 *)((u8 *)temp_v1 + 0x34) = 0;
        *(f32 *)((u8 *)temp_v0 + 0x70) = fparg1;
    }
    return temp_v0;
}
