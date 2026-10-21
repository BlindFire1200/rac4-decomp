#include "common.h"

extern int func_L00_005BC980(void *, void *);

// Count a hit (+0x80) and clear the +0xBE bit 2 when the +0x6C slot is set and
// that bit is raised; then run func_L00_005BC980 on +0x84 when the +0x70 slot
// is set.
void func_L01_00490870(void *object) {
    unsigned char *linked = *(unsigned char **)((char *)object + 0xAC);
    int value;
    if (*(int *)(linked + 0x6C) >= 0 && (*(unsigned char *)((char *)object + 0xBE) & 4) != 0) {
        *(int *)(linked + 0x80) += 1;
        *(unsigned char *)((char *)object + 0xBE) &= 0xFB;
    }
    value = *(int *)(linked + 0x70);
    if (value >= 0) func_L00_005BC980(linked + 0x84, object);
}
