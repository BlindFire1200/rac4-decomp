#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004A54D8(void);
extern void func_004A5558(void);
extern void func_004A5588(void);

s32 D_00221614 = 0;
s32 D_00221618 = 0;
s32 D_0022161C = 0;
s32 D_00221620 = 0;
extern u8 D_00307F08[];
extern u8 D_00307F20[];
extern u8 D_00307F38[];
extern u8 D_00307F50[];
extern WordTable4 D_0021F6A8;

// On first use register the four blocks D_00307F08, D_00307F20, D_00307F38 and
// D_00307F50 through func_00501458 (with the callbacks func_004A54D8,
// func_004A5558, func_004A5588), each guarded by its own flag, then return word
// index of the table D_0021F6A8.
s32 func_004A52E0(s32 index) {
    WordTable4 copy;
    if (D_00221614 == 0) {
        func_00501458(D_00307F08, (void *)func_004A54D8, (void *)func_004A5558,
                      (void *)func_004A5588, 0, 0);
        D_00221614 = 1;
    }
    if (D_00221618 == 0) {
        func_00501458(D_00307F20, (void *)func_004A54D8, (void *)func_004A5558,
                      (void *)func_004A5588, 0, 0);
        D_00221618 = 1;
    }
    if (D_0022161C == 0) {
        func_00501458(D_00307F38, (void *)func_004A54D8, (void *)func_004A5558,
                      (void *)func_004A5588, 0, 0);
        D_0022161C = 1;
    }
    if (D_00221620 == 0) {
        func_00501458(D_00307F50, (void *)func_004A54D8, (void *)func_004A5558,
                      (void *)func_004A5588, 0, 0);
        D_00221620 = 1;
    }
    copy = D_0021F6A8;
    return copy.f0[index];
}
