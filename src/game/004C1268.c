#include "common.h"

// Call different function based on argument, then modify structure
extern void func_00497980(s32);
extern s32 func_00505B20(void);
extern void func_004A1310(void *);
extern void func_004A1358(void *);
extern s32 D_30B358[];

void func_004C1268(s32 arg0) {
    s32 *temp_s1;
    void *var_s0;
    s32 temp_v0;
    
    temp_v0 = func_00505B20();
    temp_s1 = (s32 *)((temp_v0 * 0x258) + (s32)&D_30B358[0]);
    
    if (arg0 != 0) {
        var_s0 = (u8 *)temp_s1 + 0x1EC;
        func_004A1310(var_s0);
    } else {
        var_s0 = (u8 *)temp_s1 + 0x1EC;
        func_004A1358(var_s0);
    }
    
    if (*(s32 *)((u8 *)var_s0 + 0x50) > 0) {
        func_00497980(9);
    }
    
    *((s32 *)temp_s1 + 1) = *((s32 *)temp_s1 + 1) | 5;
}
