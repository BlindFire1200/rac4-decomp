#include "common.h"

extern void func_00494F80(void *);
extern void func_L00_005F6AE0(void *, s32, void *, s32, s32, s32, f32);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_00495918(void);

// Run func_00494F80; for mode 3 also start action 0xC with the callback
// func_L01_00495918 and move to state 1 (1).
void func_L01_00495B00(void *object, s32 mode) {
    func_00494F80(object);
    if (mode == 3) {
        func_L00_005F6AE0(object, 0xC, func_L01_00495918, 0, 0, 1, 0.0f);
        func_L01_00591BD8(object, 1, 1);
    }
}
