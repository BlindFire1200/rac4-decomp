#include "common.h"

extern void *D_00344C38[];

// Checks the network slot entry for an index and whether the object's per-slot timer must be updated.
s32 func_L41_003DF5B8(void *arg0, s32 arg1) {
    s32 offset;
    void *entry;
    void *state;
    s32 result;

    offset = arg1 * 4;
    entry = D_00344C38[arg1];
    state = *(void **)((u8 *)arg0 + 0xAC);
    result = 0;
    if (entry != 0) {
        if (*(s32 *)((u8 *)entry + 0x25CC) == 0x66) {
            result = (*(s32 *)((u8 *)entry + 0x1C34) != 0);
        }
        result = (*(s32 *)((u8 *)state + offset + 0x70) != 0) ? 1 : result;
    }
    return result;
}
