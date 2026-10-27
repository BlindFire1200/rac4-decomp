#include "common.h"

extern u8 D_003E56A8[];

// Returns the address of entry arg0 in the 0x28-byte table at D_003E56A8.
void *func_00549B18(s32 arg0) {
    return D_003E56A8 + arg0 * 0x28;
}
