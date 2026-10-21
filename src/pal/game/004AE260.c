#include "common.h"

typedef struct {
    s32 f0;
    u8 pad4[0x154];
    s32 f158;
    u8 pad15C[0x14];
} Entry;

extern s32 D_308C60[];
extern Entry D_308C80[];
void func_004AE190(void);

// PAL version of func_004AD3E0: clear bit index of the mask D_308C60[0] (running
// func_004AE190 once no bit is left), then set +0x158 of the 0x170-byte entry for
// that index to -1 (PAL only) and its first word to 1.
void func_004AE260(s32 index) {
    s32 value = D_308C60[0] & ~(1 << index);
    D_308C60[0] = value;
    if (value == 0) func_004AE190();
    D_308C80[index].f158 = -1;
    D_308C80[index].f0 = 1;
}
