#include "common.h"

extern s32 func_0048F808(s32);
extern void func_004E1F90(s32, s32, s32);
extern void func_004E2038(s32, s32, s32, s32);
extern s32 func_00547EC8(s32, s32);
extern s32 D_0021EDD4;

void func_0053B4C0(void *arg0) {
    u8 *obj = arg0;
    s32 value;
    s32 (*callback)(void *, s32, s32, s32, s32);

    if (func_00547EC8(*(s32 *)(obj + 0x26E4), *(s32 *)(obj + 0x2318)) != 0) {
        callback = *(void **)(*(s32 *)(obj + 0x14) + 0x3C);
        callback(arg0, 0x91, 1, 0, 1);
        return;
    }
    if (obj[0x2FC8] != 0) {
        return;
    }
    value = func_0048F808(*(s32 *)(obj + 0x2F00)) & *(s32 *)(obj + 0x2300);
    if (value == 0) {
        return;
    }
    if (D_0021EDD4 == 1) {
        func_004E2038(0x39, 0, *(s32 *)(obj + 0x2EF0), 0x251C);
    } else {
        func_004E1F90(0x28, 0, *(s32 *)(obj + 0x2EF0));
    }
    obj[0x2FC8] = 1;
}
