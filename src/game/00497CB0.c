#include "common.h"

extern void func_00497E10(s32);
extern void func_0049A300(s32);
extern void func_0049A918(void);
extern void func_0049ABB8(s32);
extern void func_004B2260(s32);
extern u8 D_2F32B8[];
void func_00497CB0(s32 arg0) {
    s32 state = *(s32 *)(D_2F32B8 + arg0 * 0x54);
    switch (state) {
    case 0: func_00497E10(arg0); break;
    case 1: func_0049A300(arg0); break;
    case 2: func_0049ABB8(arg0); break;
    case 3: func_0049A918(); func_00497E10(0); break;
    case 4: func_004B2260(arg0); break;
    }
}
