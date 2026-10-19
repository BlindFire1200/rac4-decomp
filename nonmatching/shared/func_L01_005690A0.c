/* Not matching yet: BYTES 8/148 (tools/try_func.py func_L01_005690A0 --diff). Not part of the build. */
#include "common.h"

extern u8 *func_005A16E8(void);
extern void func_L01_0056D620(void *, s32);

void func_L01_005690A0(void *unused, void *arg1) {
    u8 *object;
    s32 *ids;
    f32 *times;
    s32 i;
    s32 id;

    object = func_005A16E8();
    if (object != 0) {
        ids = (s32 *)(object + 0x50);
        times = (f32 *)(object + 0x70);
        i = 7;
        do {
            id = *ids;
            if ((id != 0) && (*(f32 *)(object + 0x4C) < *times)) {
                func_L01_0056D620(arg1, id);
            }
            times++;
            ids++;
            i--;
        } while (i >= 0);
    }
}
