#include "common.h"

extern void func_0011EFB0(s32 arg0);
extern void func_00120378(s32 arg0);

s32 D_0021DFC8 = 0;

// Fill a 0x30-byte state block through the helper and publish its +0x1C word.
void func_0015DB48(s32 arg0) {
    s32 buf[0xC];
    func_0011EFB0(arg0);
    func_00120378((s32)buf);
    D_0021DFC8 = buf[7];
}
