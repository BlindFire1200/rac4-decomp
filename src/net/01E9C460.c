#include "common.h"

extern void func_01E9C358(void);
extern void func_01E9C3F0(void);

/* Net helper: tests flag bit 1 in the sixth argument and dispatches to one of two routines. */
void func_01E9C460(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    if (a5 & 2) {
        func_01E9C358();
        return;
    }
    func_01E9C3F0();
}
