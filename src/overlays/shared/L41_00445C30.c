#include "common.h"

extern void *func_L00_005DEBD0(s32, s32, s32);
extern u8 *D_00222794;

void func_L41_00445C30(u8 *arg0, s32 arg1) {
    s32 *slots;
    s32 i;
    u8 *obj;
    u8 *owner;
    void *cb;
    void (*fn)(void *);

    i = 0xF;
    slots = *(s32 **)(arg0 + 0xAC);
    do {
        if (*slots != -1) {
            obj = D_00222794 + (*slots << 8);
            if (arg1 == 0 || *(s16 *)(obj + 0xBC) == arg1) {
                if (*(s16 *)(obj + 0xBC) == 0x261F) {
                    cb = func_L00_005DEBD0(0x261F, 0, 0x18);
                    if (cb != 0) {
                        fn = *(void (**)(void *))((u8 *)cb + 0x14);
                        goto call;
                    }
                } else if (*(s16 *)(obj + 0xBC) == 0x2628) {
                    cb = func_L00_005DEBD0(0x2628, 0, 0x20);
                    if (cb != 0) {
                        fn = *(void (**)(void *))((u8 *)cb + 0x10);
                    call:
                        if (fn != 0) fn(obj);
                    }
                } else {
                    owner = *(u8 **)(obj + 0x24);
                    *(u16 *)(obj + 0x34) &= 0xFFBE;
                    *(u16 *)(obj + 0x34) |= *(u16 *)(owner + 0x44) & 0x1000;
                    *(s32 *)(obj + 0x98) = *(s32 *)(owner + 0x10);
                }
            }
        }
        slots++;
        i--;
    } while (i >= 0);
}
