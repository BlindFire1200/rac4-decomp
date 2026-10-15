#include "common.h"

extern u8 D_0022CA80[];

// Reload the +0x98 field of the indexed entry's linked object from its source.
void func_L00_0059BB68(s32 index) {
    u8 *record = D_0022CA80 + index * 0x470;
    u8 *ptr = *(u8 **)(record + 0x124);
    if (ptr != 0) {
        u8 *source = *(u8 **)(ptr + 0x24);
        *(s32 *)(ptr + 0x98) = *(s32 *)(source + 0x10);
    }
}
