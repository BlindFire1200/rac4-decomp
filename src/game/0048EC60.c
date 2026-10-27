#include "common.h"

// Returns the low halfword of the word at offset 0xC.
s32 func_0048EC60(void *arg0) {
    return *(volatile s32 *)((u8 *)arg0 + 0xC) & 0xFFFF;
}
