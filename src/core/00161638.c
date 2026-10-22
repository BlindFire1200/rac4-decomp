#include "common.h"

extern s32 func_00151EE8(s32, s32, s32, void *);

s32 D_0021E020 = 0;
s32 D_0021E024 = 0;
s32 D_0021DBF8 = 0;

// Dispatch a request while the subsystem is enabled and return the stored status
s32 func_00161638(s32 arg0, s32 arg1) {
    if (D_0021E024 == 1) {
        if (arg1 > 0) {
            if (arg0 != 0) {
                D_0021DBF8 = arg1;
                if (func_00151EE8(D_0021E020, 1, arg0, &D_0021DBF8) != 0) {
                    D_0021DBF8 = 0;
                }
            }
        }
    }
    return D_0021DBF8;
}
