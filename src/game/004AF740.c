#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004AF998(void);
extern void func_004AF9B8(void);
extern void func_004AF9E8(void);

s32 D_002216CC = 0;
s32 D_002216D0 = 0;
s32 D_002216D4 = 0;
s32 D_002216D8 = 0;
extern u8 D_309368[];
extern u8 D_309380[];
extern u8 D_309398[];
extern u8 D_3093B0[];
extern WordTable4 D_0021F750;

// On first use register the four blocks D_309368, D_309380, D_309398 and
// D_3093B0 through func_00501458 (with the callbacks func_004AF998,
// func_004AF9B8, func_004AF9E8), each guarded by its own flag, then return word
// index of the table D_0021F750.
s32 func_004AF740(s32 index) {
    WordTable4 copy;
    if (D_002216CC == 0) {
        func_00501458(D_309368, (void *)func_004AF998, (void *)func_004AF9B8,
                      (void *)func_004AF9E8, 0, 0);
        D_002216CC = 1;
    }
    if (D_002216D0 == 0) {
        func_00501458(D_309380, (void *)func_004AF998, (void *)func_004AF9B8,
                      (void *)func_004AF9E8, 0, 0);
        D_002216D0 = 1;
    }
    if (D_002216D4 == 0) {
        func_00501458(D_309398, (void *)func_004AF998, (void *)func_004AF9B8,
                      (void *)func_004AF9E8, 0, 0);
        D_002216D4 = 1;
    }
    if (D_002216D8 == 0) {
        func_00501458(D_3093B0, (void *)func_004AF998, (void *)func_004AF9B8,
                      (void *)func_004AF9E8, 0, 0);
        D_002216D8 = 1;
    }
    copy = D_0021F750;
    return copy.f0[index];
}
