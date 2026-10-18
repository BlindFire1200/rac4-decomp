#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004B9BE8(void);
extern void func_004B9DF8(void);
extern void func_004B9EB0(void);

s32 D_002217CC = 0;
s32 D_002217D0 = 0;
s32 D_002217D4 = 0;
s32 D_002217D8 = 0;
extern u8 D_30A200[];
extern u8 D_30A218[];
extern u8 D_30A230[];
extern u8 D_30A248[];
extern WordTable4 D_0021F8C0;

// On first use register the four blocks D_30A200, D_30A218, D_30A230 and
// D_30A248 through func_00501458 (with the callbacks func_004B9BE8,
// func_004B9DF8, func_004B9EB0), each guarded by its own flag, then return word
// index of the table D_0021F8C0.
s32 func_004B99D0(s32 index) {
    WordTable4 copy;
    if (D_002217CC == 0) {
        func_00501458(D_30A200, (void *)func_004B9BE8, (void *)func_004B9DF8,
                      (void *)func_004B9EB0, 0, 0);
        D_002217CC = 1;
    }
    if (D_002217D0 == 0) {
        func_00501458(D_30A218, (void *)func_004B9BE8, (void *)func_004B9DF8,
                      (void *)func_004B9EB0, 0, 0);
        D_002217D0 = 1;
    }
    if (D_002217D4 == 0) {
        func_00501458(D_30A230, (void *)func_004B9BE8, (void *)func_004B9DF8,
                      (void *)func_004B9EB0, 0, 0);
        D_002217D4 = 1;
    }
    if (D_002217D8 == 0) {
        func_00501458(D_30A248, (void *)func_004B9BE8, (void *)func_004B9DF8,
                      (void *)func_004B9EB0, 0, 0);
        D_002217D8 = 1;
    }
    copy = D_0021F8C0;
    return copy.f0[index];
}
