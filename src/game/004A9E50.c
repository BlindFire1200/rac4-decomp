#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004A9FA0(void);
extern void func_004AA068(void);
extern void func_004AA0B0(void);

s32 D_00221660 = 0;
s32 D_00221664 = 0;
s32 D_00221668 = 0;
s32 D_0022166C = 0;
extern u8 D_00308400[];
extern u8 D_00308418[];
extern u8 D_00308430[];
extern u8 D_00308448[];
extern WordTable4 D_0021F6F0;

// On first use register the four blocks D_00308400, D_00308418, D_00308430 and
// D_00308448 through func_00501458 (with the callbacks func_004A9FA0,
// func_004AA068, func_004AA0B0), each guarded by its own flag, then return word
// index of the table D_0021F6F0.
s32 func_004A9E50(s32 index) {
    WordTable4 copy;
    if (D_00221660 == 0) {
        func_00501458(D_00308400, (void *)func_004A9FA0, (void *)func_004AA068,
                      (void *)func_004AA0B0, 0, 0);
        D_00221660 = 1;
    }
    if (D_00221664 == 0) {
        func_00501458(D_00308418, (void *)func_004A9FA0, (void *)func_004AA068,
                      (void *)func_004AA0B0, 0, 0);
        D_00221664 = 1;
    }
    if (D_00221668 == 0) {
        func_00501458(D_00308430, (void *)func_004A9FA0, (void *)func_004AA068,
                      (void *)func_004AA0B0, 0, 0);
        D_00221668 = 1;
    }
    if (D_0022166C == 0) {
        func_00501458(D_00308448, (void *)func_004A9FA0, (void *)func_004AA068,
                      (void *)func_004AA0B0, 0, 0);
        D_0022166C = 1;
    }
    copy = D_0021F6F0;
    return copy.f0[index];
}
