#include "common.h"

extern void func_00497980(s32);
extern s32 func_004A1310(void *);
extern s32 func_004A1358(void *);
extern s32 func_00505B20(void);
extern s32 D_31D100[];

// Conditional function branching with structure modification
void func_004D6178(s32 arg0) {
    s32 index;
    s32 *obj_base;
    s32 *obj_field;
    s32 field_val;

    index = func_00505B20();
    obj_base = (s32 *)((index * 0x528) + (s32)D_31D100);
    obj_field = (s32 *)((s32)obj_base + 0x4BC);
    field_val = *(s32 *)((s32)obj_field + 0x50);

    if (field_val < 2) {
        return;
    }

    if (arg0 != 0) {
        func_004A1358(obj_field);
    } else {
        func_004A1310(obj_field);
    }

    func_00497980(0);

    *(s32 *)((s32)obj_base + 0x4) = *(s32 *)((s32)obj_base + 0x4) | 2;
}
