#include "common.h"

extern s32 (*D_001BCAE4[])(s32, s32);
extern s32 D_001BC8EC[];

/* Calls the registered net callback with (arg3, D_001BC8EC[0]) when one is set, otherwise returns 100. */
s32 func_01EDCBA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	s32 (*cb)(s32, s32) = D_001BCAE4[0];

	if (cb) {
		cb(arg3, D_001BC8EC[0]);
	}
	return 100;
}
