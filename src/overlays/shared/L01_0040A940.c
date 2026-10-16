#include "common.h"

extern void func_L00_005B0038(void *, void *, void *);
extern s32 func_L00_005BCA48(void *);
extern void func_L00_005DD4A0(void *);
extern void func_L00_00687FE0(void *);
extern void func_L01_00591BD8(void *, s32, s32);
extern s32 D_00222A9C[];
extern void func_L01_0040A600(void);

// State machine on the state byte at +0x20. State 0 runs func_L00_00687FE0 and
// func_L00_005BCA48 on +0xF0, then falls into state 1, which registers
// func_L01_0040A600 and moves to state 2 when func_L00_005BCA48 on +0xF2 returns
// nonzero. State 2 runs func_L00_005DD4A0.
void func_L01_0040A940(u8 *object) {
    u8 state = object[0x20];
    u8 *linked = *(u8 **)(object + 0xAC);
    void *callback;
    void *table;
    switch (state) {
    case 0:
        func_L00_00687FE0(object);
        func_L00_005BCA48(linked + 0xF0);
        /* fall through */
    case 1:
        callback = func_L01_0040A600;
        table = D_00222A9C;
        func_L00_005B0038(table, callback, object);
        if (func_L00_005BCA48(linked + 0xF2) != 0)
            func_L01_00591BD8(object, 2, -1);
        return;
    case 2:
        func_L00_005DD4A0(object);
        break;
    }
}
