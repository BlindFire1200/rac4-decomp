#include "common.h"

typedef struct {
    s32 f0;
    s32 (*f4)(void *);
} ActionCallback;

extern ActionCallback *func_L00_005DEBD0(s32, s32, s32);

// Report whether the object's target is special (0xFD/0xFE) or its table-0xE callback accepts it.
s32 func_L01_004302D0(u8 *arg0) {
    u8 *t;
    ActionCallback *cb;

    t = *(u8 **)(arg0 + 0xB8);
    if (t != 0) {
        if (t[0x20] == 0xFE) return 1;
        if (t[0x20] == 0xFD) return 1;
        cb = func_L00_005DEBD0(*(s16 *)(t + 0xBC), 0xE, 0x1C);
        if (cb == 0) return 0;
        if (cb->f4(*(void **)(arg0 + 0xB8)) != 0) return 1;
    }
    return 0;
}
