/* cflags: -G0 */
#include "common.h"

struct S {
    u8 pad[0x2B8];
    s32 f2B8;
};
extern struct S D_00172160;

s32 func_0015A010(s32 a0) {
    struct S *p = &D_00172160;
    s32 old = p->f2B8;
    p->f2B8 = a0;
    return old;
}
