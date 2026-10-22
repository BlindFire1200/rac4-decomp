/* cflags: -mcheck-zero-division */
#include "common.h"

// Maps a byte through a rounding step of six tenths.
s32 func_00155730(u32 arg0) {
    u32 v = arg0 & 0xFF;

    return (v / 10 * 6 + v) & 0xFF;
}
