#include "common.h"

extern void func_00497980(s32 arg0);
extern void func_004C8418(void);
extern void func_004E19D8(s32 arg0, s32 arg1);

// Calls func_004C8418, then func_00497980(6), then func_004E19D8(0x1E, 0).
void func_004C8390(void) {
    func_004C8418();
    func_00497980(6);
    func_004E19D8(0x1E, 0);
}
