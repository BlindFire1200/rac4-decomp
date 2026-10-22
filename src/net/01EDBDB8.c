#include "common.h"

typedef s32 (*net_callback_t)(s32, s32);

extern s32 D_001BC868[];
extern net_callback_t D_001BCA60[];

/* Hands the fourth argument to the registered network callback (if one is set) and returns the status code 0xC4. */
s32 func_01EDBDB8(s32 param0, s32 param1, s32 param2, s32 param3) {
	net_callback_t callback = D_001BCA60[0];

	if (callback != 0) {
		callback(param3, D_001BC868[0]);
	}
	return 0xC4;
}
