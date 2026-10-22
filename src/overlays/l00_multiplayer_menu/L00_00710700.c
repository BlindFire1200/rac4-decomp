#include "common.h"

extern s64 func_0012E370(void);
extern s64 func_0012FEB0(s64 arg0, s64 arg1);
extern s32 D_003B175C[];

// Compare the frame counter returned by the timer against the stored value and
// report whether fewer than 0x3E81 frames have elapsed.
s32 func_L00_00710700(void) {
    return ((s32)func_0012FEB0(func_0012E370(), 0x24000) - D_003B175C[0]) >= 0x3E81;
}
