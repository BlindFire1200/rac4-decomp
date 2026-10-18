#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004D8598(void);
extern void func_004D8658(void);
extern void func_004D86B0(void);

s32 D_00221B14 = 0;
s32 D_00221B18 = 0;
s32 D_00221B1C = 0;
s32 D_00221B20 = 0;
extern u8 D_003200E8[];
extern u8 D_00320100[];
extern u8 D_00320118[];
extern u8 D_00320130[];
extern WordTable4 D_0021FC20;

// On first use register the four blocks D_003200E8, D_00320100, D_00320118 and
// D_00320130 through func_00501458 (with the callbacks func_004D8598,
// func_004D8658, func_004D86B0), each guarded by its own flag, then return word
// index of the table D_0021FC20.
s32 func_004D8380(s32 index) {
    WordTable4 copy;
    if (D_00221B14 == 0) {
        func_00501458(D_003200E8, (void *)func_004D8598, (void *)func_004D8658,
                      (void *)func_004D86B0, 0, 0);
        D_00221B14 = 1;
    }
    if (D_00221B18 == 0) {
        func_00501458(D_00320100, (void *)func_004D8598, (void *)func_004D8658,
                      (void *)func_004D86B0, 0, 0);
        D_00221B18 = 1;
    }
    if (D_00221B1C == 0) {
        func_00501458(D_00320118, (void *)func_004D8598, (void *)func_004D8658,
                      (void *)func_004D86B0, 0, 0);
        D_00221B1C = 1;
    }
    if (D_00221B20 == 0) {
        func_00501458(D_00320130, (void *)func_004D8598, (void *)func_004D8658,
                      (void *)func_004D86B0, 0, 0);
        D_00221B20 = 1;
    }
    copy = D_0021FC20;
    return copy.f0[index];
}
