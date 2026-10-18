#include "common.h"

extern s32 func_L00_005E60A0(s32);
extern void func_L01_004BE3B0(void *, s32);

// Clear flag 0x80 at +0x182 of the linked data and apply its +0x184/+0x188 entries.
void func_L01_004BE460(void *arg0) {
    char *p = *(char **)((char *)arg0 + 0xAC);
    u16 flags;
    s32 a;
    s32 b;

    flags = *(u16 *)(p + 0x182) & 0xFF7F;
    *(u16 *)(p + 0x182) = flags;
    if (flags == 0)
        return;
    a = *(s32 *)(p + 0x184);
    b = *(s32 *)(p + 0x188);
    if (a != -1 && b != -1) {
        switch (func_L00_005E60A0(3)) {
        case 0:
            func_L01_004BE3B0(arg0, *(s32 *)(p + 0x184));
            break;
        case 2:
            func_L01_004BE3B0(arg0, *(s32 *)(p + 0x184));
        case 1:
            func_L01_004BE3B0(arg0, *(s32 *)(p + 0x188));
            break;
        }
    } else if (a != -1 && a != b) {
        func_L01_004BE3B0(arg0, a);
    } else if (b != -1) {
        func_L01_004BE3B0(arg0, b);
    }
}
