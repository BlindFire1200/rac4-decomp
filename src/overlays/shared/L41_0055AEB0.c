#include "common.h"

typedef struct Type1 {
    u8 pad0[0x30];
    s32 f30;
} Type1;

extern void func_L00_00638070();
extern u8 D_00310178[];
extern Type1 D_00310190[];

// Map the id to slot 0 or 1 by the two fetched pointers, then store the value into that slot and flag a change.
void func_L41_0055AEB0(s32 id, s32 value) {
    s32 *p[2];

    func_L00_00638070(&p[0], &p[1]);
    if (*p[0] == id) {
        id = 0;
    } else if (*p[1] == id) {
        id = 1;
    }
    if (D_00310190[id].f30 != value) {
        D_00310190[id].f30 = value;
        D_00310178[0] = 1;
    }
}
