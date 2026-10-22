#include "common.h"

extern s32 (*D_001BCB04[])(s32, s32);
extern s32 D_001BC90C[];

/* Calls the optional net callback with the 4th argument and a global, then returns 36. */
s32 func_01EDCDD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	if (D_001BCB04[0] != 0) {
		D_001BCB04[0](arg3, D_001BC90C[0]);
	}
	return 36;
}
