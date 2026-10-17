#include "common.h"
extern void (*D_21DBE8)(void);
void func_0015EF00(void *arg0) {
    if (D_21DBE8 != 0) {
        D_21DBE8();
        *(s16 *)((u8 *)arg0 + 0xE) = 1;
        return;
    }
    *(s16 *)((u8 *)arg0 + 0xE) = 0;
}
