#include "common.h"

typedef struct {
    u32 f0;
    u8 f4;
    u8 f5[3];
} Type1;
extern Type1 D_00270DC0[];

// Clear a byte in the indexed record.
void func_L00_005E1870(u8 *arg0) {
    D_00270DC0[*(s16 *)(arg0 + 0xE)].f4 = 0;
}
