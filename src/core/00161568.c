#include "common.h"

extern s32 func_00152A30(s32);

s32 D_0021E020 = 0;
s32 D_0021E028 = 0;

/* Dispatch a queued request once: 0 on success, 0x80000000 when idle or rejected */
s32 func_00161568(void) {
	if (D_0021E020 == -1) {
		goto fail;
	}
	if (D_0021E028 != 1) {
		if (func_00152A30(D_0021E020) == 0) {
			goto ok;
		}
		goto fail;
	}
	return 0;
fail:
	return 0x80000000;
ok:
	D_0021E028 = 1;
	return 0;
}
