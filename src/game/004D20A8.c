#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_004D2380(void);
extern void func_004D26D8(void);
extern void func_004D2748(void);

s32 D_002219CC = 0;
s32 D_002219D0 = 0;
s32 D_002219D4 = 0;
s32 D_002219D8 = 0;
extern u8 D_31B650[];
extern u8 D_31B668[];
extern u8 D_31B680[];
extern u8 D_31B698[];
extern WordTable4 D_0021FB18;

// On first use register the four blocks D_31B650, D_31B668, D_31B680 and
// D_31B698 through func_00501458 (with the callbacks func_004D2380,
// func_004D26D8, func_004D2748), each guarded by its own flag, then return word
// index of the table D_0021FB18.
s32 func_004D20A8(s32 index) {
    WordTable4 copy;
    if (D_002219CC == 0) {
        func_00501458(D_31B650, (void *)func_004D2380, (void *)func_004D26D8,
                      (void *)func_004D2748, 0, 0);
        D_002219CC = 1;
    }
    if (D_002219D0 == 0) {
        func_00501458(D_31B668, (void *)func_004D2380, (void *)func_004D26D8,
                      (void *)func_004D2748, 0, 0);
        D_002219D0 = 1;
    }
    if (D_002219D4 == 0) {
        func_00501458(D_31B680, (void *)func_004D2380, (void *)func_004D26D8,
                      (void *)func_004D2748, 0, 0);
        D_002219D4 = 1;
    }
    if (D_002219D8 == 0) {
        func_00501458(D_31B698, (void *)func_004D2380, (void *)func_004D26D8,
                      (void *)func_004D2748, 0, 0);
        D_002219D8 = 1;
    }
    copy = D_0021FB18;
    return copy.f0[index];
}
