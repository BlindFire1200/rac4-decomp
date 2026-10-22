#include "common.h"

/* Reset the object's state block field at 0x68 and notify the manager. */
extern s32 func_005F4F60(s32 arg0, s32 arg1, void *arg2);

void func_L15_003F8B20(void *object) {
    u8 *state = *(u8 **)((u8 *)object + 0xAC);
    func_005F4F60(1, 0, object);
    *(s32 *)(state + 0x68) = 0;
}
