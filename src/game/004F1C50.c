#include "common.h"

// Clear the word at +0xA8.
void func_004F1C50(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0xA8) = 0;
}
