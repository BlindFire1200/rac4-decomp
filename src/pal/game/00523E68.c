#include "common.h"

// If both target objects are ready and func_00522E18 returns data, apply it to each object.
extern void func_00473868(void *, s32, s32, f32);
extern s32 func_00522E18(void *, s32, void *, void *);
void func_00523E68(void *arg0) {
    void *a = *(void **)((u8 *)arg0 + 0x23E0);
    void *b = *(void **)((u8 *)arg0 + 0x23E4);
    s32 value_a;
    s32 value_b;
    if (a != 0 && b != 0 && *((u8 *)a + 0x54) == 1 &&
        func_00522E18(arg0, 0, &value_a, &value_b) != 0) {
        func_00473868(a, value_a, 6, 0.0f);
        func_00473868(b, value_b, 6, 0.0f);
    }
}
