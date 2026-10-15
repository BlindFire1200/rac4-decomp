#include "common.h"

extern void *func_004A2AD0(void *arg0);
extern s32 D_307920_[];
#define D_307920 (D_307920_[0])

volatile s32 D_002215D8 = 0;

// Initializes D_307920 array and returns pointer to indexed element
void *func_004A2990(s32 arg0) {
    void *var_s1;
    s32 var_s0;

    if (!D_002215D8) {
        var_s1 = (void *)&D_307920;
        var_s0 = 3;
        do {
            func_004A2AD0(var_s1);
            var_s1 = (void *)((u32)var_s1 + 0x20);
            var_s0 -= 1;
        } while (var_s0 != -1);
        D_002215D8 = 1;
    }
    return (void *)((u32)&D_307920 + (arg0 << 5));
}
