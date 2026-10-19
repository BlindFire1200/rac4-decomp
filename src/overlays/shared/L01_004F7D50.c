#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern void func_L00_005F1778(int, void *, int);

// With a source at +0x40: clear +0x3C and copy its 16-byte value at +0x10 to
// +0x90. Without one, when +0x3C is set, run func_L00_005F1778 on it and the
// +0x90 block.
void func_L01_004F7D50(unsigned char *unused, unsigned char *object) {
    unsigned char *source = *(unsigned char **)(object + 0x40);
    if (source != 0) {
        *(int *)(object + 0x3C) = 0;
        *(u128 *)(object + 0x90) = *(u128 *)(source + 0x10);
    } else if (*(int *)(object + 0x3C) != 0) {
        func_L00_005F1778(*(int *)(object + 0x3C), object + 0x90, 0);
    }
}
