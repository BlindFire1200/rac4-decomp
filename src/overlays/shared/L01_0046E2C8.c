#include "common.h"
extern void func_L00_006A99F8(void *, void *);
extern s32 func_L00_006FF628(s32, s32);
extern void func_L00_007011A8(void *, s32, s32);
extern void func_L01_0046EBF0(void);
extern void func_L01_00591BD8(void *, s32, s32);
void func_L01_0046E2C8(u8 *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    func_L00_006A99F8(object, linked + 0x40);
    *(s32 *)(linked + 0x38) = -1;
    linked[0x4C] = 0;
    linked[0x4D] = 0;
    linked[0x4E] = 0;
    func_L00_007011A8(object, 9, func_L00_006FF628(*(s32 *)(*(u8 **)(linked + 0x40) + 0x26E4), 9));
    func_L01_0046EBF0();
    func_L01_00591BD8(object, 1, -1);
}
