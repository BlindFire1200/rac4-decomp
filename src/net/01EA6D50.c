/* cflags: -mno-split-addresses */
#include "common.h"

/* Clears words 0x0, 0x4 and 0xC of the object; 2 when there is none. */
s32 func_01EA6D50(void *object) {
    s32 result = 2;
    if (object != 0) {
        *(s32 *)((char *)object + 0x0) = 0;
        *(s32 *)((char *)object + 0x4) = 0;
        *(s32 *)((char *)object + 0xC) = 0;
        result = 0;
    }
    return result;
}
