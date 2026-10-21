#include "common.h"

extern void func_L00_005EE5E8(s32, void *);
extern void func_00470990(s32, s32, s32, s32);
extern void func_004709A8(s32, s32 *, s32 *, s32 *);
extern void func_L00_006B1260(u8 *);

// While in state 0x7F/0x90/0x81 for under 25 frames, save the object's +0x38 and flash its colour; restore it afterwards.
void func_L00_006B12C0(u8 *player) {
    s32 r, g, b;
    s32 state;
    s32 on;

    state = *(s32 *)(player + 0x25CC);
    on = 0;
    if (state == 0x7F || state == 0x90 || state == 0x81) {
        on = *(s32 *)(player + 0x370) < 0x19;
    }
    if (on) {
        if (*(s32 *)(player + 0x2DE8) == 0) {
            *(s64 *)(player + 0x2DE0) = *(s64 *)(*(s32 *)(player + 0x2EF0) + 0x38);
            *(s32 *)(player + 0x2DE8) = 1;
        }
        func_004709A8(*(s32 *)(player + 0x2EF0), &r, &g, &b);
        if (*(s32 *)(player + 0x370) % 4 < 3) {
            r = 0;
            g = 0;
            b = 0;
        } else {
            r = 0x90;
            g = 0x90;
            b = 0xF0;
        }
        func_00470990(*(s32 *)(player + 0x2EF0), r, g, b);
        func_L00_006B1260(player);
    } else if (*(s32 *)(player + 0x2DE8) != 0) {
        *(s64 *)(*(s32 *)(player + 0x2EF0) + 0x38) = *(s64 *)(player + 0x2DE0);
        *(s32 *)(player + 0x2DE8) = 0;
    }
    func_L00_005EE5E8(*(s32 *)(player + 0x2EF0), player + 0x2EBC);
}
