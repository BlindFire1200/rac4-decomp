#include "common.h"

// Clears the halfword at +0x10 and copies the word at +8 to +0xC when arg0 is non-null.
void func_01ED8F58(u8 *arg0) {
    if (arg0 != NULL) {
        *(s16 *)(arg0 + 0x10) = 0;
        *(s32 *)(arg0 + 0xC) = *(s32 *)(arg0 + 8);
    }
}
