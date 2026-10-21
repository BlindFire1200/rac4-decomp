/* Not matching yet: BYTES 61/152 (tools/try_func.py func_L01_00443C98 --diff). Not part of the build. */
#include "common.h"
extern void func_L01_00443848(void *, s32);
extern void func_L01_00443A78(void *, s32);
void func_L01_00443C98(u8 *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    u8 *state = linked + 0xE4;
    s32 value = *(s32 *)(state + 0x1B0);
    state[0x57B] = 0x7F;
    *(s32 *)(state + 0x1AC) = *(s32 *)(state + 0x348);
    *(s32 *)(state + 0x1BC) = value;
    state[0x559] = 1;
    state[0x575] = 0x53;
    state[0x577] = 0xFF;
    *(s32 *)(state + 0x1A0) = 0;
    *(s32 *)(state + 0x1B0) = 0;
    state[0x574] = 0;
    state[0x576] = 0xFF;
    state[0x578] = 0x7F;
    state[0x579] = 0x7F;
    state[0x57A] = 0x7F;
    if (*(s32 *)(*(u8 **)(linked + 0xE0) + 0x2318) == 1) {
        func_L01_00443848(object, value);
        return;
    }
    func_L01_00443A78(object, value);
}
