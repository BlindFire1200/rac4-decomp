#include "common.h"

// Store the first argument in the word at +0x90 of the second.
void func_00511310(s32 arg0, void *arg1) {
    *(s32 *)((u8 *)arg1 + 0x90) = arg0;
}
