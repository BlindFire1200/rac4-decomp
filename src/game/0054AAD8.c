#include "common.h"

extern s32 D_003DFF10[];

// Return the entry of D_003DFF10 picked by arg0 (negative values count as 0), modulo 20.
s32 func_0054AAD8(s32 arg0) {
    return D_003DFF10[((arg0 <= -1) ? 0 : arg0) % 20];
}
