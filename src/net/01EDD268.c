#include "common.h"

extern void (*D_001BCBCC[])(s32, s32);
extern s32 D_001BC9D4[];

/* Calls the optional global net callback with the fourth argument and a global word, then returns the 200 status code. */
s32 func_01EDD268(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	void (*handler)(s32, s32) = D_001BCBCC[0];
	if (handler != 0) {
		handler(arg3, D_001BC9D4[0]);
	}
	return 200;
}
