#include "common.h"

s32 func_004CA7A8();
s32 func_004D30A0();
s32 func_L01_004CFF58();
typedef struct { u8 pad[0x594]; u8 f594[0x14]; u8 f5A8[0x14]; } Type1;
extern Type1 D_0038EAC0[];

// Check whether the linked object's attachments at +0x28/+0x2C and +0x2C0/+0x2C4 all pass their type-specific tests.
s32 func_L01_004CEE80(u8 *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    s32 result = 1;
    u8 *a;
    u8 *b;
    s16 type;

    if (linked[0x2DD] != 0 || func_004CA7A8() != 0) {
        return 0;
    }
    a = *(u8 **)(linked + 0x28);
    if (a != 0 && *(void **)(linked + 0x2C) != 0) {
        if (linked[0x2E4] != 10 && D_0038EAC0->f5A8[linked[0x2E4]] == 1) {
            type = *(s16 *)(a + 0xBC);
            if (type == 0x20C7 || type == 0x2107 || type == 0x2557) {
                if (!func_L01_004CFF58(*(void **)(linked + 0x28))) result = 0;
                if (!func_L01_004CFF58(*(void **)(linked + 0x2C))) result = 0;
            } else {
                result = 0;
            }
        } else {
            type = *(s16 *)(a + 0xBC);
            if (type == 0x1A63 || type == 0x2555 || type == 0x2556) {
                if (!func_004D30A0(*(void **)(linked + 0x28))) result = 0;
                if (!func_004D30A0(*(void **)(linked + 0x2C))) result = 0;
            }
        }
    } else {
        result = 0;
    }
    b = *(u8 **)(linked + 0x2C0);
    if (b != 0 && linked[0x2E4] != 10 && D_0038EAC0->f594[linked[0x2E4]] == 1) {
        type = *(s16 *)(b + 0xBC);
        if (type == 0x1A63 || type == 0x2555 || type == 0x2556) {
            if (!func_004D30A0(*(void **)(linked + 0x2C0))) result = 0;
            if (!func_004D30A0(*(void **)(linked + 0x2C4))) result = 0;
        }
    }
    return result;
}
