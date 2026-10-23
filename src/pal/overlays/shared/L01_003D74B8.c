#include "common.h"

extern void func_00481900(s32, s32, void *, s32, s32, s32, f32);
extern void func_00489498(s32, s32, f32);
extern void func_L01_003D7540(void);

// When arg1 is 0, calls func_00489498(arg0, 25, 0.0); when it is 4, calls func_00481900 with 3 and
// func_L01_003D7540, then func_00489498(arg0, 0, 1.0). Returns 1.
s32 func_L01_003D74B8(s32 arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        func_00489498(arg0, 0x19, 0.0f);
        break;
    case 4:
        func_00481900(arg0, 3, (void *)func_L01_003D7540, 0, 0, 0, 0.0f);
        func_00489498(arg0, 0, 1.0f);
        break;
    }
    return 1;
}
