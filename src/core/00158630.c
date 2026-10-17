#include "common.h"

extern void *memcpy(void *, const void *, u32);
extern void func_00158C60(s32, s32, void *, s32, s32);
void func_00158630(s32 arg0, const void *arg1) {
    u8 scratch[0x1C];
    *(s32 *)scratch = arg0;
    if (arg1 != 0) {
        memcpy(scratch + 4, arg1, 0x18);
    } else {
        *(s32 *)(scratch + 4) = -1;
    }
    func_00158C60(0x60, 0x1C, scratch, 0, 0);
}
