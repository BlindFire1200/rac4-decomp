#include "common.h"
extern void func_00739E80(void *, s32, s32);
extern s32 func_L00_005C9F50(s32);
extern s32 func_L00_00719C68(s32, s32, void *, s32, s32, void *, s32);
extern s32 D_00220D14;
extern void func_L00_00719EE8(void);
void func_L00_00739B48(void *arg0) {
    s32 temp_s0;
    u8 *temp_s2;
    s32 result;
    ((void (**)(void *))(*(u8 **)((u8 *)arg0 + 0x58) + 0x140))[0](arg0);
    temp_s2 = (u8 *)arg0 + 0x738;
    temp_s0 = D_00220D14;
    result = func_L00_00719C68(temp_s0, func_L00_005C9F50(0x1647), temp_s2, *(s32 *)((u8 *)arg0 + 0x274), 0, func_L00_00719EE8, 1);
    if (result >= 0) {
        func_00739E80(arg0, *(s32 *)((u8 *)arg0 + (result << 2) + 0x278), *(s32 *)(temp_s2 + (result << 2)));
    }
}
