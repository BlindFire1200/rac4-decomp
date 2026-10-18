#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004AD888(void);
extern void func_004AD8E8(void);
extern void func_004AD918(void);

s32 D_0022167C = 0;
s32 D_00221680 = 0;
s32 D_00221684 = 0;
s32 D_00221688 = 0;
extern u8 D_309140[];
extern u8 D_309158[];
extern u8 D_309170[];
extern u8 D_309188[];
extern WordTable4 D_0021F700;

// On first use register the four blocks D_309140, D_309158, D_309170 and
// D_309188 through func_00501458 (with the callbacks func_004AD888,
// func_004AD8E8, func_004AD918), each guarded by its own flag, then return word
// index of the table D_0021F700.
s32 func_004AD690(s32 index) {
    WordTable4 copy;
    if (D_0022167C == 0) {
        func_00501458(D_309140, (void *)func_004AD888, (void *)func_004AD8E8,
                      (void *)func_004AD918, 0, 0);
        D_0022167C = 1;
    }
    if (D_00221680 == 0) {
        func_00501458(D_309158, (void *)func_004AD888, (void *)func_004AD8E8,
                      (void *)func_004AD918, 0, 0);
        D_00221680 = 1;
    }
    if (D_00221684 == 0) {
        func_00501458(D_309170, (void *)func_004AD888, (void *)func_004AD8E8,
                      (void *)func_004AD918, 0, 0);
        D_00221684 = 1;
    }
    if (D_00221688 == 0) {
        func_00501458(D_309188, (void *)func_004AD888, (void *)func_004AD8E8,
                      (void *)func_004AD918, 0, 0);
        D_00221688 = 1;
    }
    copy = D_0021F700;
    return copy.f0[index];
}
