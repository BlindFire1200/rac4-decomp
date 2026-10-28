/* cflags: -G0 */
#include "common.h"

extern u8 D_00172160[];

void func_0015C6B0(u8 *o) {
    u8 *g = D_00172160;

    s32 v = *(s32 *)(o + 4);

    g[0x250] = 0;
    *(s32 *)(g + 0x254) = v;
    if (*(s32 *)(g + 0x10) == *(s32 *)(o + 4)) {
        g[0x250] = 1;
    }
    g[0x251] = 1;
}
