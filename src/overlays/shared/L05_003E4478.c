#include "common.h"

extern s32 func_L00_0066CC08(void *, s32);
extern s32 func_L00_0066D220(s32, s32, void *);

// Keep the handle at +0x6E valid: on the first run set state 1 and clear the
// handle; reset a handle that func_L00_0066CC08 rejects; when none remains
// create one with func_L00_0066D220 (0, 4, object).
void func_L05_003E4478(void *object) {
    if (*(u8 *)(object + 0x20) == 0) {
        *(u8 *)(object + 0x20) = 1;
        *(s16 *)(object + 0x6E) = -1;
    }
    if (*(s16 *)(object + 0x6E) != -1) {
        if (func_L00_0066CC08(object, *(s16 *)(object + 0x6E)) == 0) *(s16 *)(object + 0x6E) = -1;
        if (*(s16 *)(object + 0x6E) != -1) return;
    }
    *(s16 *)(object + 0x6E) = func_L00_0066D220(0, 4, object);
}
