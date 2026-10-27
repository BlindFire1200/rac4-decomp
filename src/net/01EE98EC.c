#include "common.h"

/* Stores arg2 at offset 8 of entry arg1 (4-byte stride) in the buffer whose pointer is at 0x635C. */
void func_01EE98EC(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(*(u8 **)((u8 *)arg0 + 0x635C) + (arg1 << 2) + 8) = arg2;
}
