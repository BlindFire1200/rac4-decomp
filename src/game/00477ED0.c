#include "common.h"

typedef int u128 __attribute__((mode(TI)));

s32 func_004740C8(void *, void *, s32);

extern s32 *D_26F640[];

s32 func_00477ED0(u128 arg0, s32 arg1, s32 arg2) {
    s32 *temp_v1;
    s32 temp_a2;

    if (arg1 != -1) {
        temp_v1 = D_26F640[arg1];
        if (temp_v1 != NULL) {
            temp_a2 = *temp_v1;
            if (temp_a2 != 0) {
                return func_004740C8((void *)&arg0, (void *)(temp_v1 + 4), temp_a2);
            }
        }
    }
    return arg2;
}
