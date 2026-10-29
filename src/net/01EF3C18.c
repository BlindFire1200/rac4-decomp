#include "common.h"

/* Stores a flag at +0x10: 0 when the word at +0xA8 is set, else whether arg1 is non-zero. */
void func_01EF3C18(void *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x10) = (*(s32 *)((u8 *)arg0 + 0xA8) != 0) ? 0 : (arg1 != 0);
}
