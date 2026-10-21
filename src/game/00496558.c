#include "common.h"

extern s32 func_004FF930(s32 *);
extern s32 D_2A1CC0[];

volatile s32 D_0022152C = 0;

// Initialize array if not yet done
void *func_00496558(s32 arg0) {
    s32 *ptr;
    s32 i;

    if (D_0022152C == 0) {
        ptr = D_2A1CC0;
        i = 4;
        do {
            func_004FF930(ptr);
            ptr += 1;
            i -= 1;
        } while (i != -1);
        D_0022152C = 1;
    }
    return (void *)&D_2A1CC0[arg0];
}
