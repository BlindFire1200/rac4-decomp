#include "common.h"
s32 func_L05_00466D18(void);
s32 D_00221770 = 0;
void func_L01_006B1D68(s32, void *, s32, void *);
void func_L05_00465158(u8 *object) {
    u8 *base = *(u8 **)(object + 0xAC);
    s32 value = *(s32 *)(base + 0x170);
    func_L05_00466D18();
    func_L01_006B1D68(value, object, 4, &D_00221770);
}
