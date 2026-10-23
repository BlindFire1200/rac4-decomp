#include "common.h"

extern s8 D_3095B8[];
void func_004B0290(void);

// Run func_004B0290, then clear the byte at D_3095B8.
void func_004B01C8(void) {
    func_004B0290();
    D_3095B8[0] = 0;
}
