#include "common.h"

/* Returns byte field 0x32 of the object from func_004765F0, or 0. */
extern void *func_004765F0(void);

u8 func_00483368(void) {
    u8 *p = (u8 *)func_004765F0();

    if (p == 0) {
        return 0;
    }
    return p[0x32];
}
