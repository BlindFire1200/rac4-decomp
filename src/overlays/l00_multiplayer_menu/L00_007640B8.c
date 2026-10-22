#include "common.h"

// Fill the struct at 0x260: four word fields from args 1-4, seven byte fields from args 5-11.
void func_L00_007640B8(void *arg0, int arg1, int arg2, int arg3, int arg4, unsigned char arg5, unsigned char arg6, unsigned char arg7, unsigned char arg8, unsigned char arg9, unsigned char arg10, unsigned char arg11) {
    *(unsigned char *)((unsigned char *)arg0 + 0x276) = arg11;
    *(int *)((unsigned char *)arg0 + 0x264) = arg2;
    *(int *)((unsigned char *)arg0 + 0x268) = arg3;
    *(int *)((unsigned char *)arg0 + 0x26C) = arg4;
    *(unsigned char *)((unsigned char *)arg0 + 0x270) = arg5;
    *(unsigned char *)((unsigned char *)arg0 + 0x271) = arg6;
    *(unsigned char *)((unsigned char *)arg0 + 0x272) = arg7;
    *(unsigned char *)((unsigned char *)arg0 + 0x274) = arg8;
    *(unsigned char *)((unsigned char *)arg0 + 0x273) = arg9;
    *(unsigned char *)((unsigned char *)arg0 + 0x275) = arg10;
    *(int *)((unsigned char *)arg0 + 0x260) = arg1;
}
