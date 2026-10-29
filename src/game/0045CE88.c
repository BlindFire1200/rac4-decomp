#include "common.h"

extern int func_00126A90(void);
extern void func_00126AA0(int, void *);

/* Calls func_00126A90 and passes result to func_00126AA0, returns value written to buffer. */
int func_0045CE88(void) {
    int buf[12];
    int tmp = func_00126A90();
    func_00126AA0(tmp, buf);
    return buf[6];
}
