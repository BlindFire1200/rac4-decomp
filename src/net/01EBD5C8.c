#include "common.h"

// Read the big-endian halfword at offset 2 of the record behind a0.
u16 func_01EBD5C8(u8 *a0) {
    u8 buf[2];

    buf[0] = a0[2];
    buf[1] = a0[3];
    return *(u16 *)buf;
}
