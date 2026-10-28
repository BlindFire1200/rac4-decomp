/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001349F8 (NTSC-U func_001349F8, commit 403f30a9) */
#include "common.h"

/* libmpeg: walk the extension and user data start codes (0x1B5 / 0x1B2); 2.9-ee-991111 */
typedef struct { u8 pad[0x878]; s32 f878; } Type1;
typedef struct { void (*f0[11])(Type1 *); } Type2;

extern void func_001412A8(Type1 *);
extern void func_001412A0(Type1 *);
extern void func_00141140(Type1 *, s32);
extern s32 func_0013EEB0(Type1 *, s32);
extern u32 func_0013EDC8(Type1 *, s32);
extern u8 D_001954D0[];

static __inline__ void func_00140F38_a(Type1 *p) {
    func_001412A8(p);
    while (func_0013EEB0(p, 0x18) != 1) {
        if (p->f878 != 0) {
            break;
        }
        func_00141140(p, 8);
    }
}

void func_00140F38(Type1 *p) {
    Type2 tbl = *(Type2 *)D_001954D0;
    s32 c;

    func_00140F38_a(p);
    while ((c = func_0013EEB0(p, 0x20)) == 0x1B5 || c == 0x1B2) {
        if (c == 0x1B5) {
            u32 n;
            func_001412A0(p);
            n = func_0013EDC8(p, 4);
            n = n > 10 ? 0 : n;
            tbl.f0[n](p);
            func_00140F38_a(p);
        } else {
            func_001412A0(p);
            func_00140F38_a(p);
        }
    }
}
