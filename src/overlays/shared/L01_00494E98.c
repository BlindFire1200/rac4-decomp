#include "common.h"
extern s32 func_00495A60(void);
extern s32 func_L00_005FC990(void *);
extern void func_004959C8(void);
extern void func_L01_00573C00(void *, void *, s32);
void func_L01_00494E98(u8 *object) {
    u8 *state;
    if (func_00495A60() != 0) return;
    state = *(u8 **)(object + 0xAC);
    func_L00_005FC990(object);
    if (state[0x482] == 0) func_L01_00573C00(func_004959C8, object, 0);
}
