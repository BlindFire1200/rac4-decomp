#include "common.h"

// Store the big-endian word at arg1 into *arg0.

void func_L00_00510248(u32 *arg0, u8 *arg1) {
    *arg0 = ((arg1[0] << 24) | arg1[3]) | ((arg1[2] << 8) | (arg1[1] << 16));
}
