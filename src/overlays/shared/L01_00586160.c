#include "common.h"

extern void *func_L00_005DEBD0(s32, s32, s32);
extern u8 *D_00222D14;
extern u8 *D_00222D2C;
extern u8 *D_0026A4F8[];

// Collects every 0x100-byte object whose type has a table-0x15 callback into D_0026A4F8.
void func_L01_00586160(void) {
    u8 *obj = D_00222D14;
    u8 **out;

    if (obj < D_00222D2C) {
        out = D_0026A4F8;
        do {
            if (func_L00_005DEBD0(*(s16 *)(obj + 0xBC), 0x15, 4) != 0) {
                *out++ = obj;
            }
            obj += 0x100;
        } while (obj < D_00222D2C);
    }
}
