#include "common.h"

extern void func_00568B98(void *o, u8 state, s32 type);

/* Checks the object's two state words, stores the new value into the second one and starts the state change. */
s32 func_L05_004DF530(void *arg0, s32 arg1) {
	s32 *p = *(s32 **)((u8 *)arg0 + 0xAC);

	if (p[0x140 / 4] != 0) {
		return 0;
	}
	if (p[0x144 / 4] == 0) {
		goto body;
	}
	if (p[0x144 / 4] != arg1) {
		return 0;
	}
body:
	p[0x144 / 4] = arg1;
	func_00568B98(arg0, 2, -1);
	return 1;
}
