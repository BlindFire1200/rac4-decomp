#include "common.h"

/* Returns byte field 0x30 of the object from func_004765F0, or -1. */
extern void *func_004765F0(void);

s32 func_00488828(void) {
    u8 *p = (u8 *)func_004765F0();

    if (p == 0) {
        return -1;
    }
    return p[0x30];
}
