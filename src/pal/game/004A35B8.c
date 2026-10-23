#include "common.h"

extern void func_004985F0(s32);
extern void func_004A3388(s32);

// Calls func_004985F0(16), then opens the five-entry menu func_004A3388 with 3.
void func_004A35B8(void) {
    func_004985F0(0x10);
    func_004A3388(3);
}
