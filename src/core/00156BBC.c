#include "common.h"

// Return the word at +0xB4.
s32 func_00156BBC(void *object) {
    return *(s32 *)((u8 *)object + 0xB4);
}
