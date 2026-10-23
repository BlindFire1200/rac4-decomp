/* cflags: -mcheck-zero-division */
#include "common.h"

// Advances a counter modulo a field and returns an entry from a table.
s32 func_0012A020(u8 *arg0) {
    s32 v = *(s32 *)(arg0 + 0x24) % *(s32 *)(arg0 + 0x18);
    s32 next = *(s32 *)(arg0 + 0x14) + (v << 6);

    *(s32 *)(arg0 + 0x24) = v + 1;
    return next;
}
