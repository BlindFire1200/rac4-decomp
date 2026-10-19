#include "common.h"

// Map a kind id to its group 0-4 (-1 when the id is in none of the lists).
s32 func_004BFA60(u32 kind) {
    s32 group;
    group = -1;
    if (kind < 2 || kind == 8 || kind == 0x25 || kind == 0xA || kind == 0xB) group = 0;
    else if (kind == 2 || kind == 13 || kind == 9 || kind == 15 || kind == 12 || kind == 14) group = 1;
    else if (kind == 3 || kind == 17 || kind == 18 || kind == 23 || kind == 16 || kind == 19 || kind == 20) group = 2;
    else if (kind == 4 || kind == 21 || kind == 25 || kind == 38 || kind == 22 || kind == 24) group = 3;
    else if (kind == 5 || kind == 28 || kind == 34 || kind == 39 || kind == 26 || kind == 36) group = 4;
    return group;
}
