#include "common.h"

extern void *D_0022CA80[];

// Access array, load pointer from struct, optionally zero a field
void func_L00_0059BB40(s32 arg0) {
    s32 *base = (s32 *)D_0022CA80;
    s32 *entry = base + arg0 * (0x470 / 4);
    void *ptr = (void *)entry[0x124 / 4];
    if (ptr != NULL) {
        *(s32 *)((u32)ptr + 0x98) = 0;
    }
}
