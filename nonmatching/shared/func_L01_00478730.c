/* Not matching yet: BYTES 11/152 (tools/try_func.py func_L01_00478730 --diff). Not part of the build. */
#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern u8 *func_L00_005DD000(s32, s32);
extern void func_L01_004787E8(void *);

void *func_L01_00478730(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *object;
    u8 *data;

    object = func_L00_005DD000(0x26A9, 0x310);
    if (object != 0) {
        data = *(u8 **)(object + 0xAC);
        *(s32 *)(data + 0x00) = arg1;
        *(s32 *)(data + 0x08) = (arg2 <= 0xFE) ? arg2 : -1;
        *(s32 *)(data + 0x04) = (s32)arg0;
        *(u8 *)(object + 0x30) = 0xFF;
        *(u128 *)(object + 0x10) = *(u128 *)(arg0 + 0x10);
        *(u16 *)(object + 0x32) = *(u16 *)(arg0 + 0x32);
        func_L01_004787E8(object);
    }
    return object;
}
