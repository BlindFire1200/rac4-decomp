#include "common.h"

/* Sets the child's flag field to 1 and, if its state field is non-zero, dispatches an event for it. */

typedef struct {
    u8 pad0[0xAC];
    void *fAC;
} Loc1;

typedef struct {
    u8 pad0[0x140];
    s32 f140;
    u8 pad1[0x14E - 0x144];
    s16 f14E;
    u8 pad2[0x278 - 0x150];
    s32 f278;
} Loc2;

extern void func_L05_004DEB20(void *arg0);
extern void func_00684058(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_L05_004E0030(void *arg0) {
    Loc2 *p;
    s32 v;

    p = (Loc2 *)((Loc1 *)arg0)->fAC;
    func_L05_004DEB20(arg0);
    p->f14E = 1;
    v = p->f140;
    if (v != 0) {
        func_00684058(p->f278, v, 1, 0);
    }
}
