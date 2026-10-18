#include "common.h"
void func_L05_004DF3B8(s32, void *, s32, u8, s32, s32);
void func_L05_004DFF88(u8 *a0) {
    u8 *entity = *(u8 **)(a0 + 0x18);
    u8 *record = *(u8 **)(entity + 0x2EF4);
    if (record != 0) {
        func_L05_004DF3B8(*(s32 *)(record + 0x2B0), a0 + 0x40, *(s32 *)(a0 + 0x30), a0[7], *(s32 *)(entity + 0x2F14), *(s32 *)entity);
    }
}
