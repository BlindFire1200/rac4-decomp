#include "common.h"

extern void func_L00_005DD4A0(void *);

/* Release qualifying objects from the five linked slots and clear each slot. */
void func_L15_004E30A8(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    void **slot = (void **)(linked + 0x368);
    s32 remaining = 5;
    do {
        void *entry = *slot;
        remaining--;
        if (entry != 0 && *(s16 *)((u8 *)entry + 0xBC) == 0x2018) {
            u8 state = *((u8 *)entry + 0x20);
            if (state == 0xFE) { } else if (state == 0xFD) { } else func_L00_005DD4A0(entry);
        }
        *slot = 0;
        slot++;
    } while (remaining >= 0);
}
