#include "common.h"

extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L02_003C58D8(void *);
extern void func_L02_003C5F10(void *);
extern void func_L02_003C5FD0(void *);
extern void func_L02_003C5BB0(void *);

// Move to state 1 (-1), set the +0x30 byte to 0xFF, clear the linked object's
// first word when it is set and its +0x33 byte is below 0x10, then run the four
// setup calls.
void func_L02_003C6090(void *object) {
    s32 *linked;
    func_L01_00591BD8(object, 1, -1);
    *(u8 *)(object + 0x30) = -1;
    linked = *(s32 **)(object + 0xAC);
    if (linked[0] >= 0 && *(u8 *)((u8 *)linked + 0x33) < 0x10) linked[0] = -1;
    func_L02_003C58D8(linked);
    func_L02_003C5F10(linked);
    func_L02_003C5FD0(linked);
    func_L02_003C5BB0(linked);
}
