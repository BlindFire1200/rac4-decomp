#include "common.h"

/* Extracts a 6-bit field from the first word of the object and offsets it by 12. */
s32 func_L00_006EC440(u32 *arg0) {
    return ((*arg0 >> 4) & 0x3F) + 0xC;
}
