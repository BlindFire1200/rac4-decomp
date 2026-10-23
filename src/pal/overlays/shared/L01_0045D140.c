#include "common.h"

extern void func_0047C5B8(void *);
extern void func_L01_0045AEC0(void *);
extern void func_L01_0045B5B0(void *);
extern s32 func_L01_0045C680(void *);
extern void func_L01_0056F988(void *);

// Sets the linked halfwords at +0x60E (50) and +0x610 (-1), clears +0x61E, calls func_0047C5B8,
// func_L01_0056F988 and func_L01_0045B5B0, and in state 5 (or 4 when func_L01_0045C680 agrees)
// calls func_L01_0045AEC0.
void func_L01_0045D140(u8 *arg0) {
    u8 *vars = *(u8 **)(arg0 + 0xAC);
    u8 state;

    *(s16 *)(vars + 0x60E) = 0x32;
    *(s16 *)(vars + 0x610) = -1;
    vars[0x61E] = 0;
    func_0047C5B8(arg0);
    func_L01_0056F988(arg0);
    func_L01_0045B5B0(arg0);
    state = arg0[0x67];
    if (state == 5 || (state == 4 && func_L01_0045C680(arg0) != 0)) {
        func_L01_0045AEC0(arg0);
    }
}
