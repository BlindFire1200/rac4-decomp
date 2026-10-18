#include "common.h"

void func_L01_004795E8(s32);
void func_L00_005DE048(s32, s32, s32 *);
void func_L01_0055B420(s32 *, s32, s32);
void func_L01_00478F88(s32);

// Run func_L01_004795E8, fetch a vector for the object (kind 0), update it with
// func_L01_0055B420 (0x103080), then run func_L01_00478F88.
void func_L01_00479660(s32 object) {
    s32 value;
    func_L01_004795E8(object);
    func_L00_005DE048(object, 0, &value);
    func_L01_0055B420(&value, 0x103080, 0);
    func_L01_00478F88(object);
}
