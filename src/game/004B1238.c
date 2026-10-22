#include "common.h"

extern s8 D_309688[];
void func_004B1260(void);

// Run func_004B1260, then clear the byte at D_309688.
void func_004B1238(void) {
    func_004B1260();
    D_309688[0] = 0;
}
