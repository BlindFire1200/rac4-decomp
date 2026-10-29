#include "common.h"

/* Clears word 0x58 of each of the 35 entries in the table at *a0. */
void func_004FFDF8(u8 **a0) {
    s32 i;

    for (i = 0; i < 0x23; i++) {
        ((s32 *)*a0)[i + 0x16] = 0;
    }
}
