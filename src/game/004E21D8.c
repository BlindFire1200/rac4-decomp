#include "common.h"

extern s32 func_004DFEC8(s32);
extern s32 func_004E1C00(s32, s32, s32, s32, s32);
extern s32 D_0021EDE0;
extern u8 D_1D2200[];
extern s32 D_22130C;

// Start the entry for index (D_22130C table, 0x20 bytes each; -1 when the index
// is invalid, the table is missing or the index is past D_0021EDE0) with
// func_004E1C00; when that gives a slot, store param_b at +0x2DC and the index
// at +0x2CA of its 0x80-byte record. Returns func_004DFEC8 of the slot.
s32 func_004E21D8(u32 index, s32 param_a, s32 param_b) {
    s32 result;
    if (index == 0xFFFFFFFFU) return -1;
    if (D_22130C == 0) return -1;
    if ((s32)index >= D_0021EDE0) return -1;
    result = func_004E1C00(D_22130C + (index << 5), param_a, param_b, 0, 0x400);
    if (result >= 0) {
        u8 *record = D_1D2200 + (result << 7);
        *(s32 *)(record + 0x2DC) = param_b;
        *(s16 *)(record + 0x2CA) = index;
    }
    return func_004DFEC8(result);
}
