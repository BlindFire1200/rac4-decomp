#include "common.h"

// Returns a float from a 30-entry table, the entry picked from arg0 clamped to the table's lower value.
extern s32 D_001EE600[];

f32 func_0048F910(s32 arg0, void *arg1) {
    void *var_a3;
    s32 temp_a0;
    s32 v1;
    s32 rem;

    if (arg1 != 0) {
        var_a3 = arg1;
    } else {
        var_a3 = (void *)D_001EE600;
    }

    temp_a0 = *(s32 *)((u8 *)var_a3 + 0x190);
    v1 = *(s16 *)((u8 *)var_a3 + 0x18E);

    if (temp_a0 < arg0) {
        arg0 = temp_a0;
    }

    v1 = v1 - arg0;
    v1 = v1 + 0x1E;
    rem = v1 % 30;

    return *(f32 *)((u8 *)var_a3 + (rem << 2) + 0x258);
}
