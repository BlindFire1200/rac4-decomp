#include "common.h"

extern s32 func_00453CE8(void *);
extern void func_0046C6B0(void *);
extern void func_00474368(void *, s32, s32);
extern void func_L01_004540C0(void *);
extern void func_L01_004543C0(void *);
extern void func_L01_004548E0(void *);

// When the linked vars exist and their +0x10 word is set: in state 0, sets +0x14 to 50 the first
// time (bit 0 of +0xBE), runs three update calls and calls func_00474368(arg0, 1, -1) once
// func_00453CE8 on +0x14 returns non-zero; in state 1, calls func_0046C6B0.
void func_L01_00453FF0(u8 *arg0) {
    u8 *vars = *(u8 **)(arg0 + 0xAC);

    if (vars != NULL && *(s32 *)(vars + 0x10) != 0) {
        switch (arg0[0x20]) {
        case 0: {
            s32 first;
            u8 flags = arg0[0xBE];
            if ((flags ^ 1) & 1) {
                first = 1;
                arg0[0xBE] = flags | 1;
            } else {
                first = 0;
            }
            if (first != 0) {
                *(s32 *)(vars + 0x14) = 0x32;
            }
            func_L01_004540C0(arg0);
            func_L01_004548E0(arg0);
            func_L01_004543C0(arg0);
            if (func_00453CE8(vars + 0x14) != 0) {
                func_00474368(arg0, 1, -1);
            }
            break;
        }
        case 1:
            func_0046C6B0(arg0);
            break;
        }
    }
}
