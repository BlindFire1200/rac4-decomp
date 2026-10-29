#include "common.h"

extern u8 D_003D3508[];

// Clear the first word of the argument and store the address of D_003D3508 in its second word.
void *func_00501598(void *arg0) {
    *(s32 *)arg0 = 0;
    *(u8 **)((u8 *)arg0 + 8) = D_003D3508;
    return arg0;
}
