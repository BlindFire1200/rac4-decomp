#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern s32 func_L00_005E7F18(u128, u128, u128, u128, void *);

// Walk the 16-byte points after the header (the point count is the first word)
// and count the consecutive pairs that func_L00_005E7F18 accepts against vec_a
// and vec_b; return 1 when the count is even, 0 when it is odd.
s32 func_L01_005D68E0(u128 *records, u128 vec_a, u128 vec_b) {
    s32 count = 0;
    s32 index = 1;
    u128 temp;
    u128 *record;
    if (index < *(s32 *)records) {
        record = (u128 *)((u8 *)records + 0x10);
        do {
            if (func_L00_005E7F18(vec_a, vec_b, record[0], record[1], &temp) != 0) count++;
            index++;
            record++;
        } while (index < *(s32 *)records);
    }
    return (count ^ 1) & 1;
}
