#include "common.h"

/* Stores 1 through the pointer held at offset 0x10 of the object. */
void func_01ED5FD8(void *arg0) {
    *((s32 **)arg0)[4] = 1;
}
