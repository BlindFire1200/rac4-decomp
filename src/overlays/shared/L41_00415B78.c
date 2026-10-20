#include "common.h"

extern void func_L00_005DE048(void *, s32, void *);
extern void func_L41_00415C00(void *);
extern void func_L41_00415EA0(void *);
extern void func_L41_00416380(void *);
extern s32 func_L41_00417010(void *, f32);
extern f32 func_L41_0059F768(void);
extern s32 D_0021DDB4;
extern s32 D_002213DC;

// When idle (D_0021DDB4 == 0), test the object and run its three update steps.
void func_L41_00415B78(void *object) {
    u8 *sub;

    if (D_0021DDB4 == 0) {
        sub = *(u8 **)((u8 *)object + 0xAC);
        if (func_L41_00417010(object, func_L41_0059F768()) != 0 && D_002213DC != 0x28) {
            func_L00_005DE048(*(void **)(*(u8 **)(sub + 0x40) + 0x2EF0), 10, sub + 0x30);
            func_L41_00415C00(object);
            func_L41_00415EA0(object);
            func_L41_00416380(object);
        }
    }
}
