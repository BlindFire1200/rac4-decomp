#include "common.h"

// Return the word at +0x13C.
s32 func_00156BCC(void *object) {
    return *(s32 *)((u8 *)object + 0x13C);
}
