#include "common.h"

extern void func_004F5370(void *obj, void (*callback)(void), void *data);
extern void func_0053C1C8(void *o, u8 state, s32 type);
extern s32 D_00222398;
extern void func_L06_004C8E10(void);

/* Kills the object when its flag byte at +0x20 is clear, then hands it to the level manager. */
void func_L06_004C8DC0(void *o) {
    if (*(u8 *)((u8 *)o + 0x20) == 0) {
        func_0053C1C8(o, 1, -1);
    }
    func_004F5370(&D_00222398, func_L06_004C8E10, o);
}
