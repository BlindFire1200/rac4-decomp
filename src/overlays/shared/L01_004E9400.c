#include "common.h"

extern void func_00520C50(unsigned char arg0, int arg1);
extern void func_L01_004EB408(void *object);

/* Fires func_00520C50 unless the state byte at +0x33C is 0x7F, then stores 0x40 in that byte and calls func_L01_004EB408 with the first argument. */
void func_L01_004E9400(int arg0, void *arg1) {
    if (((unsigned char *)arg1)[0x33C] != 0x7F) {
        func_00520C50(((unsigned char *)arg1)[0x33C], 0);
    }
    ((unsigned char *)arg1)[0x33C] = 0x40;
    func_L01_004EB408((void *)arg0);
}
