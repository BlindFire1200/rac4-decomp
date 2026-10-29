#include "common.h"

extern void func_0015DB88(int *arg0, int arg1);
extern u8 D_003D3508[];

// Store the data address at +0x8 and call func_0015DB88 when bit 0 of arg1 is set.
void func_0050C4B0(int *arg0, int arg1) {
    int temp_a1;

    temp_a1 = arg1 & 1;
    *(u8 **)((u8 *)arg0 + 0x8) = D_003D3508;
    if (temp_a1 != 0) {
        func_0015DB88(arg0, temp_a1);
    }
}
