#include "common.h"

extern void *func_004A2D10(void *arg0);
extern s32 D_3079A0_[];
#define D_3079A0 (D_3079A0_[0])

volatile s32 D_002215F0 = 0;

// Initializes D_3079A0 array and returns pointer to indexed element
void *func_004A2A48(s32 arg0) {
    void *var_s1;
    s32 var_s0;

    if (!D_002215F0) {
        var_s1 = (void *)&D_3079A0;
        var_s0 = 3;
        do {
            func_004A2D10(var_s1);
            var_s1 = (void *)((u32)var_s1 + 0x14);
            var_s0 -= 1;
        } while (var_s0 != -1);
        D_002215F0 = 1;
    }
    return (void *)((u32)&D_3079A0 + (arg0 * 0x14));
}
