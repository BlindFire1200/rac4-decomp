/* cflags: -G0 */
#include "common.h"

extern u8 D_00172160[];

void func_0015BC58(u8 *o) {
    D_00172160[0x610] = 0;
    *(s32 *)(D_00172160 + 0x614) = *(s32 *)(o + 0x18);
}
