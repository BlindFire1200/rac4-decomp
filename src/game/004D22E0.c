#include "common.h"

extern void func_0049D398(s32, s32, s32);
extern void func_0049D238(s32, s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_0049C248(s32, s32);
extern volatile s32 D_2219E0;
extern s32 D_31B6B0[];

// Process and update state
void func_004D22E0(s32 arg0) {
    func_0049D398(arg0, 1, D_2219E0);
    func_0049D238(arg0, 1);
    func_0049C4B0(arg0, 3, D_2219E0, 0);
    func_0049C248(arg0, 3);
    D_31B6B0[(u32)arg0 * 0x1C / 4] = 2;
}
