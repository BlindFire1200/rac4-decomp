#include "common.h"

// Return the first word of the table pointed to by the +0x10 field of the +4 link.
s32 func_L00_0052D718(u8 *object) {
    return **(s32 **)(*(u8 **)(object + 4) + 0x10);
}
