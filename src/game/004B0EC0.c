#include "common.h"

typedef struct State_004B0EC0 {
    u8 pad0[8];
    u8 flag;
    u8 pad9[3];
    s32 current;
    s32 target;
} State_004B0EC0;

extern State_004B0EC0 D_3095B0;

// Adopt arg0 as the target word and raise the flag when it changed.
void func_004B0EC0(s32 arg0) {
    if (D_3095B0.target != arg0) {
        D_3095B0.target = arg0;
        D_3095B0.flag = 1;
    }
}
