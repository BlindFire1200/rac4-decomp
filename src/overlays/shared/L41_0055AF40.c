#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8[5];
    s32 f1C;
    s32 f20;
    s32 f24[4];
} Type1;

extern void func_L00_00638070(s32 **a, s32 **b);
extern s8 D_00310178[];
extern Type1 D_00310190[];

// Pick the slot whose owner matches arg0 and reset it with arg1 and arg2.
void func_L41_0055AF40(s32 arg0, s32 arg1, s32 arg2) {
    s32 *ptrs[2];

    func_L00_00638070(&ptrs[0], &ptrs[1]);
    if (*ptrs[0] == arg0) {
        arg0 = 0;
    } else if (*ptrs[1] == arg0) {
        arg0 = 1;
    }
    D_00310178[0] = 1;
    D_00310190[arg0].f1C = arg1;
    D_00310190[arg0].f20 = -1;
    D_00310190[arg0].f24[arg1] = arg2;
    D_00310190[arg0].f4 = 0;
}
