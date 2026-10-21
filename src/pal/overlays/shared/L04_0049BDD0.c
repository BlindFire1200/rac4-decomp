#include "common.h"

void func_L01_006A3A58(void *);

// When the linked entry's +0x2E0 byte is zero and its +0x2B8 pointer is set:
// store 0x13 in the linked object's +0x726 byte and run func_L01_006A3A58 on
// that pointer.
void func_L04_0049BDD0(u8 *owner) {
    u8 *object = *(u8 **)(owner + 0xAC);
    u8 *entry = *(u8 **)(object + 0x2D0);
    if (entry[0x2E0] == 0 && *(void **)(entry + 0x2B8) != 0) {
        object[0x726] = 0x13;
        func_L01_006A3A58(*(void **)(entry + 0x2B8));
    }
}
