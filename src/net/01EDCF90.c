#include "common.h"

extern s32 D_001BCBC0[];
extern s32 D_001BC9C8[];

/* Calls the registered net handler (if any) with the 4th argument and a global value, then returns 476. */
s32 func_01EDCF90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	s32 handler = D_001BCBC0[0];
	s32 value = arg3;

	if (handler != 0) {
		((void (*)(s32, s32))handler)(value, D_001BC9C8[0]);
	}
	return 476;
}
