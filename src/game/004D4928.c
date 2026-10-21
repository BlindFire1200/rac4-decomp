#include "common.h"

extern void func_0046D668(void);
extern s32 func_0046D820(s32);
extern void func_00497980(s32);
extern void func_004D5BB0(s32, s32, s32);
extern void func_004D5BF0(s32, s32);
extern void func_004E19D8(s32, s32);

extern s32 D_31B9B8[];

/* Small globals accessed through $gp */
s32 D_0021FBB4 = 0;
s32 D_0021FBB0 = 0;

/* Initialize game state. */
void func_004D4928(void) {
    s32 val0;
    s32 val1;

    val0 = func_0046D820(0);
    val1 = func_0046D820(1);

    if ((val0 != 0) && (val1 != 0)) {
        func_004D5BB0(val0, val1, D_0021FBB4);
        func_004D5BF0(val0, D_0021FBB0);
    }

    D_31B9B8[0] = 1;
    func_00497980(6);
    func_004E19D8(0x1E, 0);
    func_0046D668();
}
