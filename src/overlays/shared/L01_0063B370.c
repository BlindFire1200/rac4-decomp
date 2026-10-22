#include "common.h"

/* Maps a state id to a small class value: 2 for ids 0/13/14, 1 for ids 1/3/4/11/12, 0 otherwise. */
s32 func_L01_0063B370(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0 == 0 || arg0 == 14 || arg0 == 13) {
        var_v1 = 2;
    } else if (arg0 == 1 || arg0 == 3 || arg0 == 11 || arg0 == 12 || arg0 == 4) {
        var_v1 = 1;
    }
    return var_v1;
}
