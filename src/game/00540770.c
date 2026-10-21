#include "common.h"

extern s32 D_00172170[];
extern s32 func_00540650(void *, s32, s32);
extern void func_00511520(void *);

// When func_00540650 accepts the value and parameter (both truncated to bytes),
// store the value at +0x50, run func_00511520 if the +0x34 word equals
// D_00172170[0], and reset the +0x34 and +4 words to -1.
void func_00540770(void *handle, s32 value_in, s32 param) {
    u8 *object = handle;
    s32 value = value_in & 0xFF;
    if (func_00540650(handle, value, param & 0xFF) != 0) {
        *(u8 *)(object + 0x50) = value;
        if (*(s32 *)(object + 0x34) == D_00172170[0]) {
            func_00511520(handle);
        }
        *(s32 *)(object + 0x34) = -1;
        *(s32 *)(object + 4) = -1;
    }
}
