#include "common.h"

extern void func_0011C750(void *, char *, ...);
extern void func_0011EA90(void) __attribute__((noreturn));
extern u8 *D_00163E74_[];
extern char D_001925E0[];

void func_0011EAA0(char *file, s32 line, char *expr) {
    func_0011C750(*(void **)(D_00163E74_[0] + 0xC), D_001925E0, expr, file, line);
    func_0011EA90();
}
