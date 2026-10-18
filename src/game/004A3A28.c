#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004A3B78(void);
extern void func_004A4578(void);
extern void func_004A45F8(void);

s32 D_002215FC = 0;
s32 D_00221600 = 0;
s32 D_00221604 = 0;
s32 D_00221608 = 0;
extern u8 D_307A08[];
extern u8 D_307A20[];
extern u8 D_307A38[];
extern u8 D_307A50[];
extern WordTable4 D_0021F680;

// On first use register the four blocks D_307A08, D_307A20, D_307A38 and
// D_307A50 through func_00501458 (with the callbacks func_004A3B78,
// func_004A4578, func_004A45F8), each guarded by its own flag, then return word
// index of the table D_0021F680.
s32 func_004A3A28(s32 index) {
    WordTable4 copy;
    if (D_002215FC == 0) {
        func_00501458(D_307A08, (void *)func_004A3B78, (void *)func_004A4578,
                      (void *)func_004A45F8, 0, 0);
        D_002215FC = 1;
    }
    if (D_00221600 == 0) {
        func_00501458(D_307A20, (void *)func_004A3B78, (void *)func_004A4578,
                      (void *)func_004A45F8, 0, 0);
        D_00221600 = 1;
    }
    if (D_00221604 == 0) {
        func_00501458(D_307A38, (void *)func_004A3B78, (void *)func_004A4578,
                      (void *)func_004A45F8, 0, 0);
        D_00221604 = 1;
    }
    if (D_00221608 == 0) {
        func_00501458(D_307A50, (void *)func_004A3B78, (void *)func_004A4578,
                      (void *)func_004A45F8, 0, 0);
        D_00221608 = 1;
    }
    copy = D_0021F680;
    return copy.f0[index];
}
