#include "common.h"

// Set the word at +0xA8 of the object to one.
void func_004F1C90(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0xA8) = 1;
}
