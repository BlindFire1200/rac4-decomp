#include "common.h"

// Set bytes +4 and +5 of the linked object to one.
void func_L01_004DC548(void *arg0) {
    u8 *linked = *(u8 **)((u8 *)arg0 + 0xAC);
    linked[4] = 1;
    linked[5] = 1;
}
