#include "common.h"

extern void func_00453718(void *arg0, s32 arg1, s32 arg2);
extern s32 D_00220BD8;

/* Asks func_00453718 for a status byte and stores its low nibble (or -1 when 0xFF) into D_00220BD8. */
s32 func_0054AFB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	u8 buf[0x10];
	s32 res;

	func_00453718(buf, arg3, 1);
	if (buf[0] == 0xFF) {
		res = -1;
	} else {
		res = buf[0] & 0xF;
	}
	D_00220BD8 = res;
	return 1;
}
