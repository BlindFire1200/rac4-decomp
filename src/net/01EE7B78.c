#include "common.h"

/* Returns 1 when the word at 0x3A30 is set and the word at 0x5B10 is clear, otherwise 0. */
s32 func_01EE7B78(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x3A30) != 0 && *(s32 *)((u8 *)arg0 + 0x5B10) == 0) {
        return 1;
    }
    return 0;
}
