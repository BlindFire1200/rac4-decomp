#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_0049ABE8(void);
extern void func_0049AC78(void);
extern void func_0049AD48(void);

s32 D_0022158C = 0;
s32 D_00221590 = 0;
s32 D_00221594 = 0;
s32 D_00221598 = 0;
extern u8 D_00306D60[];
extern u8 D_00306D78[];
extern u8 D_00306D90[];
extern u8 D_00306DA8[];
extern WordTable4 D_0021F630;

// On first use register the four blocks D_00306D60, D_00306D78, D_00306D90 and
// D_00306DA8 through func_00501458 (with the callbacks func_0049ABE8,
// func_0049AC78, func_0049AD48), each guarded by its own flag, then return word
// index of the table D_0021F630.
s32 func_0049A938(s32 index) {
    WordTable4 copy;
    if (D_0022158C == 0) {
        func_00501458(D_00306D60, (void *)func_0049ABE8, (void *)func_0049AC78,
                      (void *)func_0049AD48, 0, 0);
        D_0022158C = 1;
    }
    if (D_00221590 == 0) {
        func_00501458(D_00306D78, (void *)func_0049ABE8, (void *)func_0049AC78,
                      (void *)func_0049AD48, 0, 0);
        D_00221590 = 1;
    }
    if (D_00221594 == 0) {
        func_00501458(D_00306D90, (void *)func_0049ABE8, (void *)func_0049AC78,
                      (void *)func_0049AD48, 0, 0);
        D_00221594 = 1;
    }
    if (D_00221598 == 0) {
        func_00501458(D_00306DA8, (void *)func_0049ABE8, (void *)func_0049AC78,
                      (void *)func_0049AD48, 0, 0);
        D_00221598 = 1;
    }
    copy = D_0021F630;
    return copy.f0[index];
}
