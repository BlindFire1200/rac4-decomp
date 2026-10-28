/* cflags: @ee29 -O2 -G0 */
/* Adapted from public Lombyte read (0cf08ef3), with destinations verified against Deadlocked. */
#include "common.h"
extern s32 D_00164688;

/*
 * Derived from newlib, which is distributed under permissive BSD-style
 * terms. See THIRD_PARTY_NOTICES.md for the public reference and its attribution.
 */

/* Source: newlib. */


extern s32 func_00128250(void);
extern s32 func_00128180(char *, s32);

s32 func_001271E8(s32 file_descriptor, char *destination_buffer, s32 max_bytes) {
    if (file_descriptor == 0) {
        if (D_00164688 == 0) {
            if (func_00128250() != 0) {
                do {
                    D_00164688 = 1;
                } while (0);
                goto block_4;
            }
            goto block_5;
        }
    block_4:
        return func_00128180(destination_buffer, max_bytes);
    }
block_5:
    return -1;
}
