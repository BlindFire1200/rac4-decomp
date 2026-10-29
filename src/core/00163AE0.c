#include "common.h"

/* Calls func_001596D8 when the pointer at +4 leads to a nonzero word, then returns 1. */
extern void func_001596D8(void);

s32 func_00163AE0(void *arg0) {
    void *temp;

    temp = *(void **)((u8 *)arg0 + 0x4);
    if (*(s32 *)temp != 0) {
        func_001596D8();
    }
    return 1;
}
