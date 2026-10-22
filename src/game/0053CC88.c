#include "common.h"

typedef struct Type1 {
    u8 f00[0x88];
    s32 (*f88)(struct Type1 *);
    u8 f8C[0x30];
    s16 fBC;
} Type1;

extern s32 func_0046D428(s32 arg0, s32 arg1, s32 arg2);

// Looks up the table entry for this object's id and dispatches to the handler stored at offset 0x88.
s32 func_0053CC88(Type1 *arg0) {
    Type1 *t = (Type1 *)func_0046D428(arg0->fBC, 6, 0xD0);
    if (t != 0) {
        s32 (*fp)(Type1 *) = t->f88;
        if (fp != 0) {
            return fp(arg0);
        }
    }
    return 0;
}
