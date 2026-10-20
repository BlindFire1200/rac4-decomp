#include "common.h"

typedef struct Type1 Type1;
typedef struct {
    char pad[0x14];
    void (*fn)(char *, Type1 *);
} Type2;
struct Type1 {
    s32 unk0;
    Type2 *vt;
};

extern s32 func_L00_005BC9B8(void *);
extern void func_L00_00607960(void *);

void func_L00_0061AAA0(char *arg0) {
    Type1 *s1 = (Type1 *)(arg0 + 0x30);
    if (s1 != NULL) {
        if (func_L00_005BC9B8(arg0 + 0xA) != 0) {
            func_L00_00607960(arg0);
        } else {
            s1->vt->fn(arg0, s1);
        }
    }
}
