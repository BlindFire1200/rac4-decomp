#include "common.h"

// Clear the 16-bit field at 0x74 of arg0; if arg2 < 3, set arg1's field to 1 << arg2.
void func_004D5BD0(void *arg0, void *arg1, u32 arg2) {
    if (arg2 < 3U) {
        *(s16 *)((u8 *)arg0 + 0x74) = 0;
        *(s16 *)((u8 *)arg1 + 0x74) = (s16)(1 << arg2);
    }
}
