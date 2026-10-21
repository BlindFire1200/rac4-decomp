#include "common.h"

void *func_L01_006B4FC0(void *, s32, s32, s32);

// Open a stream with func_L01_006B4FC0 (kind 2, 0xFA) and discard it.
void func_L01_00426E70(void *object) {
    func_L01_006B4FC0(object, 2, 0, 0xFA);
}
