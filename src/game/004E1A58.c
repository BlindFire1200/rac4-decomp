#include "common.h"
extern char D_1D24C0[];
extern void func_004E1B18(void *);
void func_004E1A58(s32 arg0, s32 arg1) {
    void *entry;
    s32 i;
    if (arg0 == 0) return;
    entry = D_1D24C0;
    i = 0x33;
    do {
        if (arg0 == *(s32 *)((u32)entry + 0x1C)) {
            if (arg1 == 0 || (*(u32 *)((u32)entry + 0x54) & 4) != 0) {
                func_004E1B18(entry);
            }
        }
        i--;
        entry = (void *)((u32)entry + 0x80);
    } while (i >= 0);
    *(s16 *)((u32)arg0 + 0x6E) = -1;
}
