/* cflags: @ee29 -O2 -G0 */
/* Adapted from public Lombyte write (0cf08ef3), with destinations verified against Deadlocked. */
#include "common.h"
extern s32 D_00164688;

/*
 * Derived from newlib, which is distributed under permissive BSD-style
 * terms. See THIRD_PARTY_NOTICES.md for the public reference and its attribution.
 */

/* Source: newlib. */

extern s32 func_00128250(void);
extern s32 func_00128008(s8 *, s32);

s32 func_00127168(s32 fd, s8 *source_buffer, s32 byte_count) {
    register s8 *tty_arg = source_buffer;
    if ((u32)(fd - 1) < 2U) {
        if (D_00164688 == 0) {
            if (func_00128250() != 0) {
                D_00164688 = 1;
                goto block_4;
            }
            goto block_5;
        }
    block_4:
        return func_00128008(tty_arg, byte_count);
    }
block_5:
    return -1;
}
