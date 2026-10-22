#include "common.h"

extern void func_001634A8(s32 repeat);
extern u32 func_00163808(s32 a0, u32 a1, u32 a2, u32 a3, u32 a4, s32 a5, s32 a6);
extern void *func_004964F0(void);
extern s32 D_001C2040[];

// Sets the render state and asks the renderer to draw the current scene.
void func_00496500(void) {
    func_001634A8(1);
    func_00163808(0, (u32)func_004964F0(), D_001C2040[590] + D_001C2040[423], D_001C2040[591], 0, 0, 0);
}
