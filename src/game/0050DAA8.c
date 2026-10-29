#include "common.h"

extern void func_0015DB88(int *arg0, int arg1);
extern u8 D_003D3508[];

// Stores the address of D_003D3508 at offset 8 of arg0; calls func_0015DB88 when bit 0 of arg1 is set.
void func_0050DAA8(s32 *arg0, s32 arg1) {
    s32 temp;

    arg0[2] = (s32)D_003D3508;
    temp = arg1 & 1;
    if (temp != 0) {
        func_0015DB88(arg0, temp);
    }
}
