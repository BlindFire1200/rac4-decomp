#include "common.h"

extern void func_L00_00607960(int);
extern void func_L00_005DD4A0(void *);
extern void *D_00223588;

// Release the linked object's eight words at +0x30 (each set one through
// func_L00_00607960 and cleared). Then set state 4 when the object is
// D_00223588, otherwise run func_L00_005DD4A0.
void func_L41_003BD528(void *object) {
    int *entries = (int *)(*(u8 **)((u8 *)object + 0xAC) + 0x30);
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
    if (D_00223588 == object) {
        *(u8 *)((u8 *)object + 0x20) = 4;
        return;
    }
    func_L00_005DD4A0(object);
}
