#include "common.h"

// Switch the mode word at +4 to new_mode and return the old one. For the
// allowed neighbouring mode pairs among 3-6 the transition code at +8 is set
// first (3 to 4 gives 1, 4 to 5 gives 2, 4 to 3 gives 6, 5 to 4 gives 5, 5 to 6
// gives 3, 6 to 5 gives 4).
s32 func_L00_00710858(void *object, s32 new_mode) {
    s32 old_mode;
    old_mode = *(s32 *)((u8 *)object + 4);
    if (old_mode == 3) {
        if (new_mode == 4) *(s32 *)((u8 *)object + 8) = 1;
    } else if (old_mode == 4) {
        if (new_mode == 5) *(s32 *)((u8 *)object + 8) = 2;
        else if (new_mode == 3) *(s32 *)((u8 *)object + 8) = 6;
    } else if (old_mode == 5) {
        if (new_mode == 4) *(s32 *)((u8 *)object + 8) = old_mode;
        else if (new_mode == 6) *(s32 *)((u8 *)object + 8) = 3;
    } else if (old_mode == 6 && new_mode == 5) {
        *(s32 *)((u8 *)object + 8) = 4;
    }
    *(s32 *)((u8 *)object + 4) = new_mode;
    return old_mode;
}
