#include "common.h"

// Run three state updates, with an additional update when the record and callback state allow it.
extern void func_00547C90(s32, s32, s32);
extern void func_00547DC8(s32, s32, s32);
extern s32 func_00547E00(s32, s32);
extern void func_00548040(s32, s32, s32);
extern void *func_00548D28(s32, s32);
extern s32 func_00548DA0(void);
void func_00548F48(s32 arg0, s32 arg1) {
    if (arg1 != 0 && func_00548DA0() != 0) {
        if (*(u8 *)((u8 *)func_00548D28(arg1, 0) + 0x28) != 0 &&
            func_00547E00(arg0, arg1) > 0) {
            func_00547DC8(arg0, arg1, 0);
        }
        func_00548040(arg0, arg1, 0);
        func_00547C90(arg0, arg1, -1);
    }
}
