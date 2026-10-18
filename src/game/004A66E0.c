#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004A68D8(void);
extern void func_004A6AA8(void);
extern void func_004A6AD8(void);

s32 D_0022163C = 0;
s32 D_00221640 = 0;
s32 D_00221644 = 0;
s32 D_00221648 = 0;
extern u8 D_3080A8[];
extern u8 D_3080C0[];
extern u8 D_3080D8[];
extern u8 D_3080F0[];
extern WordTable4 D_0021F6C0;

// On first use register the four blocks D_3080A8, D_3080C0, D_3080D8 and
// D_3080F0 through func_00501458 (with the callbacks func_004A68D8,
// func_004A6AA8, func_004A6AD8), each guarded by its own flag, then return word
// index of the table D_0021F6C0.
s32 func_004A66E0(s32 index) {
    WordTable4 copy;
    if (D_0022163C == 0) {
        func_00501458(D_3080A8, (void *)func_004A68D8, (void *)func_004A6AA8,
                      (void *)func_004A6AD8, 0, 0);
        D_0022163C = 1;
    }
    if (D_00221640 == 0) {
        func_00501458(D_3080C0, (void *)func_004A68D8, (void *)func_004A6AA8,
                      (void *)func_004A6AD8, 0, 0);
        D_00221640 = 1;
    }
    if (D_00221644 == 0) {
        func_00501458(D_3080D8, (void *)func_004A68D8, (void *)func_004A6AA8,
                      (void *)func_004A6AD8, 0, 0);
        D_00221644 = 1;
    }
    if (D_00221648 == 0) {
        func_00501458(D_3080F0, (void *)func_004A68D8, (void *)func_004A6AA8,
                      (void *)func_004A6AD8, 0, 0);
        D_00221648 = 1;
    }
    copy = D_0021F6C0;
    return copy.f0[index];
}
