#include "common.h"

extern void func_005AF4B8(void);

typedef struct {
    u8 f00[0x20];
    u8 f20;
} Type1;

/* Checks the state byte at offset 0x20: states 11, 9 and 10 do nothing, any other state calls func_005AF4B8; always returns 0. */
s32 func_L01_004C3A18(Type1 *arg0) {
    u8 t = arg0->f20;

    if (t == 11) {
        return 0;
    }
    if (t == 9) {
        return 0;
    }
    if (t == 10) {
        return 0;
    }
    func_005AF4B8();
    return 0;
}
