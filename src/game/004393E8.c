#include "common.h"

/* Stores the given s32 value at the address given by the lower 32 bits of arg1. */
void func_004393E8(s32 arg0, s64 arg1) {
    *(s32 *)arg1 = arg0;
}
