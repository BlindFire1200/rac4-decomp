#include "common.h"
extern s32 D_001A4EF8[];
extern s32 D_001A4F18[];
s32 func_0011A518(void *, s32, s32);
void func_0011D5D8(void *, s32);
void func_00147BA8(void);
s32 func_0014D3E8(s32, s32);
s32 func_0014EB50(s32, void *);
s32 func_00162CA0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *buffer = (u8 *)arg0 + 0x10;
    s32 value;
    func_00147BA8();
    func_0011A518(buffer, 0, 0x18);
    *(s32 *)((u8 *)arg0 + 0x10) = arg1;
    *(s32 *)((u8 *)arg0 + 0x18) = arg2;
    *(s16 *)((u8 *)arg0 + 0x1C) = 9;
    value = func_0014EB50(*(s32 *)arg0, buffer);
    if (value != 0) {
        func_0011D5D8(D_001A4EF8, value);
        return 0;
    }
    value = func_0014D3E8(*(s32 *)arg0, arg3);
    if (value != 0) func_0011D5D8(D_001A4F18, value);
    return 8;
}
