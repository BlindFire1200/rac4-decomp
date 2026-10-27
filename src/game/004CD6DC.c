#include "common.h"

/* Clears the halfword at +0x74 of arg0 and stores 1 << arg2 at +0x74 of arg1, when arg2 is below 3. */
void func_004CD6DC(void *arg0, void *arg1, u32 arg2) {
    if (arg2 < 3) {
        *(s16 *)((u8 *)arg0 + 0x74) = 0;
        *(s16 *)((u8 *)arg1 + 0x74) = (s16)(1 << arg2);
    }
}
