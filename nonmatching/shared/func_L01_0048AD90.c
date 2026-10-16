/* Not matching yet: BYTES 14/144 (tools/try_func.py func_L01_0048AD90 --diff). Not part of the build. */
#include "common.h"

typedef int s128 __attribute__((mode(TI)));
extern s32 func_0048F308(void);
extern s32 func_L00_005F1208(s128, s32);
extern u8 *D_003660F8_[];

s32 func_L01_0048AD90(void *unused, u8 *arg1) {
    s32 i;
    s32 value;
    u8 **p;
    u8 *object;

    if (func_0048F308() != 0) {
        return 1;
    }
    value = *(s32 *)(arg1 + 0x154);
    if (value != -1) {
        i = 0;
        p = D_003660F8_;
        object = *p;
        do {
            if ((object != 0) &&
                (func_L00_005F1208(*(s128 *)(object + 0xA0), value) != 0)) {
                return 1;
            }
            p++;
            i++;
            object = *p;
        } while (i < 10);
    }
    return 0;
}
