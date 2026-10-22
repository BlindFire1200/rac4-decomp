/* cflags: -G0 */
#include "common.h"

extern void (*D_001BCB08)(int, int);
extern int D_001BC910;

/* Dispatches the requested net mode id to the registered mode-change callback, if any. */
int func_01EDCE08(int arg0, int arg1, int arg2, int arg3) {
	void (*fp)(int, int) = D_001BCB08;
	if (fp != 0) {
		fp(arg3, D_001BC910);
	}
	return 0x1C;
}
