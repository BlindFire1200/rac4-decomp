#include "common.h"

extern void *func_00476660(void);
extern void func_00473A88(void *, u8, s32);
void func_00484670(void *arg0) {
    u8 *state = func_00476660();
    s32 mode;
    u8 first;
    u8 third;
    if (state == 0) return;
    mode = *(s32 *)(state + 0x48);
    if (*(u16 *)(state + 0x60) != 0) {
        if (mode != 6) mode = 3;
    }
    first = state[0x15];
    if (first == 0xFF) first = *(u8 *)((u8 *)arg0 + 0x20);
    if (mode == 5 || mode == 6) {
        if (state[0x16] != 0xFF) first = state[0x16];
    }
    third = state[0x17];
    if (third != 0xFF) {
        func_00473A88(arg0, first, third);
    } else {
        func_00473A88(arg0, first, -1);
    }
}
