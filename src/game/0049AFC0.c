#include "common.h"

extern u8 D_306DC0[];
extern void func_0049B148(s32, s32);

s32 D_002215A0 = 0;

/* Releases the slot of entry arg0: if the 0x3C-strided entry is marked busy, drop the active count, call the release handler and clear the flag */
void func_0049AFC0(s32 arg0) {
	s32 offset;
	u8 *ptr;

	offset = arg0 * 0x3C;
	ptr = D_306DC0 + offset;
	if (*ptr != 0) {
		D_002215A0 = D_002215A0 - 1;
		func_0049B148(arg0, 0);
		*ptr = 0;
	}
}
