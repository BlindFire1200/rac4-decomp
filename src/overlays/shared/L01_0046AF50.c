#include "common.h"

// Return 1 when the +0x2B0 link of the object's +0x2EF4 item has type 0x263E or
// 0x20AE, otherwise 0.
int func_L01_0046AF50(int unused, unsigned char *object) {
    unsigned char *item;
    int result = 0;
    item = *(unsigned char **)(object + 0x2EF4);
    if (item != 0) {
        item = *(unsigned char **)(item + 0x2B0);
        if (item != 0) {
            int id = *(short *)(item + 0xBC);
            if (id == 0x263E || id == 0x20AE) result = 1;
        }
    }
    return result;
}
