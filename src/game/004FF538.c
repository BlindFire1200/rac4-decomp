#include "common.h"

extern void func_0015DB88(int *arg0, int arg1);
extern u8 D_003D3508[];

// Stores the address of D_003D3508 at offset 8 of arg0, then calls func_0015DB88 when arg1 is odd.
void func_004FF538(u8 *arg0, s32 arg1) {
    *(u8 **)(arg0 + 0x8) = D_003D3508;
    if (arg1 & 1) {
        func_0015DB88((int *)arg0, arg1 & 1);
    }
}
