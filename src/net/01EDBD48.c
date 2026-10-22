#include "common.h"

extern s32 D_001BCA50[];
extern s32 D_001BC858[];

/* Calls the optional callback stored in D_001BCA50[0] with the 4th argument and D_001BC858[0], then returns 28. */
s32 func_01EDBD48(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	void (*callback)(s32, s32) = (void (*)(s32, s32))D_001BCA50[0];

	if (callback != 0) {
		callback(arg3, D_001BC858[0]);
	}

	return 0x1C;
}
