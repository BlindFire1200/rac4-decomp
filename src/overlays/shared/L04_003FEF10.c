#include "common.h"

extern s32 func_L00_005A00F8(void);
extern s32 func_L00_0066CC08(void *, s32);
extern void func_L00_0066CD78(s32);
extern s32 func_L00_0066D220(s32, s32, void *);
extern s32 D_0021DDB4;

/* Refresh, start or stop the handle at +0x84 of the object's state block depending on its mode byte. */
void func_L04_003FEF10(u8 *object) {
    u8 *state = *(u8 **)(object + 0xAC);
    if (*(s32 *)(state + 0x84) != -1 && func_L00_0066CC08(object, *(s16 *)(state + 0x84)) == 0) {
        *(s32 *)(state + 0x84) = -1;
    }
    if (object[0x20] == 2 || object[0x20] == 4) {
        if (*(s32 *)(state + 0x84) == -1) {
            if (func_L00_005A00F8() != 0 || D_0021DDB4 == 1) {
                *(s32 *)(state + 0x84) = func_L00_0066D220(0, 0x114, object);
            } else {
                *(s32 *)(state + 0x84) = func_L00_0066D220(0, 4, object);
            }
        }
    } else if (*(s32 *)(state + 0x84) != -1) {
        func_L00_0066CD78(*(s32 *)(state + 0x84));
        *(s32 *)(state + 0x84) = -1;
    }
}
