#include "common.h"

extern void func_L01_004A3208(void *, unsigned char, int, int);
extern void func_L01_005AF340(void *);

void func_L01_004A6908(char *obj) {
    char *blk = *(char **)(obj + 0xAC);
    func_L01_005AF340(obj);
    *(int *)(blk + 0x290) = 0;
    *(float *)(blk + 0x50) = (float)*(int *)(blk + 0x54);
    *(int *)(obj + 0x98) = *(int *)(*(char **)(obj + 0x24) + 0x10);
    func_L01_004A3208(obj, 1, 0, 0);
    func_L01_004A3208(obj, 2, 0, 0);
}
