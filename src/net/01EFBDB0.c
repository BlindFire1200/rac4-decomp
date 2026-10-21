/* cflags: -G0 */
#include "common.h"

extern s32 func_01EFBDCC(u8 *, u8 *);

s32 func_01EFBDB0(u8 *a0) {
    return func_01EFBDCC(a0, a0 + 0xB8);
}
