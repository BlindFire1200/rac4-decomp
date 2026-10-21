#include "common.h"

extern s32 func_L00_0066CC08(void *, s32);
extern void func_L00_0066CD78(s32);
extern s32 func_L00_0066D2C8(s32, s32, void *, s32);

void func_L04_00486A10(u8 *object) {
    u8 *state = *(u8 **)(object + 0xAC);
    if (*(s32 *)(state + 0x98) != -1 && func_L00_0066CC08(object, *(s16 *)(state + 0x98)) == 0) {
        *(s32 *)(state + 0x98) = -1;
    }
    if (object[0x20] == 2 || object[0x20] == 4) {
        if (*(s32 *)(state + 0x98) == -1) {
            *(s32 *)(state + 0x98) = func_L00_0066D2C8(0, 4, object, 0x2426);
        }
    } else if (*(s32 *)(state + 0x98) != -1) {
        func_L00_0066CD78(*(s32 *)(state + 0x98));
        *(s32 *)(state + 0x98) = -1;
    }
}
