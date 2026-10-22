#include "common.h"

typedef void (*net_callback_t)(s32, s32);

extern net_callback_t D_001BCB90[];
extern s32 D_001BC998[];

/* Calls the network callback registered in D_001BCB90 (if any) with the fourth argument and D_001BC998, then returns 28. */
s32 func_01EDC858(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	net_callback_t fp = D_001BCB90[0];

	if (fp != 0) {
		fp(arg3, D_001BC998[0]);
	}

	return 0x1C;
}
