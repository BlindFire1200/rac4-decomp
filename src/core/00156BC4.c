#include "common.h"

// Return the word at +0xD4.
s32 func_00156BC4(void *object) {
    return *(s32 *)((u8 *)object + 0xD4);
}
