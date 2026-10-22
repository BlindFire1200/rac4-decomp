#include "common.h"

extern void (*D_001BCAAC[])(s32, s32);
extern s32 D_001BC8B4[];

// Calls the optional net callback stored in D_001BCAAC with the fourth incoming argument and the global D_001BC8B4, then returns 64.
s32 func_01EDC1F8(s32 param0, s32 param1, s32 param2, s32 param3) {
	s32 arg = param3;
	if (D_001BCAAC[0] != 0) {
		D_001BCAAC[0](arg, D_001BC8B4[0]);
	}
	return 0x40;
}
