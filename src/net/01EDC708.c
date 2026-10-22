#include "common.h"

extern s32 (*D_001BCB78[])(s32, s32);
extern s32 D_001BC980[];

/* Calls the installed net callback (if any) with the incoming argument and the session pointer, then returns opcode 28. */
s32 func_01EDC708(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	s32 (*callback)(s32, s32) = D_001BCB78[0];

	if (callback) {
		callback(arg3, D_001BC980[0]);
	}

	return 28;
}
