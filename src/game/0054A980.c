#include "common.h"

extern s32 D_003DFF68[];

// Return the address of D_003DFF68 plus arg0 times 0x38.
void *func_0054A980(s32 arg0) {
    return (arg0 * 0x38) + (char *)D_003DFF68;
}
