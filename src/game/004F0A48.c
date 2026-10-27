/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_003B1790 (NTSC-U func_003B15F0, commit 403f30a9) */
#include "common.h"

typedef struct { u8 pad[0x50004]; s32 x; } Type1;
s32 func_004F0A48(Type1 *a, s32 n) {
    s32 m = a->x;
    if (n < m) m = n;
    a->x -= m;
    return m;
}
