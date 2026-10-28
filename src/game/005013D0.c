/* cflags: -G0 */
/* C adapted from rac3-decomp func_003E72D0 (NTSC-U func_003E7188, commit 403f30a9) */
#include "common.h"

typedef struct { u32 i, max, f8; s32 c; s32 (*fn)(s32, u32); } Type1;
s32 func_005013D0(Type1 *s, s32 n) {
    s32 r = 0;
    u32 x, v;
    while (n > 0) {
        n--;
        r |= (s->fn(s->c, s->i) != 0);
        x = s->i + 1;
        s->i = x;
        v = s->max < x ? s->f8 : x;
        s->i = v;
    }
    return r;
}
