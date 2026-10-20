#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004CE660(void);
extern void func_004CEAB0(void);
extern void func_004CEB68(void);

s32 D_0022194C = 0;
s32 D_00221950 = 0;
s32 D_00221954 = 0;
s32 D_00221958 = 0;
extern u8 D_0030F7C0[];
extern u8 D_0030F7D8[];
extern u8 D_0030F7F0[];
extern u8 D_0030F808[];
extern WordTable4 D_0021FAB0;

// On first use register the four blocks D_0030F7C0, D_0030F7D8, D_0030F7F0 and
// D_0030F808 through func_00501458 (with the callbacks func_004CE660,
// func_004CEAB0, func_004CEB68), each guarded by its own flag, then return word
// index of the table D_0021FAB0.
s32 func_004CE448(s32 index) {
    WordTable4 copy;
    if (D_0022194C == 0) {
        func_00501458(D_0030F7C0, (void *)func_004CE660, (void *)func_004CEAB0,
                      (void *)func_004CEB68, 0, 0);
        D_0022194C = 1;
    }
    if (D_00221950 == 0) {
        func_00501458(D_0030F7D8, (void *)func_004CE660, (void *)func_004CEAB0,
                      (void *)func_004CEB68, 0, 0);
        D_00221950 = 1;
    }
    if (D_00221954 == 0) {
        func_00501458(D_0030F7F0, (void *)func_004CE660, (void *)func_004CEAB0,
                      (void *)func_004CEB68, 0, 0);
        D_00221954 = 1;
    }
    if (D_00221958 == 0) {
        func_00501458(D_0030F808, (void *)func_004CE660, (void *)func_004CEAB0,
                      (void *)func_004CEB68, 0, 0);
        D_00221958 = 1;
    }
    copy = D_0021FAB0;
    return copy.f0[index];
}
