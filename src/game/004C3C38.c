#include "common.h"
extern s32 func_004978C0(s32);
extern void func_00497980(s32);
extern void func_0049C200(s32, s32);
extern void func_0049C328(s32, s32, s32);
extern void func_004C3A08(void);
extern s32 func_00505B20(void);
extern void *func_00510BE8(s32);
extern s32 func_0054A7E0(s32, s32);
extern u8 D_30B7F8[];
void func_004C3C38(void) {
    s32 temp_v0 = func_00505B20();
    u8 *temp_s1 = D_30B7F8 + temp_v0 * 0x74;
    void *temp_s0 = func_00510BE8(temp_v0);
    *(s32 *)(temp_s1 + 0x14) = func_0054A7E0(*(s32 *)((u8 *)temp_s0 + 0x26E4), func_004978C0(*(s32 *)(temp_s1 + 0xC)));
    func_00497980(0x13);
    func_004C3A08();
    func_0049C328(temp_v0, 2, 1);
    func_0049C200(temp_v0, 2);
    *(s32 *)temp_s1 = 3;
}
