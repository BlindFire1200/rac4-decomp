#include "common.h"

typedef s32 (*ActionCallback)(s32, s32, s32);
typedef int u128 __attribute__((mode(TI)));
extern void func_L00_005DD4A0(void *);
extern ActionCallback *func_L00_005DEBD0(s32, s32, s32);
extern void func_L01_0048A690(void *, void *);
extern void func_L01_0048AB58(void *arg0, void *arg1, s32 arg2);

// Fire the action callback for each newly set bit, latch the bits, then finish or restart.
void func_L01_0048DDB0(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    ActionCallback *cb;
    s32 i;
    u8 *p;

    func_L01_0048AB58(object, linked, 0);
    cb = func_L00_005DEBD0(0x20ED, 0x12, 8);
    if (cb != 0 && cb[1] != 0) {
        for (i = 0; i < 32; i++) {
            p = *(u8 **)(linked + 0x1D0);
            if (p != 0 && (((*(s32 *)(p + 0x178) >> i) ^ 1) & 1) && ((*(s32 *)(p + 0x174) >> i) & 1)) {
                ((void (*)(void))cb[1])();
            }
        }
    }
    if (*(u8 *)(linked + 0x1D4) == 0) {
        p = *(u8 **)(linked + 0x1D0);
        if (p != 0) {
            *(s32 *)(p + 0x178) = *(s32 *)(p + 0x174);
        }
    }
    if (*(u8 *)(linked + 0x16C) != 0 || *(u8 *)(linked + 0x100) != 0) {
        func_L00_005DD4A0(object);
        return;
    }
    *(u128 *)((u8 *)object + 0x10) = *(u128 *)(linked + 0xDE0);
    func_L01_0048A690(object, linked);
}
