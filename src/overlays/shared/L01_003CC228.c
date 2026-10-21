#include "common.h"

typedef struct Type1 {
    void *f0;
    s32 (*f4)(s32);
    s32 (*f8)(void);
} Type1;

extern Type1 *func_L00_005DEBD0(s32, s32, s32);

static inline s32 func_L01_003CC228_f4(s32 r) {
    Type1 *cb = func_L00_005DEBD0(0x208A, 0x14, 8);
    if (cb == NULL || cb->f4 == NULL) {
        return 1;
    }
    return cb->f4(r);
}

// Runs callback +8 of entry (0x208A, 0, 0x14); if it returns nonzero, passes that to callback +4 of entry (0x208A, 0x14, 8).
s32 func_L01_003CC228(void) {
    Type1 *cb;
    s32 r;

    cb = func_L00_005DEBD0(0x208A, 0, 0x14);
    if (cb == NULL || cb->f8 == NULL) {
        return 1;
    }
    r = cb->f8();
    if (r == 0) {
        return 1;
    }
    return func_L01_003CC228_f4(r);
}
