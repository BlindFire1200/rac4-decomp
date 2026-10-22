#include "common.h"

extern void func_00158A30(s32 cmd, s32 len, void *data);

/* Sends command 0x5A to the handler with the two arguments packed as an 8-byte list */
void func_00159818(s32 arg0, s32 arg1) {
    s32 buf[2];
    buf[0] = arg0;
    buf[1] = arg1;
    func_00158A30(0x5A, 8, buf);
}
