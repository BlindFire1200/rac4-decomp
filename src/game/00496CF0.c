#include "common.h"

/* Wrapper: calls func_004A5168 with a3 = -1, passing a0 to a2 through. */
extern void func_004A5168();

void func_00496CF0(s32 a0, s32 a1, s32 a2) {
    func_004A5168(a0, a1, a2, -1);
}
