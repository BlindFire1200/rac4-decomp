#include "common.h"

/* Decodes the 6 bit field at offset 4 of the last argument and returns it
   biased by 0xC. */
s32 func_L00_00702D78(s32 arg0, s32 arg1, s32 arg2, u32 *arg3) {
    return ((*arg3 >> 4) & 0x3F) + 0xC;
}
