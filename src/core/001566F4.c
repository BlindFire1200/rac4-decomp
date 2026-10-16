#include "common.h"

// Return the word at +0x78.
s32 func_001566F4(void *object) {
    return *(s32 *)((u8 *)object + 120);
}
