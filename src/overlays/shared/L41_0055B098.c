#include "common.h"

typedef struct Type1 {
    u8 pad0[0x1C];
    s32 f1C;
    s32 f20;
    s32 f24[4];
} Type1;

extern void func_L00_00638070(s32 **a, s32 **b);
extern s8 D_00310178[];
extern Type1 D_00310190[];

// Find which of the two returned slots holds id, flag D_00310178 and clear that row's current entry.
void func_L41_0055B098(s32 id)
{
    s32 *slots[2];

    func_L00_00638070(&slots[0], &slots[1]);
    if (*slots[0] == id) {
        id = 0;
    } else if (*slots[1] == id) {
        id = 1;
    }
    D_00310190[id].f24[D_00310190[id].f1C] = 0;
    D_00310190[id].f1C = -1;
    D_00310178[0] = 1;
}
