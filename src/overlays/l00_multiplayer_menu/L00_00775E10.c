#include "common.h"

void *func_L00_007756B0(s32, s32);
void func_L00_00775680(s32, void *);

void func_L00_00775E10(s32 unused, void *arg1, s32 arg2, u8 *arg3) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;

    if (arg1 != 0) {
        if (arg2 == 0) {
            arg3[0x2C] = 1;
            temp_v0 = func_L00_007756B0(*(s32 *)(arg3 + 0x20), *(s32 *)(arg3 + 0x28));
            temp_a3 = *(s32 *)temp_v0;
            temp_v0_2 = temp_a3 & 0xFFFFFFBF;
            *(s32 *)temp_v0 = temp_v0_2 | 0x100;
            temp_a1 = *(s32 *)((u8 *)temp_v0 + 0x10);
            if (temp_a1 != *(s32 *)((u8 *)arg1 + 0x98)) {
                *(s32 *)((u8 *)temp_v0 + 0x10) = *(s32 *)((u8 *)arg1 + 0x98);
                *(s32 *)temp_v0 = temp_v0_2 | 0x102;
            }
            temp_v0_3 = *(s32 *)temp_v0;
            if (temp_a3 != temp_v0_3) {
                *(s32 *)temp_v0 = temp_v0_3 | 2;
            }
        }
    } else {
        if (arg3[0x2C] == 0) {
            func_L00_00775680(*(s32 *)(arg3 + 0x20), func_L00_007756B0(*(s32 *)(arg3 + 0x20), *(s32 *)(arg3 + 0x28)));
        }
        *(s32 *)(arg3 + 0x1C) = 4;
        *(s32 *)(arg3 + 0x28) += 1;
    }
}
