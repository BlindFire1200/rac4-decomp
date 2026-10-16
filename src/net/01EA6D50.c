/* cflags: -mno-split-addresses */
#include "common.h"

/* Clears words 0x0, 0x4 and 0xC of the object; 2 when there is none. */
s32 func_01EA6D50(void *arg0) {
    s32 r = 2;
    if (arg0 != 0) {
        *(s32 *)((char *)arg0 + 0x0) = 0;
        *(s32 *)((char *)arg0 + 0x4) = 0;
        *(s32 *)((char *)arg0 + 0xC) = 0;
        r = 0;
    }
    return r;
}
