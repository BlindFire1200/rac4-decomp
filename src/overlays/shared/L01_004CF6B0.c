#include "common.h"
extern void func_004CF5C0(void *, s32);
extern void **func_L00_005DEBD0(s32, s32, s32);
extern void func_L01_004CF188(void *, s32);
void func_L01_004CF6B0(u8 *p) {
    u8 *linked = *(u8 **)(p + 0xAC);
    void **table;
    void (*callback)(void *);
    if (linked[0x2DD] != 0) {
        func_L01_004CF188(p, 1);
        return;
    }
    if (*(s32 *)(linked + 0x2FC) == 0) {
        table = func_L00_005DEBD0(0x277E, 0, 4);
        if (table != 0 && *table != 0) {
            callback = (void (*)(void *))*table;
            callback(p);
        }
    }
    func_004CF5C0(p, 0x78);
}
