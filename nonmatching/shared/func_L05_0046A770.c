/* Not matching yet: BYTES 1/60 (tools/try_func.py func_L05_0046A770 --diff). Not part of the build. */
#include "common.h"
typedef s32 v4i __attribute__((vector_size(16)));
void func_L05_004675C0(s32, v4i, u8, s32, s32);
void func_L05_0046A770(u8 *a0, s32 a1, s32 a2) {
    u8 *state = *(u8 **)(a0 + 0x18);
    u8 *record = *(u8 **)(state + 0x2EF4);
    if (record != 0) {
        func_L05_004675C0(*(s32 *)(record + 0x2B0), *(v4i *)(a0 + 0x40), a0[7], a2, *(s32 *)(a0 + 0x30));
    }
}
