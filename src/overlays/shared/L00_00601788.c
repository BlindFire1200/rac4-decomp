/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct {
    u8 pad[0x3054];
    s32 unk3054;
    s32 unk3058;
} Type1;

extern void *D_00222550[];

// Clears two counters in the structure D_00222550 points at.
void func_L00_00601788(void) {
    ((Type1 *)D_00222550[0])->unk3058 = 0;
    ((Type1 *)D_00222550[0])->unk3054 = 0;
}
