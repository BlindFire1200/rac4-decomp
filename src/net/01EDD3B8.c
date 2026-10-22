#include "common.h"

/* Calls the optional net callback stored in D_001BCBE4 with the fourth argument and D_001BC9EC, then returns 0x1DC. */
extern void (*D_001BCBE4[])(s32, s32);
extern s32 D_001BC9EC[];

s32 func_01EDD3B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	void (*fp)(s32, s32) = D_001BCBE4[0];
	s32 cb = arg3;

	if (fp) {
		fp(cb, D_001BC9EC[0]);
	}
	return 0x1DC;
}
