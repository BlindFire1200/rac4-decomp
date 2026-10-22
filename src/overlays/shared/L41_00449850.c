#include "common.h"

typedef void (*Type3)(s32);

typedef struct {
    s32 f0;
    Type3 f4;
} Type4;

extern Type4 *func_004F8E90(s32 arg0, s32 arg1, s32 arg2);

/* Looks up the entry for id 0x265B and calls its callback (if any) with arg0. */
void func_L41_00449850(s32 arg0) {
    Type4 *p = func_004F8E90(0x265B, 0, 0x14);

    if (p != 0) {
        Type3 fp = p->f4;

        if (fp != 0) {
            fp(arg0);
        }
    }
}
