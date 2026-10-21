#include "common.h"

extern s32 func_00498D90(void);
extern void func_004B0970(void);
extern void func_004B0D18(void);
extern void func_004B0EA0(void);
typedef struct State_004B0158 { u8 pad0[8]; u8 flag; u8 pad9[3]; s32 current; s32 target; } State_004B0158;
extern State_004B0158 D_3095B0;

// When the current and target values of D_3095B0 differ, run the three
// transition calls, adopt the target and raise the flag; the flag is also
// raised when func_00498D90 returns nonzero.
void func_004B0158(void) {
    if (D_3095B0.current != D_3095B0.target) {
        func_004B0EA0();
        func_004B0D18();
        D_3095B0.current = D_3095B0.target;
        func_004B0970();
        D_3095B0.flag = 1;
    }
    if (func_00498D90() != 0) D_3095B0.flag = 1;
}
