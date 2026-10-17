#include "common.h"

s32 func_L00_00710858(void *arg0, s32 arg1) {
    s32 temp_a2;
    temp_a2 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_a2 == 3) {
        if (arg1 == 4) *(s32 *)((u8 *)arg0 + 8) = 1;
    } else if (temp_a2 == 4) {
        if (arg1 == 5) *(s32 *)((u8 *)arg0 + 8) = 2;
        else if (arg1 == 3) *(s32 *)((u8 *)arg0 + 8) = 6;
    } else if (temp_a2 == 5) {
        if (arg1 == 4) *(s32 *)((u8 *)arg0 + 8) = temp_a2;
        else if (arg1 == 6) *(s32 *)((u8 *)arg0 + 8) = 3;
    } else if (temp_a2 == 6 && arg1 == 5) {
        *(s32 *)((u8 *)arg0 + 8) = 4;
    }
    *(s32 *)((u8 *)arg0 + 4) = arg1;
    return temp_a2;
}
