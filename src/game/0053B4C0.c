#include "common.h"

extern s32 func_0048F808(s32);
extern void func_004E1F90(s32, s32, s32);
extern void func_004E2038(s32, s32, s32, s32);
extern s32 func_00547EC8(s32, s32);
extern s32 D_0021EDD4;

// For the object: when func_00547EC8 accepts its +0x26E4 and +0x2318 words,
// call the method at +0x3C of its +0x14 table with (0x91, 1, 0, 1). Otherwise,
// unless the +0x2FC8 flag is already set, and when func_0048F808 of its +0x2F00
// value overlaps the +0x2300 mask, start a notice (func_004E2038 in mode 1 of
// D_0021EDD4, else func_004E1F90) and set the flag.
void func_0053B4C0(void *param) {
    u8 *object = param;
    s32 value;
    s32 (*callback)(void *, s32, s32, s32, s32);

    if (func_00547EC8(*(s32 *)(object + 0x26E4), *(s32 *)(object + 0x2318)) != 0) {
        callback = *(void **)(*(s32 *)(object + 0x14) + 0x3C);
        callback(param, 0x91, 1, 0, 1);
        return;
    }
    if (object[0x2FC8] != 0) {
        return;
    }
    value = func_0048F808(*(s32 *)(object + 0x2F00)) & *(s32 *)(object + 0x2300);
    if (value == 0) {
        return;
    }
    if (D_0021EDD4 == 1) {
        func_004E2038(0x39, 0, *(s32 *)(object + 0x2EF0), 0x251C);
    } else {
        func_004E1F90(0x28, 0, *(s32 *)(object + 0x2EF0));
    }
    object[0x2FC8] = 1;
}
