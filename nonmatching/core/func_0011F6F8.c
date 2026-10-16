/* Not matching yet: BYTES 22/132 (tools/try_func.py func_0011F6F8 --diff). Not part of the build. */
#include "common.h"
s32 func_0011F6F8(s32 arg0) {
    s32 value = arg0;
    s32 shift = 0;
    if ((value & 0xFFFF0000) == 0) { shift = 0x10; value <<= 16; }
    if ((value & 0xFF000000) == 0) { shift += 8; value <<= 8; }
    if ((value & 0xF0000000) == 0) { shift += 4; value <<= 4; }
    if ((value & 0xC0000000) == 0) { shift += 2; value <<= 2; }
    if (value < 0) return shift;
    shift += 1;
    return ((value & 0x40000000) != 0) ? shift : 0x20;
}
