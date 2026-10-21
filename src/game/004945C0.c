#include "common.h"

extern void *func_00490968(s32);
extern void func_00494468(void *, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32);

// Allocate an object with func_00490968 (id 0x61) and, when that succeeds,
// initialize it with func_00494468 from the eight integer and three float
// parameters. Returns the object or null.
void *func_004945C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 f0, f32 f1, f32 f2) {
    void *ptr = func_00490968(0x61);
    if (ptr != 0) {
        func_00494468(ptr, a0, a1, a2, a3, a4, a5, a6, a7, f0, f1, f2);
    }
    return ptr;
}
