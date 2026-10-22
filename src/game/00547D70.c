#include "common.h"

extern s32 func_00547D58(void);

/* Returns the next free slot index (current + 1) when that is below 10, otherwise the current slot index. */
s32 func_00547D70(void) {
    s32 temp_v0 = func_00547D58();
    s32 temp_a0 = temp_v0 + 1;
    s32 temp_v1 = (temp_a0 < 0xA);
    return temp_v1 ? temp_a0 : temp_v0;
}
