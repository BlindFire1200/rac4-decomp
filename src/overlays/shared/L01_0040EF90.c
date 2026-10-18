#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern void func_L00_00584BA8(void *, void *);
extern s32 func_L00_005F47F8(s32);
extern void func_L01_0055B420(void *, s32, s32);
extern void func_L01_0055B8F8(u128, void *, s32, s32, f32, f32);
extern u8 D_00394720[];

// Unless the object is missing, in state 0xFE or 0xFD, or has no +0xAC block:
// fetch a scratch vector, choose a value (0x103080, or func_L00_005F47F8(0)
// when the +0x4D byte is 2) and pass them with the D_00394720 entry for the
// +0x6C index to func_L01_0055B8F8.
void func_L01_0040EF90(u8 *object) {
    u128 scratch;
    u8 *state;
    s32 value;
    if (object == 0) return;
    if (object[0x20] == 0xFE) return;
    if (object[0x20] == 0xFD) return;
    state = *(u8 **)(object + 0xAC);
    if (state == 0) return;
    func_L00_00584BA8(object, &scratch);
    value = 0x103080;
    if (state[0x4D] == 2) value = func_L00_005F47F8(0);
    func_L01_0055B420(&scratch, value, 0);
    func_L01_0055B8F8(scratch, D_00394720 + (*(s32 *)(state + 0x6C) << 6), value, 4, 0.0f, 0.25f);
}
