/* Not matching yet: BYTES 24/140 (tools/try_func.py func_L01_006B3FE8 --diff). Not part of the build. */
#include "common.h"

extern u8 *func_L00_005FE7C0(s32);
extern void func_L01_00666D98(void *);
extern void func_L00_005DD4A0(s32);

void func_L01_006B3FE8(s32 arg0) {
    u8 *manager = func_L00_005FE7C0(arg0);
    u8 *object = ((u8 *(*)(s32))*(u32 *)(manager + 4))(arg0);
    if (object != 0) {
        *(s32 *)(object + 0x18) = 0;
        func_L01_00666D98(object);
        *(s32 *)(object + 0x4C) = -1;
        object[0x51] = 1;
        *(s32 *)(object + 0x2C) = 0;
        *(s32 *)(object + 0x30) = 0;
        *(s32 *)(object + 0x34) = -1;
        *(s32 *)(object + 0x48) = -1;
        *(s32 *)(object + 0x38) = -1;
        *(s32 *)(object + 0x44) = -1;
        *(s32 *)(object + 0x3C) = -1;
        *(s32 *)(object + 0x40) = -1;
        object[0x50] = 0;
    }
    func_L00_005DD4A0(arg0);
}
