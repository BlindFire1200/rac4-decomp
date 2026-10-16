/* cflags: -mno-split-addresses */
#include "common.h"
s32 func_01EA6D50(void *arg0) {
    if (arg0 != 0) {
        *(volatile s32 *)((char *)arg0 + 0xC) = 0;
        *(volatile s32 *)((char *)arg0 + 0x0) = 0;
        *(volatile s32 *)((char *)arg0 + 0x4) = 0;
        return 0;
    }
    return 2;
}
