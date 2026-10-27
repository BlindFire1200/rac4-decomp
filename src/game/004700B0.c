#include "common.h"

// Packs three byte arguments into a word at offset 0x3C of arg0.
void func_004700B0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)((u8 *)arg0 + 0x3C) = arg1 | (arg2 << 8) | (arg3 << 0x10);
}
