#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004BD5B8(void);
extern void func_004BD6F0(void);
extern void func_004BD780(void);

s32 D_0022182C = 0;
s32 D_00221830 = 0;
s32 D_00221834 = 0;
s32 D_00221838 = 0;
extern u8 D_0030B028[];
extern u8 D_0030B040[];
extern u8 D_0030B058[];
extern u8 D_0030B070[];
extern WordTable4 D_0021F940;

// On first use register the four blocks D_0030B028, D_0030B040, D_0030B058 and
// D_0030B070 through func_00501458 (with the callbacks func_004BD5B8,
// func_004BD6F0, func_004BD780), each guarded by its own flag, then return word
// index of the table D_0021F940.
s32 func_004BD468(s32 index) {
    WordTable4 copy;
    if (D_0022182C == 0) {
        func_00501458(D_0030B028, (void *)func_004BD5B8, (void *)func_004BD6F0,
                      (void *)func_004BD780, 0, 0);
        D_0022182C = 1;
    }
    if (D_00221830 == 0) {
        func_00501458(D_0030B040, (void *)func_004BD5B8, (void *)func_004BD6F0,
                      (void *)func_004BD780, 0, 0);
        D_00221830 = 1;
    }
    if (D_00221834 == 0) {
        func_00501458(D_0030B058, (void *)func_004BD5B8, (void *)func_004BD6F0,
                      (void *)func_004BD780, 0, 0);
        D_00221834 = 1;
    }
    if (D_00221838 == 0) {
        func_00501458(D_0030B070, (void *)func_004BD5B8, (void *)func_004BD6F0,
                      (void *)func_004BD780, 0, 0);
        D_00221838 = 1;
    }
    copy = D_0021F940;
    return copy.f0[index];
}
