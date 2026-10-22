#include "common.h"

typedef int u128 __attribute__((mode(TI)));

/* Appends a 16-byte value and a 32-bit value to two parallel arrays at the counter index, if the counter is below the 0x46 limit. */
void func_L01_003C8CE0(u128 *a0, s32 *a1, u128 *a2, s32 *a3, s32 *a4) {
	if (*a4 < 0x46) {
		a2[*a4] = *a0;
		a3[*a4] = *a1;
		*a4 = *a4 + 1;
	}
}
