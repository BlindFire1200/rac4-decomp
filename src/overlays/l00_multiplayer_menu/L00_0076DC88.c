#include "common.h"

s32 func_0011A518(void *, s32, s32);
s32 func_0011AB04(s32);
void func_L00_005C1758(void *, s32, s32);
void func_L00_0076E478(void *, s32);

// Initialize a text record: clear the 0xAC-byte buffer at +0x20, store the text
// in it (func_L00_005C1758 with its length), record the five words at +0xBC,
// +0x14, +0x18, +0xCC and +0xD0, then run func_L00_0076E478 with 5.
void func_L00_0076DC88(void *object, s32 text, s32 value_bc, s32 value_14, s32 value_18, s32 value_cc, s32 value_d0) {
    void *buffer = (u8 *)object + 0x20;
    func_0011A518(buffer, 0, 0xAC);
    func_L00_005C1758(buffer, text, func_0011AB04(text));
    *(s32 *)((u8 *)object + 0xBC) = value_bc;
    *(s32 *)((u8 *)object + 0x14) = value_14;
    *(s32 *)((u8 *)object + 0x18) = value_18;
    *(s32 *)((u8 *)object + 0xCC) = value_cc;
    *(s32 *)((u8 *)object + 0xD0) = value_d0;
    func_L00_0076E478(object, 5);
}
