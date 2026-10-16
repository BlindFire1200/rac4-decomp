#include "common.h"
extern void *func_L00_005F2FB8(void);
extern s32 D_0021E824;
extern s32 D_0021E828;
extern s16 D_0024AD4C[];
extern s32 D_0021DDB8;

void func_L01_0050BE88(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    u8 *state = func_L00_005F2FB8();
    if (D_0021E824 == 0 && D_0021E828 == 0 && state[3] != 0 && D_0024AD4C[0] == 0 &&
        (*(u32 *)(state + 0x1E0) & 1) == 0) {
        s32 counter = *(s32 *)(linked + 0x81C) + 1;
        *(s32 *)(linked + 0x81C) = counter;
        if (counter == 2) {
            *(s32 *)(state + 0x18) = D_0021DDB8;
            *(s32 *)(linked + 0x810) = D_0021DDB8;
        }
    }
}
