#include "common.h"

extern void *func_L00_005DEBD0(int, int, int);
extern void func_L01_0056E9D0(int, void *);
extern void func_L01_0056E7F8(void *);
extern void func_L01_005A8928(void *);
extern void func_L00_005DD4A0(void *);
extern void func_L01_00588B08(void *);
extern void func_L01_00591BD8(void *, int, int);
void func_L01_0043A3E0(void *arg0) {
    unsigned char *state = *(unsigned char **)((char *)arg0 + 0xAC);
    void *callback = func_L00_005DEBD0(0x20ED, 0x12, 8);
    if (callback != 0) ((void (*)(void))(*(void **)((char *)callback + 4)))();
    if (*(int *)(state + 0x324) != 0 && *(int *)(state + 0x320) != 0)
        func_L01_0056E9D0(*(int *)(state + 0x324), arg0);
    func_L01_0056E7F8(arg0);
    func_L01_005A8928(arg0);
    if (state[0x460] != 0) {
        func_L00_005DD4A0(arg0);
        return;
    }
    state[0x48B] = 0;
    func_L01_00588B08(arg0);
    func_L01_00591BD8(arg0, 0xD, -1);
}
