#include "common.h"

extern s32 D_001BCA84[];
extern s32 D_001BC88C[];

/* Calls the net callback stored in D_001BCA84 (if set) with the fourth argument and the value in D_001BC88C, then returns 328. */
s32 func_01EDBFB8(s32 param1, s32 param2, s32 param3, s32 param4) {
	void (*fp)(s32, s32) = (void (*)(s32, s32))D_001BCA84[0];

	if (fp != 0) {
		fp(param4, D_001BC88C[0]);
	}
	return 328;
}
