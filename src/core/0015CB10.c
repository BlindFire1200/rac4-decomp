/* cflags: -G0 */
#include "common.h"

extern u8 D_00172160[];

void func_0015CB10(s32 a, s32 b) {
    u8 *g = D_00172160;

    *(s32 *)(g + 0xBC) = a;
    *(s32 *)(g + 0xC0) = b;
}
