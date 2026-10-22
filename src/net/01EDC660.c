#include "common.h"

/* Calls the optional handler stored in D_001BCB6C (when non-NULL) with the fourth
   argument and the global value D_001BC974, then returns the protocol id 0x1C. */
extern void (*D_001BCB6C[])(s32, s32);
extern s32 D_001BC974[];

s32 func_01EDC660(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	void (*handler)(s32, s32);

	handler = D_001BCB6C[0];
	if (handler != 0) {
		handler(arg3, D_001BC974[0]);
	}
	return 0x1C;
}
