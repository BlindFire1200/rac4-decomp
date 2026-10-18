/* Not matching yet: BYTES 1/76 (tools/try_func.py func_L01_0048EC90 --diff). Not part of the build. */
#include "common.h"
void func_L00_0066D220(s32, s32, s32);
void func_L01_0048EC90(s32 a0, u8 *a1) {
    u8 state = *(u8 *)(a1 + 0x180);
    u8 *entry;
    s32 value;
    if (state != 0 && state != 3) return;
    *(s32 *)(a1 + 0x180) = 1;
    entry = *(u8 **)(a1 + 0x174);
    value = *(s32 *)(entry + 0x44);
    if (value < 0) return;
    func_L00_0066D220(value, 0, *(s32 *)(a1 + 0x170));
}
