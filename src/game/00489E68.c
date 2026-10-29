#include "common.h"

// Store arg0 at offset 0x14 of the object in arg1 when arg1 is non-null.
void func_00489E68(s32 arg0, s64 arg1) {
    s32 p = (s32)arg1;
    if (p != 0) {
        *(s32 *)((u8 *)p + 0x14) = arg0;
    }
}
