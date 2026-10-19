#include "common.h"

void func_0049C200(s32, s32);
void func_0049C248(s32, s32);
void func_0049C328(s32, s32, s32);

// For slots 0 to count - 1 run func_0049C328 (1) and func_0049C200; for the
// remaining slots up to 4 run func_0049C248.
void func_0049C290(s32 param, s32 count) {
    s32 tmp_a;
    s32 tmp_b;
    s32 slot_a;
    s32 slot_b;

    slot_a = 0;
    if (count > 0) {
        tmp_a = 0;
        do {
            func_0049C328(param, slot_a, 1);
            func_0049C200(param, slot_a);
            slot_a += 1;
            tmp_a = slot_a;
        } while (slot_a < count);
    }
    slot_b = count;
    if (slot_b < 4) {
        tmp_b = slot_b;
        do {
            func_0049C248(param, tmp_b);
            slot_b += 1;
            tmp_b = slot_b;
        } while (slot_b < 4);
    }
}
