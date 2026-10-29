#include "common.h"

/* Zeroes the words at offsets 0xC and 0x8 of the object. */
void func_004F22C8(void *arg0) {
    ((volatile s32 *)arg0)[3] = 0;
    ((volatile s32 *)arg0)[2] = 0;
}
