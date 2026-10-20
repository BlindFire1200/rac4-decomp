#include "common.h"

extern void func_L00_005DD4A0(void *);
extern void func_L41_003BD528(void *object);
extern s32 func_L41_00411448(void *);
extern s32 func_L41_004114A8(void *);
extern s32 func_L41_004114C8(void *);

// Releases the object held at +0xE8 of the owner's state block.
void func_L41_004114D8(void *arg0) {
    char *s = *(char **)((char *)arg0 + 0xAC);
    char *obj;

    if (*(void **)(s + 0xE8) != 0) {
        if (func_L41_00411448(arg0) || func_L41_004114C8(arg0) || func_L41_004114A8(arg0)) {
            func_L00_005DD4A0(*(void **)(s + 0xE8));
        } else {
            obj = *(char **)(s + 0xE8);
            if (*(s16 *)(obj + 0xBC) == 0x1AF3) {
                func_L41_003BD528(obj);
            }
        }
        *(void **)(s + 0xE8) = 0;
    }
}
