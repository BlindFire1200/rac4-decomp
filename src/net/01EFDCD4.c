#include "common.h"

// Stores arg1 at offset 0xB8 when the word at offset 0x10 is nonzero.
void func_01EFDCD4(void *arg0, s32 arg1) {
    if (*(s32 *)((u8 *)arg0 + 0x10) != 0) {
        *(s32 *)((u8 *)arg0 + 0xB8) = arg1;
    }
}
