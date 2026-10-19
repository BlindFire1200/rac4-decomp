#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004D7488(void);
extern void func_004D75A8(void);
extern void func_004D7628(void);

s32 D_00221AE4 = 0;
s32 D_00221AE8 = 0;
s32 D_00221AEC = 0;
s32 D_00221AF0 = 0;
extern u8 D_31E7F8[];
extern u8 D_31E810[];
extern u8 D_31E828[];
extern u8 D_31E840[];
extern WordTable4 D_0021FC00;

// On first use register the four blocks D_31E7F8, D_31E810, D_31E828 and
// D_31E840 through func_00501458 (with the callbacks func_004D7488,
// func_004D75A8, func_004D7628), each guarded by its own flag, then return word
// index of the table D_0021FC00.
s32 func_004D7250(s32 index) {
    WordTable4 copy;
    if (D_00221AE4 == 0) {
        func_00501458(D_31E7F8, (void *)func_004D7488, (void *)func_004D75A8,
                      (void *)func_004D7628, 0, 0);
        D_00221AE4 = 1;
    }
    if (D_00221AE8 == 0) {
        func_00501458(D_31E810, (void *)func_004D7488, (void *)func_004D75A8,
                      (void *)func_004D7628, 0, 0);
        D_00221AE8 = 1;
    }
    if (D_00221AEC == 0) {
        func_00501458(D_31E828, (void *)func_004D7488, (void *)func_004D75A8,
                      (void *)func_004D7628, 0, 0);
        D_00221AEC = 1;
    }
    if (D_00221AF0 == 0) {
        func_00501458(D_31E840, (void *)func_004D7488, (void *)func_004D75A8,
                      (void *)func_004D7628, 0, 0);
        D_00221AF0 = 1;
    }
    copy = D_0021FC00;
    return copy.f0[index];
}
