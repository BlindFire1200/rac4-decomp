#include "common.h"

extern s32 D_339500[];

// Return the address of D_339500 plus arg0 times 0x31F0.
void *func_00510BE8(s32 arg0) {
    return (arg0 * 0x31F0) + (char *)D_339500;
}
