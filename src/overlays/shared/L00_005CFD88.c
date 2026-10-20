#include "common.h"

/* Rounds (arg0 + arg1 + arg2) down to a multiple of arg1: (sum - 1) & -arg1. */
s32 func_L00_005CFD88(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_sum;
    s32 var_neg;

    var_sum = arg2 + arg0 + arg1;
    var_neg = -arg1;
    return (var_sum - 1) & var_neg;
}
