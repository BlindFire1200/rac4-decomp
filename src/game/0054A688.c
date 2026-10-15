#include "common.h"

extern void func_00549F08(s32, s32, s32, s32);
extern s32 func_0054A810(void);

// Validate index and conditional processing
s32 func_0054A688(s32 arg0, s32 arg1, s32 arg2) {
    s32 idx;
    s32 offset;

    idx = func_0054A810();

    if ((u32)(idx - 1) >= 6U) {
        return 0;
    }

    offset = arg1 * 0x44;
    *(u8 *)((u32)arg0 + offset + 0xA40) = 0;

    if (arg2 != 0) {
        func_00549F08(arg0, idx, -1, 0);
    }

    return 1;
}
