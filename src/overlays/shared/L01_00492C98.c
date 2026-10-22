#include "common.h"

typedef struct {
    u8 f00[0xBE];
    u8 fBE;
} Type1;

extern void func_00591BD8(Type1 *o, u8 state, s32 type);

/* Clear bit 2 (0x04) of the object's +0xBE flag byte, then set its state to 1 with type -1. */
void func_L01_00492C98(Type1 *o) {
    o->fBE = o->fBE & 0xFB;
    func_00591BD8(o, 1, -1);
}
