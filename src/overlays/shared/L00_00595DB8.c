#include "common.h"

extern void func_L00_00596808(void);
extern void func_L00_005AE458(void);
extern void func_L00_005C9DA0(void);
extern void func_L00_005CFDA0(s32, s32);
extern void func_L00_005F53A0(s32);
extern void func_L00_0061DE50(void);
extern void func_L00_00675678(s32);
extern void func_L00_00678EB8(void);
extern void func_L00_00696438(void);
extern s32 D_00346968[];

/* Resets the shared state: clears the players, the track and the level flag. */
void func_L00_00595DB8(s32 arg0) {
    func_L00_00678EB8();
    func_L00_00675678(1);
    func_L00_005C9DA0();
    func_L00_005AE458();
    func_L00_0061DE50();
    func_L00_00696438();
    func_L00_005CFDA0(0, arg0);
    func_L00_005F53A0(0);
    func_L00_00596808();
    D_00346968[0] = 0;
}
