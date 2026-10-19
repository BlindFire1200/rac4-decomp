#include "common.h"

extern s32 func_L01_0048FFF0(void);
extern s32 func_L01_00490038(void *);
extern void func_L01_00490168(void *);
extern void func_L01_004903B8(void *);
extern void func_L01_00591BD8(void *, s32, s32);

// Run the validation and choose whether to reset or start the follow-up action.
void func_L01_0048FF68(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);

    if (func_L01_0048FFF0() != 0) return;
    if (*(u8 *)((u8 *)object + 0x20) == 2) return;
    if (func_L01_00490038(object) == 0) return;
    func_L01_00490168(object);
    if (*(s32 *)(linked + 0x44) == 0) {
        func_L01_00591BD8(object, 2, -1);
        return;
    }
    func_L01_004903B8(object);
}
