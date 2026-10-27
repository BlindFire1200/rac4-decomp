/* cflags: -G0 */
#include "common.h"

extern u8 D_00172160[];

void func_0015F3B8(s32 v) {
    u8 *g = D_00172160;
    s32 i = *(s32 *)(g + 0x15EC);
    s32 *arr = (s32 *)(g + 0x15AC);

    arr[i] = v;
    i++;
    *(s32 *)(g + 0x15EC) = i;
    if (i >= 16) {
        *(s32 *)(g + 0x15EC) = 0;
    }
}
