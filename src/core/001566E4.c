#include "common.h"

// Return the word at +0x34.
s32 func_001566E4(void *object) {
    return *(s32 *)((u8 *)object + 52);
}
