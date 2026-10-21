#include "common.h"

extern u8 D_306DC0[];
extern u8 D_003D8E68[];

typedef struct {
    u8 pad0[0xC];
    void (*func)(s32);
} Type1;

void func_0049B078(s32 arg0) {
    s32 offset;
    u8 *ptr;
    s32 field4;
    Type1 *entry;
    void (*func_ptr)(s32);

    offset = arg0 * 0x3C;
    ptr = D_306DC0 + offset;

    if (*ptr != 0) {
        field4 = *(s32 *)(ptr + 4);
        entry = (Type1 *)(D_003D8E68 + (field4 << 4));
        func_ptr = entry->func;
        if (func_ptr != NULL) {
            func_ptr(arg0);
        }
    }
}
