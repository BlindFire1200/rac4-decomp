#include "common.h"

extern void func_00476F88(int arg0, int arg1, int arg2, int arg3);

// Calls func_00476F88 with fixed arguments, forwarding both incoming arguments.
void func_00477650(int arg0, int arg1) {
    func_00476F88(arg0, 1, 0, arg1);
}
