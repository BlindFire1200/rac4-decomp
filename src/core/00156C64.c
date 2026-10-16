#include "common.h"

// Return the word at +0x2B8.
s32 func_00156C64(void *object) {
    return *(s32 *)((u8 *)object + 0x2B8);
}
