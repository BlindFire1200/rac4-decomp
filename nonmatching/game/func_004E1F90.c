/* Not matching yet: BYTES 10/168 (tools/try_func.py func_004E1F90 --diff). Not part of the build. */
#include "common.h"
extern s32 func_004DFEC8(s32);
extern s32 func_004E1C00(s32, s32, void *, s32, s32);
extern u8 D_1D2200[];
s32 func_004E1F90(s32 arg0, s32 arg1, void *arg2) {
    u8 *header;
    s32 result = -1;
    s32 limit;
    s32 value;
    if (arg2 == 0) return -1;
    header = *(u8 **)((u8 *)arg2 + 0x24);
    if (header == 0) return -1;
    value = *(s32 *)(header + 0x28);
    if (value == 0) return -1;
    limit = header[0xD];
    if (arg0 >= limit) return -1;
    result = func_004E1C00(value + (arg0 << 5), arg1, arg2, 0, 0x400);
    if (result >= 0) {
        u8 *record = D_1D2200 + (result << 7);
        *(s32 *)(record + 0x308) = -1;
        *(void **)(record + 0x2DC) = arg2;
        *(s16 *)(record + 0x2CA) = arg0;
    }
    return func_004DFEC8(result);
}
