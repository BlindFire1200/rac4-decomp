#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern s32 func_L00_005E7F18(u128, u128, u128, u128, void *);

s32 func_L01_005D68E0(u128 *records, u128 arg1, u128 arg2) {
    s32 count = 0;
    s32 index = 1;
    u128 temp;
    u128 *record;
    if (index < *(s32 *)records) {
        record = (u128 *)((u8 *)records + 0x10);
        do {
            if (func_L00_005E7F18(arg1, arg2, record[0], record[1], &temp) != 0) count++;
            index++;
            record++;
        } while (index < *(s32 *)records);
    }
    return (count ^ 1) & 1;
}
