#include "common.h"

extern s32 func_00547D58(void);

/* Calls func_00547D58 and returns its value decremented by one when that value is positive. */
s32 func_00547D98(void) {
    s32 temp_v0 = func_00547D58();
    s32 temp_a0 = temp_v0 - 1;
    s32 limit = -1;
    return (limit < temp_a0) ? temp_a0 : temp_v0;
}
