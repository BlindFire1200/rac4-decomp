#include "common.h"

extern s32 (*D_001BCB98[])(s32, s32);
extern s32 D_001BC9A0[];

/* Calls the optional net callback pointer with the 4th argument and the session pointer, then returns 28. */
s32 func_01EDC8C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	if (D_001BCB98[0] != 0) {
		D_001BCB98[0](arg3, D_001BC9A0[0]);
	}
	return 28;
}
