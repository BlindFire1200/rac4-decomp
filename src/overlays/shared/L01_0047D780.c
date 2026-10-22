#include "common.h"

extern s32 D_0021DDB8;
extern s32 D_00222A9C;
extern void func_L01_0047D6D8(void);
extern void func_0054A4E8(s32, s32, s32);

s32 D_002219F0 = 0;
s32 D_002219F4 = 0;

// Relink the item's +0x38 pointer: on a fresh state value clear it and re-run
// the item-list handler, otherwise point it at the previously seen item.
void func_L01_0047D780(void *arg0) {
    s32 state = D_0021DDB8;
    unsigned char *block = *(unsigned char **)((unsigned char *)arg0 + 0xAC);
    if (state != D_002219F4) {
        D_002219F0 = (s32)arg0;
        D_002219F4 = state;
        *(unsigned char **)(block + 0x38) = 0;
        func_0054A4E8((s32)&D_00222A9C, (s32)func_L01_0047D6D8, 0);
        return;
    }
    *(unsigned char **)(block + 0x38) = (unsigned char *)D_002219F0;
    D_002219F0 = (s32)arg0;
}
