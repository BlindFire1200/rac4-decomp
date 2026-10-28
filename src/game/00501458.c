/* cflags: -G0 */
/* C adapted from rac3-decomp func_003E7358 (NTSC-U func_003E7210, commit 403f30a9) */
#include "common.h"

extern void func_00501498(void *);
s32 func_00501458(s32 *p, s32 a, s32 b, s32 c, s32 d, s32 e) {
    p[1] = a;
    p[2] = b;
    p[3] = c;
    p[4] = d;
    p[5] = e;
    func_00501498(p);
    return (s32)p;
}
