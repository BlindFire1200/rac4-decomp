/* Not matching yet: BYTES 2/184 (tools/try_func.py func_L00_007023C8 --diff). Not part of the build. */
#include "common.h"
extern s32 D_0021E6B4;
extern s32 D_0022318C;
extern u8 D_0036D330[];
extern s32 g_gp_27EB;
extern s32 g_gp_72CB;
s32 func_L00_005BC980(void *);
void func_L00_006FF348(s32);
void func_L00_0061E540(s32, void *);
void func_L00_007009A0(s32, s32, s32, s32);
void func_L00_007022E8(s32);
void func_L00_007023C8(s32 arg0) {
    s32 state;
    if (func_L00_005BC980(&D_0022318C) != 0) {
        func_L00_006FF348(g_gp_27EB);
        state = g_gp_72CB;
    } else {
        func_L00_0061E540(g_gp_27EB, D_0036D330);
        func_L00_007009A0(-1, -1, 0, -1);
        state = D_0021E6B4;
    }
    if (state != 1) {
        func_L00_007022E8(arg0);
    }
    {
        s16 *values = (s16 *)(arg0 + 0xC);
        u8 *flags = (u8 *)(arg0 + 2);
        s32 i = 9;
        do {
            i--;
            if (*flags != 0 && *values >= 0x1F5) *flags = 0;
            values++;
            flags++;
        } while (i >= 0);
    }
}
