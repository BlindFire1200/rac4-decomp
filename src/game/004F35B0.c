#include "common.h"

extern void func_00446E90(void);
extern void func_00448788(void);
extern void func_004F3608(void);
extern void func_00459758(void);

typedef void (*Type1)(s32);

Type1 D_00220940 = 0;
s32 D_002212F8 = 0;

/* Runs the two init routines, clears the status flag to -1, then invokes
   the optional callback in D_00220940 with the argument before teardown. */
void func_004F35B0(s32 arg0) {
    Type1 fp;

    func_00446E90();
    func_00448788();

    fp = D_00220940;
    D_002212F8 = -1;
    if (fp != 0) {
        fp(arg0);
    }

    func_004F3608();
    func_00459758();
}
