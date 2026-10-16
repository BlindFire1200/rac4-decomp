#include "common.h"

// Return the word at +0xC.
s32 func_001566C4(void *object) {
    return *(s32 *)((u8 *)object + 12);
}
