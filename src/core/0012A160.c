#include "common.h"

extern s32 func_00129B58(s32, void *, s32, s32, s32, s32);

/* Queries the object at arg3 through func_00129B58: returns 0x800 when that call reports failure, 0 otherwise. */
s32 func_0012A160(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
	s32 ret;
	if (func_00129B58(0x80000008, arg3, 0x40, *(s32 *)((char *)arg3 + 0x24), *(s32 *)((char *)arg3 + 0x28), *(s32 *)((char *)arg3 + 0x2C)) != 0) {
		ret = 0;
	} else {
		ret = 0x800;
	}
	return ret;
}
