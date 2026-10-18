#include "common.h"

u8 *D_002206AC = 0;
extern void func_L00_006EC290(void *entry);

void func_L41_00611478(u8 *entry) {
    u8 *p;
    u8 *prev = 0;
    for (p = D_002206AC; p != 0; p = *(u8 **)(p + 0x58)) {
        if (p == entry) {
            if (prev == 0) {
                D_002206AC = *(u8 **)(entry + 0x58);
            } else {
                *(u8 **)(prev + 0x58) = *(u8 **)(entry + 0x58);
            }
            *(u8 **)(entry + 0x58) = 0;
            func_L00_006EC290(entry);
            break;
        }
        prev = p;
    }
}
