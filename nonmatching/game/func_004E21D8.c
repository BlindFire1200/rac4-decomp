/* Not matching yet: BYTES 7/160 (tools/try_func.py func_004E21D8 --diff). Not part of the build. */
#include "common.h"
extern s32 func_004DFEC8(s32);
extern s32 func_004E1C00(s32, s32, s32, s32, s32);
extern s32 D_0021EDE0;
extern u8 D_1D2200[];
extern s32 D_22130C;
s32 func_004E21D8(u32 arg0, s32 arg1, s32 arg2) {
    s32 result;
    if (arg0 == 0xFFFFFFFFU) return -1;
    if (D_22130C == 0) return -1;
    if (arg0 >= D_0021EDE0) return -1;
    result = func_004E1C00(D_22130C + (arg0 << 5), arg1, arg2, 0, 0x400);
    if (result >= 0) {
        u8 *record = D_1D2200 + (result << 7);
        *(s16 *)(record + 0x2CA) = arg0;
        *(s32 *)(record + 0x2DC) = arg2;
    }
    return func_004DFEC8(result);
}
