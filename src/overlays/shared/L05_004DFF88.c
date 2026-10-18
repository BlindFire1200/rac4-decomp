#include "common.h"

void func_L05_004DF3B8(s32, void *, s32, u8, s32, s32);

// When the +0x2EF4 record of the +0x18 entity is set, run func_L05_004DF3B8
// with the record's +0x2B0 word, the +0x40 block, the +0x30 word, the +7 byte
// and two entity words.
void func_L05_004DFF88(u8 *object) {
    u8 *entity = *(u8 **)(object + 0x18);
    u8 *record = *(u8 **)(entity + 0x2EF4);
    if (record != 0) {
        func_L05_004DF3B8(*(s32 *)(record + 0x2B0), object + 0x40, *(s32 *)(object + 0x30), object[7], *(s32 *)(entity + 0x2F14), *(s32 *)entity);
    }
}
