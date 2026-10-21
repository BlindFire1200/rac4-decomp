#include "common.h"

void func_004CA818();                                  /* extern */
void func_004CA850();                                  /* extern */
void func_004D22E0();                                 /* extern */
extern s32 D_0021DF64;

void func_004CB220(s32 arg0) {
    func_004D22E0(0);
    if (arg0 == -1) {
        func_004CA850();
        return;
    }
    D_0021DF64 = arg0;
    func_004CA818();
}
