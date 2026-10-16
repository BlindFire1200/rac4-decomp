#include "common.h"

extern void func_L00_00607960(int);
extern void func_L00_005DD4A0(void *);
extern void *D_00223588;
void func_L41_003BD528(void *arg0) {
    int *entries = (int *)(*(u8 **)((u8 *)arg0 + 0xAC) + 0x30);
    int remaining = 7;
    do {
        int value = *entries;
        remaining--;
        if (value != 0) {
            func_L00_00607960(value);
            *entries = 0;
        }
        entries++;
    } while (remaining >= 0);
    if (D_00223588 == arg0) {
        *(u8 *)((u8 *)arg0 + 0x20) = 4;
        return;
    }
    func_L00_005DD4A0(arg0);
}
