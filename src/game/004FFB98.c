#include "common.h"

/* Clears word 0x18 of each of the 16 entries in the table at *a0. */
void func_004FFB98(u8 **a0) {
    s32 i;

    for (i = 0; i < 0x10; i++) {
        *(s32 *)(*a0 + (i << 2) + 0x18) = 0;
    }
}
