#include "common.h"

/* Returns the s16 field at offset 0xA30 of the 0x44-byte record arg1 inside the table at arg0. */
s16 func_00547D58(s32 arg0, s32 arg1) {
    return *(s16 *)(arg0 + arg1 * 0x44 + 0xA30);
}
