/* Not matching yet: BYTES 10/100 (tools/try_func.py func_004AE8A8 --diff). Not part of the build. */
#include "common.h"
s32 func_00505B20(void);
void *func_00510BE8(s32);
s32 func_004AE8A8(s32 arg0) {
    u8 *state = *(u8 **)((u8 *)func_00510BE8(func_00505B20()) + 0x2F00);
    s32 result = 0;
    if (~*(s32 *)(state + 0x1BC) & *(s32 *)(state + 0x1B0) & arg0) {
        result = ((~arg0 & (*(s32 *)(state + 0x1B4) & 0xF000)) == 0);
    }
    return result;
}
