#include "common.h"

// Raise the +0x277 flag.
void func_L00_00764188(u8 *player) {
    player[0x277] = 1;
}
