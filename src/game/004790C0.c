#include "common.h"

/* Initialise a slot from arg0 the first time it is used. */
void func_004790C0(s32 arg0, u8 *arg1) {
    if (*(s32 *)(arg1 + 0x14C) == 0) {
        *(s32 *)(arg1 + 0x144) = arg0;
        *(s32 *)(arg1 + 0x14C) = 1;
        *(s16 *)(arg1 + 0x142) = 0;
        *(s32 *)(arg1 + 0x148) = 0;
        *(s16 *)(arg1 + 0x140) = 0;
    }
}
