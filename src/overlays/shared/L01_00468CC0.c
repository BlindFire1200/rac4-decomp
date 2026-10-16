#include "common.h"

extern void func_L01_0056CDB0(void *);
extern void func_L01_0056E7F8(void *);
extern void func_L01_005A8928(void *);
extern void func_L01_00591BD8(void *, int, int);
extern void func_L01_00588B08(void *);
extern void func_L00_005DD4A0(void *);
void func_L01_00468CC0(void *arg0, int arg1) {
    unsigned char *state = *(unsigned char **)((char *)arg0 + 0xAC);
    func_L01_0056CDB0(arg0);
    func_L01_0056E7F8(arg0);
    func_L01_005A8928(arg0);
    func_L01_00591BD8(arg0, 0x1B, 8);
    if (state[0x458] == 0) func_L01_00588B08(arg0);
    else if (arg1 == 0) func_L00_005DD4A0(arg0);
}
