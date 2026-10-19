/* Not matching yet: BYTES 113/200 (tools/try_func.py func_L00_005908F0 --diff). Not part of the build. */
#include "common.h"
typedef int u128 __attribute__((mode(TI)));
typedef struct Type1 {
    u8 pad0[0x30];
    u128 f30;
    u8 pad40[0x44];
    s16 f84;
    u8 pad86[0xE];
    s32 f94;
    u8 pad98[0xE6];
    s32 f17E;
} Type1;
extern s32 *D_002220D0;
extern u8 D_0022CA80[];
extern void func_L00_00590790(void *, s32, s32);
extern void func_L00_005BCBF0(void *, void *, s32);
void func_L00_005908F0(Type1 *arg0) {
    s32 value = arg0->f94;
    s32 index = value * 0x470;
    s32 entry = *(s32 *)((u8 *)D_002220D0 + ((s32)arg0->f84 << 5) + 0x1C);
    u8 *flag = (u8 *)(entry + 0x3C + value);
    u8 *buffer = D_0022CA80 + index;
    if (*flag != 0) {
        *flag = 0;
        arg0->f30 = *(u128 *)(buffer + 0x230);
        func_L00_005BCBF0(arg0, buffer + 0x200, 0x30);
    } else {
        u32 *state = *(u32 **)((u8 *)arg0 + 0x70);
        state[0] = 0;
        state[1] = 0;
        state[2] = 0;
        state[3] = 0;
        state[4] = 0;
        state[5] = 0;
        state[6] = 0;
        func_L00_00590790(arg0, index, value);
    }
    *(u8 *)(entry + 0x38 + value) = 0;
    *(u16 *)((u8 *)arg0 + 0x7E) = 0;
}
