#include "common.h"

extern void *func_L01_006B4FC0(void *, s32, s32, s32);
extern void func_L00_006EC318(void *, s32 *, s32);

// Call func_L01_006B4FC0 and pass its result the two words at +0xC and +0x10 of
// the linked +0xAC object (4 bytes each) through func_L00_006EC318.
void func_L01_00426DF8(u8 *object) {
    s32 values[2];
    u8 *linked;
    void *sink;
    sink = func_L01_006B4FC0(object, 1, 0, 0xFA);
    linked = *(u8 **)(object + 0xAC);
    values[0] = *(s32 *)(linked + 0xC);
    func_L00_006EC318(sink, &values[0], 4);
    values[1] = *(s32 *)(linked + 0x10);
    func_L00_006EC318(sink, &values[1], 4);
}
