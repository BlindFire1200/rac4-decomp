#include "common.h"

void func_001634F0(f32);
s32 func_00163928(void);

// Run func_001634F0(0.0f) once, then again while repeat is nonzero and
// func_00163928 returns nonzero.
void func_001634A8(s32 repeat) {
    do {
        func_001634F0(0.0f);
    } while (repeat != 0 && func_00163928() != 0);
}
