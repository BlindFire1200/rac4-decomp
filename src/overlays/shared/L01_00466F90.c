#include "common.h"

typedef unsigned int u128 __attribute__((mode(TI)));
void func_L01_00466BF8(void *, void *, u128);
void func_L01_00466838(void);
void func_L00_005B0038(void *, void (*)(void), void *);
extern s32 D_00222A9C;
void func_L01_00466F90(void *arg0, u128 arg1) {
    void *temp_v0;
    temp_v0 = *(void **)((u8 *)arg0 + 0xAC);
    func_L01_00466BF8(arg0, (u8 *)temp_v0 + 0x60, arg1);
    func_L00_005B0038(&D_00222A9C, func_L01_00466838, arg0);
}
