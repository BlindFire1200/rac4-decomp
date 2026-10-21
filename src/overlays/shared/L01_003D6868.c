#include "common.h"

extern void *func_L00_005DEBD0(int, int, int);
extern void func_L01_0056E9D0(int, void *);
extern void func_L01_0056E7F8(void *);
extern void func_L01_005A8928(void *);
extern void func_L00_005DD4A0(void *);
extern void func_L01_00588B08(void *);
extern void func_L01_00591BD8(void *, int, int);

// Per-frame handling shared with func_L01_003D6868: run the registered callback
// (id 0x20ED), the three update calls, then either run func_L00_005DD4A0 (when
// the +0x460 flag is set) or reset +0x48B and move to a new state (-1). This
// variant moves to state 0xF.
void func_L01_003D6868(void *object) {
    unsigned char *linked = *(unsigned char **)((char *)object + 0xAC);
    void *callback = func_L00_005DEBD0(0x20ED, 0x12, 8);
    int value;
    if (callback != 0) ((void (*)(void))(*(void **)((char *)callback + 4)))();
    value = *(int *)(linked + 0x324);
    linked[0x4DD] = 0;
    if (value != 0 && *(int *)(linked + 0x320) != 0) func_L01_0056E9D0(value, object);
    func_L01_0056E7F8(object);
    func_L01_005A8928(object);
    if (linked[0x460] != 0) func_L00_005DD4A0(object);
    else {
        linked[0x48B] = 0;
        func_L01_00588B08(object);
        func_L01_00591BD8(object, 0xF, -1);
    }
}
