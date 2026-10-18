#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_0049A438(void);

s32 D_00221554 = 0;
s32 D_00221558 = 0;
s32 D_0022155C = 0;
s32 D_00221560 = 0;
extern u8 D_306C60[];
extern u8 D_306C78[];
extern u8 D_306C90[];
extern u8 D_306CA8[];
extern WordTable4 D_0021F608;

// On first use register the four blocks D_306C60, D_306C78, D_306C90 and
// D_306CA8 through func_00501458 (with the callback func_0049A438), each
// guarded by its own flag, then return word index of the table D_0021F608.
s32 func_00499F38(s32 index) {
    WordTable4 copy;
    if (D_00221554 == 0) {
        func_00501458(D_306C60, 0, 0, (void *)func_0049A438, 0, 0);
        D_00221554 = 1;
    }
    if (D_00221558 == 0) {
        func_00501458(D_306C78, 0, 0, (void *)func_0049A438, 0, 0);
        D_00221558 = 1;
    }
    if (D_0022155C == 0) {
        func_00501458(D_306C90, 0, 0, (void *)func_0049A438, 0, 0);
        D_0022155C = 1;
    }
    if (D_00221560 == 0) {
        func_00501458(D_306CA8, 0, 0, (void *)func_0049A438, 0, 0);
        D_00221560 = 1;
    }
    copy = D_0021F608;
    return copy.f0[index];
}
