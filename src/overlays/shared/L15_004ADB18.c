#include "common.h"

typedef struct {
    s32 f0;
    f32 f4;
    s32 f8;
} Type1;

extern void func_00560F28(void *o, s32 state, s32 type);

/* Sets the linked child's field float at +4 to 81.0 and bit 2 of its flags at +8, sets bit 0x10 in the owner's flags at +0x36, then calls the state helper. */
void func_L15_004ADB18(void *arg0) {
    Type1 *field;

    field = (Type1 *)((char *)*(void **)((char *)arg0 + 0xAC) + 0x50);
    field->f4 = 81.0f;
    field->f8 |= 4;
    *(u16 *)((char *)arg0 + 0x36) |= 0x10;
    func_00560F28(arg0, 1, -1);
}
