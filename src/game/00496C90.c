#include "common.h"

/* Tail-free wrapper: calls func_004A4EF8 with a2 = -1, passing a0 and a1 through. */
extern void func_004A4EF8();

void func_00496C90(s32 a0, s32 a1) {
    func_004A4EF8(a0, a1, -1);
}
