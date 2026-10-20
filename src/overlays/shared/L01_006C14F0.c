#include "common.h"

void func_00633050(s32);
void func_006330A8(s32);
s32 func_L00_005C88C0();
s32 func_L00_00678C08(s32);
s32 func_L00_00678C58(s32);
s32 func_L00_00678CA8(s32);
s32 func_L00_00678CC0();
void func_L01_00633018(s32);
void func_L01_00633030(s32);
void func_L01_00633070(s32);

/* Grant each item id listed in an 8-byte record the player does not have yet. */
void func_L01_006C14F0(u8 *p) {
    s32 t3, t6;
    if (p[0] != 0 && func_L00_00678C08(p[0]) == 0) func_L01_00633030(p[0]);
    if (p[1] != 0 && func_L00_00678CA8(p[1]) == 0) func_L01_00633070(p[1]);
    if (p[2] != 0 && func_L00_00678CA8(p[2]) == 0) func_L01_00633070(p[2]);
    t3 = p[3];
    if (func_L00_00678CC0() < t3) func_006330A8(p[3]);
    if (p[4] != 0 && func_L00_00678C58(p[4]) == 0) func_L01_00633018(p[4]);
    if (p[5] != 0 && func_L00_005C88C0() != 0) func_00633050(p[5]);
    t6 = p[6];
    if (func_L00_00678CC0() < t6 && func_L00_005C88C0() != 0) func_006330A8(p[6]);
    if (p[7] != 0 && func_L00_00678CA8(p[7]) == 0 && func_L00_005C88C0() != 0) func_L01_00633070(p[7]);
}
