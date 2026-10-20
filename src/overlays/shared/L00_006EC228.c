#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
typedef struct Type3 Type3;

struct Type3 {
    u32 f00;
    u32 f04;
    u32 f08;
    u32 f0c;
    u32 f10;
    void (*f14)(Type2 *, Type1 *);
};

struct Type2 {
    u32 f00;
    u32 f04;
    u32 f08;
    u32 f0c;
    u32 f10;
    Type3 *f14;
};

struct Type1 {
    u32 f00;
    u32 f04;
    u32 f08;
    u32 f0c;
    u32 f10;
    Type2 *f14;
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4c;
    u32 f50;
    s8 f54;
};

extern Type2 *func_L00_006AA100(s32);

/* looks up the owner of arg0 and calls its method, clearing a flag byte */
void func_L00_006EC228(Type1 *arg0) {
    Type2 *temp_v0;

    temp_v0 = func_L00_006AA100(arg0->f08);
    arg0->f54 = 0;
    if (temp_v0 != NULL) {
        temp_v0->f14->f14(temp_v0, arg0);
    }
}
