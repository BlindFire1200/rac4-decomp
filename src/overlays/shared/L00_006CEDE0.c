#include "common.h"

extern s32 func_L00_0061D4E8(void *, s16, void *, void *, f32);

void func_L00_006CEDE0(u8 *arg0) {
    u8 *data = arg0 + 0xA0;
    if (func_L00_0061D4E8(arg0, *(s16 *)(arg0 + 0x2E18), data, data,
                          *(f32 *)(arg0 + 0x204)) != 0) {
        *(s16 *)(arg0 + 0x3D4) = 4;
    }
}
