#include "common.h"

extern void *func_L00_005DEBD0(s32, s32, s32);
extern u8 *D_00222794;

/* Walks 16 moby slots and runs each one's update callback, or sets bits 11-14 of f36. */
void func_L41_00445A00(void *arg0, s32 arg1) {
    s32 *slot;
    s32 i;
    u8 *m;
    void (*cb)(void *, s32);
    void *t;
    s16 type;
    u16 f;

    i = 0xF;
    slot = *(s32 **)((u8 *)arg0 + 0xAC);
    do {
        if (*slot != -1) {
            m = D_00222794 + (*slot << 8);
            if (m != 0) {
                type = *(s16 *)(m + 0xBC);
                if (type == 0x261F) {
                    t = func_L00_005DEBD0(0x261F, 0, 0x18);
                    if (t != 0) {
                        cb = *(void (**)(void *, s32))((u8 *)t + 0xC);
                        goto call;
                    }
                } else if (type == 0x2628) {
                    t = func_L00_005DEBD0(0x2628, 0, 0x20);
                    if (t != 0) {
                        cb = *(void (**)(void *, s32))((u8 *)t + 0x4);
call:
                        if (cb != 0) {
                            cb(m, arg1);
                        }
                    }
                } else {
                    f = *(u16 *)(m + 0x36);
                    if (f & 0x8000) {
                        *(u16 *)(m + 0x36) = (f & 0x87FF) | (arg1 << 11);
                    }
                }
            }
        }
        slot++;
        i--;
    } while (i >= 0);
}
