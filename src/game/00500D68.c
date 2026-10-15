#include "common.h"

// Initialize elements and return indexed element
extern void *func_00510A98(void *);
extern s32 D_335DC8[];

// This global is accessed via gp offset
static s32 D_00222034 = 0;

void *func_00500D68(s32 arg0) {
    void *var_s1;
    s32 var_s0;
    
    if (D_00222034 == 0) {
        var_s1 = &D_335DC8[0];
        var_s0 = 4;
        do {
            var_s0 -= 1;
            func_00510A98(var_s1);
            var_s1 = (u8 *)var_s1 + 0x1C;
        } while (var_s0 != -1);
        D_00222034 = 1;
    }
    
    return (void *)((arg0 * 0x1C) + (s32)&D_335DC8[0]);
}
