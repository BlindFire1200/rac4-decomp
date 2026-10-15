#include "common.h"

// Extracts and transforms bits from word
s32 func_L00_00702D78(void *unused0, void *unused1, void *unused2, u32 *arg3) {
    return (((*arg3) >> 4) & 0x3F) + 0xC;
}
