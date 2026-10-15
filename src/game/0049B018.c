#include "common.h"

extern u8 D_306DC0[];
extern u8 D_003D8E68[];

/* Dispatch based on array lookup and function pointer */
void func_0049B018(s32 arg0) {
    void *ptr;
    void *ptr2;
    void (*func_ptr)(s32);
    s32 offset;
    u8 *table_entry;

    offset = arg0 * 0x3C;
    table_entry = D_306DC0 + offset;
    if (table_entry[0] != 0) {
        offset = *(s32 *)(table_entry + 0x4) * 0x10;
        ptr2 = D_003D8E68 + offset;
        func_ptr = *(void (**)(s32))(ptr2 + 0x8);
        if (func_ptr != NULL) {
            func_ptr(arg0);
        }
    }
}
