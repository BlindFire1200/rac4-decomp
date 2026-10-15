#include "common.h"

// Call different function based on argument if condition met, modify structure field
extern void func_00497980(s32);
extern s32 func_00505B20(void);
extern void func_004A1310(void *);
extern void func_004A1358(void *);
extern s32 D_321650[];

void func_004D9D30(s32 arg0) {
    s32 *temp_s0;
    void *temp_a0;
    s32 temp_v0;
    
    temp_v0 = func_00505B20();
    temp_s0 = (s32 *)((temp_v0 * 0x124) + (s32)&D_321650[0]);
    temp_a0 = (u8 *)temp_s0 + 0xB4;
    
    if (*(s32 *)((u8 *)temp_a0 + 0x50) >= 2) {
        if (arg0 != 0) {
            func_004A1358(temp_a0);
        } else {
            func_004A1310(temp_a0);
        }
        func_00497980(0);
        *((s32 *)temp_s0 + 2) = *((s32 *)temp_s0 + 2) | 2;
    }
}
