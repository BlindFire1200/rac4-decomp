/* cflags: -G0 */
#include "common.h"

extern s32 func_00129B58(s32, void *, s32, s32, s32, s32);

s32 func_0012A428(s32 a, s32 b, s32 c, void *d) {
    return func_00129B58(0x80000008, d, 0x40, 0, 0, 0) ? 0 : 0x800;
}
