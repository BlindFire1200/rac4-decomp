#include "common.h"

extern u8 D_003E54B0[];

// Returns the address of entry arg0 in the 0x38-byte table at D_003E54B0.
void *func_00549B00(s32 arg0) {
    return D_003E54B0 + arg0 * 0x38;
}
