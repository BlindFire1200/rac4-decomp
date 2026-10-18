#include "common.h"

extern void *func_L00_005DEBD0(s32, s32, s32);
extern void func_L00_0066CCE8(void *, s32);
extern void func_L01_004CBBC8(void *);
extern u8 *D_00222D14;
extern u8 *D_0022201C;

// Hide and reset the object and its linked parts, notifying the 0x261E owner callback.
void func_L01_004CF188(u8 *object, s32 arg1) {
    u8 *linked = *(u8 **)(object + 0xAC);
    s32 i;

    if (*(u8 **)(linked + 0xC) != 0) {
        *(u16 *)(*(u8 **)(linked + 0xC) + 0x34) |= 0x41;
        *(u16 *)(*(u8 **)(linked + 0xC) + 0x34) &= 0xEFFF;
        *(s32 *)(*(u8 **)(linked + 0xC) + 0x98) = 0;
        func_L00_0066CCE8(*(u8 **)(linked + 0xC), 1);
    }
    if (*(u8 **)(linked + 0x20) != 0) {
        u8 *q = *(u8 **)(*(u8 **)(linked + 0x20) + 0xAC);
        if (q != 0) {
            *(s16 *)(q + 0x16) = 1;
        }
        *(u16 *)(*(u8 **)(linked + 0x20) + 0x34) |= 0x41;
    }
    if (*(u8 **)(linked + 0x24) != 0) {
        *(u16 *)(*(u8 **)(linked + 0x24) + 0x34) |= 0x41;
    }
    func_L01_004CBBC8(object);
    {
        s32 idx = *(s32 *)(linked + 0x2F4);
        if (idx != -1) {
            u8 *p = D_00222D14 + (idx << 8);
            if (p != 0 && *(s16 *)(p + 0xBC) == 0x261E && D_0022201C != 0) {
                void (*fn)(void *, s32) = *(void (**)(void *, s32))(D_0022201C + 0xC);
                if (fn != 0) {
                    fn(p, 0);
                }
            }
        }
    }
    if (arg1 != 0) {
        for (i = 0; i < 2; i++) {
            s32 idx;
            if (i == 0) {
                idx = *(s32 *)(linked + 0x2B8);
            } else {
                idx = *(s32 *)(linked + 0x2F8);
            }
            if (idx != -1) {
                u8 *p = D_00222D14 + (idx << 8);
                if (p != 0) {
                    void **cb = func_L00_005DEBD0(*(s16 *)(p + 0xBC), 7, 0xC);
                    if (cb != 0) {
                        ((void (*)(void *))cb[2])(p);
                    }
                    *(s32 *)(p + 0x98) = 0;
                    *(u16 *)(p + 0x34) = (*(u16 *)(p + 0x34) | 0x41) & 0xEFFF;
                    func_L00_0066CCE8(p, 1);
                }
            }
        }
    }
    *(s32 *)(object + 0x98) = 0;
    *(u16 *)(object + 0x34) = (*(u16 *)(object + 0x34) | 0x41) & 0xEFFF;
    func_L00_0066CCE8(object, 1);
}
