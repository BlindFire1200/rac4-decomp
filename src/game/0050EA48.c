#include "common.h"

/* Stores the address of D_003D3508 at +8 of the first argument; calls func_0015DB88 when the low bit of the second is set. */
extern void func_0015DB88(int *arg0, int arg1);
extern u8 D_003D3508[];

void func_0050EA48(int *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg1 & 1;
    *(u8 **)((u8 *)arg0 + 0x8) = D_003D3508;
    if (temp_a1 != 0) {
        func_0015DB88(arg0, temp_a1);
    }
}
