#include "common.h"

extern s32 func_004696F0(void *);
extern s32 func_004697A0(void *);
extern s32 func_005BCA78(u16);
extern s32 func_L01_00469778(void);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_005D4C40(void *, void *, void *, s32, f32, s32);
extern s32 D_00297680[];

// Check the object state and initialize the selected action when its flags allow it.
void func_L01_00468DA8(void *object) {
    u64 scratch[2];
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    s32 value;
    s32 index;

    if (*(u8 *)((u8 *)object + 0x69) == 5) return;
    if (func_L01_00469778() != 0) return;
    if (func_004697A0(object) != 0) return;
    value = *(s32 *)(linked + 0x3D0);
    if ((value & 4) != 0) {
        if (func_004696F0(object) != 0) func_L01_00591BD8(object, 0xB, 5);
        return;
    }
    if ((value & 1) == 0) return;
    if (func_004696F0(object) == 0) return;
    index = func_005BCA78(*(u16 *)(linked + 0x3DC));
    value = D_00297680[index];
    *(s32 *)(linked + 0x4F0) = value;
    func_L01_005D4C40(scratch, (u8 *)object + 0x10, linked + 0x3A0, value, 0.0f, 0);
    func_L01_00591BD8(object, 0xE, 5);
}
