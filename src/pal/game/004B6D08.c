#include "common.h"
typedef struct { unsigned char pad[4]; int a; int b; } Entry;
typedef struct { unsigned char pad[0x194]; Entry entries[8]; int count; } Record;
extern Record D_003099F0[];
void func_004B6D08(int index, int a, int b, int c) {
    Record *p = &D_003099F0[index];
    p->entries[p->count].pad[0] = c;
    p->entries[p->count].b = b;
    p->entries[p->count].a = a;
    p->count++;
}
