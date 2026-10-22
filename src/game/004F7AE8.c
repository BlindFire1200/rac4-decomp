#include "common.h"

extern s32 func_004F7420(s32, s32, s32, s32, s32, s32);

// Calls func_004F7420 with the first three incoming arguments, two 0x80 constants and the fourth incoming argument.
void func_004F7AE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
	func_004F7420(arg0, arg1, arg2, 0x80, 0x80, arg3);
}
