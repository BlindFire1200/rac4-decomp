#include "common.h"

extern s32 func_006ACB58();
extern void *func_L00_006EF340(s32);
extern void func_L00_006EF5C0(void *, u32, s32, s32);
extern s32 func_L01_004DBC38(void *, void *);
extern u8 D_172160[];

// Walk the object list and update each eligible linked target's state.
void func_L01_004DC560(void *object) {
    u8 *linked;
    u8 *obj;
    u8 *target;
    u8 *base;
    s32 i;

    i = 0;
    linked = *(u8 **)((u8 *)object + 0xAC);
    linked[5] = 1;
    linked[4] = 0;
    *(s32 *)((u8 *)object + 0x60) = 0;
    obj = func_L00_006EF340(0);
    base = D_172160;
    while (i < func_006ACB58()) {
        if (obj != 0) {
            target = *(u8 **)(obj + 0x2B0);
            if (target != 0 && *(s16 *)(target + 0xBC) != 0x10C2
                && *(s32 *)(obj + 0x2B8) == 0 && *(s32 *)(obj + 0x2BC) == 0
                && func_L01_004DBC38(object, target) != 0) {
                if (target[0x67] == 7) {
                    target[0x67] = 8;
                } else if (target[0x67] != 8) {
                    *(s32 *)(obj + 0x2E8) = 0;
                    if ((u8)(target[0x67] - 9) >= 3) {
                        func_L00_006EF5C0(obj, 0xFFFFFFFF, 6, *(s32 *)(base + 0x254));
                    }
                }
            }
        }
        i++;
        obj = func_L00_006EF340(i);
    }
}
