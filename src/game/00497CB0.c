#include "common.h"

extern void func_00497E10(s32);
extern void func_0049A300(s32);
extern void func_0049A918(void);
extern void func_0049ABB8(s32);
extern void func_004B2260(s32);
extern u8 D_2F32B8[];

// Run the handler for the state word of the entry (0x54 bytes each, D_2F32B8):
// states 0-4 map to func_00497E10, func_0049A300, func_0049ABB8, func_0049A918
// plus func_00497E10(0), and func_004B2260.
void func_00497CB0(s32 index) {
    s32 state = *(s32 *)(D_2F32B8 + index * 0x54);
    switch (state) {
    case 0: func_00497E10(index); break;
    case 1: func_0049A300(index); break;
    case 2: func_0049ABB8(index); break;
    case 3: func_0049A918(); func_00497E10(0); break;
    case 4: func_004B2260(index); break;
    }
}
