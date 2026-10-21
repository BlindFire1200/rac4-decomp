#include "common.h"

void func_L00_004F8100();                              /* extern */
void func_L00_00500CF8();                              /* extern */
void func_L00_00519E50();                              /* extern */
void func_L00_0051A080();                             /* extern */
void func_L00_0051A990();                              /* extern */
void func_L00_0051C498();                             /* extern */
void func_L00_0051C7E0();                              /* extern */
void func_L00_00520E08(s32);                           /* extern */
s32 func_L00_00520E90();                            /* extern */

s32 func_L00_004FF1C8(void) {
    func_L00_0051A990();
    func_L00_00520E08(func_L00_00520E90());
    func_L00_0051C498(-1);
    func_L00_0051C7E0();
    func_L00_004F8100();
    func_L00_00500CF8();
    func_L00_0051A080(0);
    func_L00_00519E50();
    return 1;
}
