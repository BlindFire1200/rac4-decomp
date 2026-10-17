#include "common.h"

extern s32 func_00498918(s32, s32);

// Map kind 1-8 to a pair of parameters (any other kind gives 4 and 3) and
// return func_00498918 of them.
s32 func_004989F0(s32 kind) {
    s32 param_a, param_b;
    switch (kind - 1) {
    case 0: param_a = 10; param_b = 2; break;
    case 1: param_a = 0; param_b = 0; break;
    case 2: param_a = 0; param_b = 3; break;
    case 3: param_a = 4; param_b = 0; break;
    case 4: param_a = 5; param_b = 0; break;
    case 5: param_a = 3; param_b = 1; break;
    case 6: param_a = 2; param_b = 1; break;
    case 7: param_a = 6; param_b = 0; break;
    default: param_a = 4; param_b = 3; break;
    }
    return func_00498918(param_a, param_b);
}
