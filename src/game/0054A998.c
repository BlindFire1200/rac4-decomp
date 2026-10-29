#include "common.h"

extern s32 D_003E0240[];

// Return the address of D_003E0240 plus arg0 times 0x60.
void *func_0054A998(s32 arg0) {
    return (arg0 * 0x60) + (char *)D_003E0240;
}
