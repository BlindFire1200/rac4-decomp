#include "common.h"

extern int func_00126A90(void);
extern int func_00126A30(int arg0, int arg1);
extern void func_00154B58(void);

int D_00223238 = 0;

/* Sets up multiplayer menu state: queries the current game/player data, stores the configured value (0x3C) into a global, then finalizes the menu. */
void func_L00_00708228(void) {
    D_00223238 = func_00126A30(func_00126A90(), 0x3C);
    func_00154B58();
}
