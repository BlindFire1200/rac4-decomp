#include "common.h"

extern void (*D_21DBE8)(void);

// If the callback D_21DBE8 is set, call it and set the halfword at +0xE to 1;
// otherwise set that halfword to 0.
void func_0015EF00(void *object) {
    if (D_21DBE8 != 0) {
        D_21DBE8();
        *(s16 *)((u8 *)object + 0xE) = 1;
        return;
    }
    *(s16 *)((u8 *)object + 0xE) = 0;
}
