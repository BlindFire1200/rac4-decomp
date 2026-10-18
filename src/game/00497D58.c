#include "common.h"

extern u8 D_2F32B8[];
extern void func_0049A2A0(s32);
extern void func_0049A8D8(void);
extern void func_0049AB48(s32);
extern void func_0049C290(s32, s32);
extern void func_0049D280(s32, s32);
extern void func_004B21C0(s32);

void func_00497D58(s32 index) {
    switch (*(s32 *)(D_2F32B8 + index * 0x54)) {
    case 0:
        func_0049C290(index, 0);
        func_0049D280(index, 0);
        break;
    case 1:
        func_0049A2A0(index);
        break;
    case 2:
        func_0049AB48(index);
        break;
    case 3:
        func_0049A8D8();
        break;
    case 4:
        func_004B21C0(index);
        break;
    }
}
