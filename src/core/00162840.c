#include "common.h"

extern s32 D_212738[];

/* Stores (a1 != 0) into D_212738[a0] when a0 is below ten. */
void func_00162840(u32 a0, u32 a1) {
    if (a0 < 0xA) {
        D_212738[a0] = a1 != 0;
    }
}
