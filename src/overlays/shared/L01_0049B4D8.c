#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern void *func_L00_005DD000(s32, s32);
extern f32 func_L00_005E61D0(void);

// Create the object of type 0x26E5 (0x20 bytes), store the 128-bit position at
// +0x10 and kind at +0xB8, then fill six floats of its +0xAC block (+0x00, +4, +8,
// +0x10, +0x14, +0x18) from func_L00_005E61D0. Returns the object or null.
void *func_L01_0049B4D8(s32 kind, u128 position) {
    u8 *object;
    u8 *values;

    object = func_L00_005DD000(0x26E5, 0x20);
    if (object != 0) {
        *(u128 *)(object + 0x10) = position;
        *(s32 *)(object + 0xB8) = kind;
        values = *(u8 **)(object + 0xAC);
        object[0x30] = 0xFF;
        *(u16 *)(object + 0x32) = 0xFF;
        *(f32 *)(values + 0x00) = func_L00_005E61D0();
        *(f32 *)(values + 0x04) = func_L00_005E61D0();
        *(f32 *)(values + 0x08) = func_L00_005E61D0();
        *(f32 *)(values + 0x10) = func_L00_005E61D0();
        *(f32 *)(values + 0x14) = func_L00_005E61D0();
        *(f32 *)(values + 0x18) = func_L00_005E61D0();
    }
    return object;
}
