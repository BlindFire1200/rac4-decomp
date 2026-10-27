/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B1750 (NTSC-U func_003B15B0, commit 403f30a9) */
#include "common.h"

typedef struct { s32 a, b, c; } Type1;
s32 func_004F0A08(u8 *p, u8 **out) {
    Type1 *r = (Type1 *)(p + 0x50000);
    if (r->b != 0) *out = p + (r->a - r->b + r->c) % r->c;
    return r->b;
}
