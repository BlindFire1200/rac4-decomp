#include "common.h"

s32 func_004534D0(s32 *);

// Step a two-counter state: when pending is set, run func_004534D0 on it and
// raise level by one (up to max_level), returning 4 once pending reaches zero;
// otherwise run func_004534D0 on level. Otherwise returns 0 when level did not
// change, 1 when it left zero, 2 when it dropped to zero, 3 for any other
// change.
s32 func_00497768(s32 *pending, s32 *level, s32 max_level) {
    s32 old_level = *level;
    s32 new_level;
    s32 result;
    if (*pending != 0) {
        func_004534D0(pending);
        if (*level < max_level) *level = *level + 1;
        if (*pending == 0) return 4;
    } else {
        func_004534D0(level);
    }
    new_level = *level;
    if (old_level == new_level) return 0;
    if (old_level == 0) return 1;
    if (new_level == 0) return 2;
    return 3;
}
