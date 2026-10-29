#include "common.h"

extern u8 D_003DD520[];

/* Returns the address of entry arg0 in the 0x18-byte table at D_003DD520. */
void *func_004FBF78(s32 arg0) {
    return D_003DD520 + arg0 * 0x18;
}
