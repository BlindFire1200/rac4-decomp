#include "common.h"

extern s32 func_00506BB8(void);
extern s32 func_00498320(void *, s32, s32, void *, void *, void *);
extern void func_004E3138(s32, s32, s32);
extern void func_004E17B8(void);
extern void func_004BB418(void);
extern void func_004BB438(void);
extern void func_004BB4F0(void);
typedef struct { s32 a; u8 b[0x10]; } Entry;
extern Entry D_0030A490[];

// Calls func_00498320 with the +0x4 field of the D_0030A490 entry picked by func_00506BB8, 7,
// arg0 and three handlers; when it returns non-zero, runs func_004E3138(0, 0, 0) and func_004E17B8.
void func_004BB5B8(s32 arg0) {
    Entry *e = &D_0030A490[func_00506BB8()];
    if (func_00498320(e->b, 7, arg0, (void *)func_004BB438, (void *)func_004BB4F0,
                      (void *)func_004BB418) != 0) {
        func_004E3138(0, 0, 0);
        func_004E17B8();
    }
}
