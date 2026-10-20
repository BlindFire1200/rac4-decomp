#include "common.h"

extern void *func_L01_006B4FC0(void *, s32, s32, s32);
extern u8 *func_L01_006B5028(void *, s32, s32);
extern void func_L41_00611478(u8 *);

void func_L41_003D9D10(void *object) {
    u8 *child;
    func_L01_006B4FC0(object, 1, 0, 0xFA);
    child = func_L01_006B5028(object, 2, 0);
    if (child != NULL && child[0x55] != 0) {
        func_L41_00611478(child);
    }
}
