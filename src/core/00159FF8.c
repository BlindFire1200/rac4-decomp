/* cflags: -G0 */
#include "common.h"

struct S {
    u8 pad[0x2B4];
    s32 f2B4;
};
extern struct S D_00172160;

s32 func_00159FF8(s32 a0) {
    struct S *p = &D_00172160;
    s32 old = p->f2B4;
    p->f2B4 = a0;
    return old;
}
