#include "common.h"

extern void func_L01_00591BD8(void *, int, int);
extern void func_L00_005DD4A0(void *);
extern void func_L01_0056CDB0(void *);
extern void func_L01_0056E7F8(void *);
extern void func_L01_00588B08(void *);
extern void func_L01_005A8928(void *);
void func_L01_004ADAC0(void *arg0, int arg1) {
    unsigned char *state = *(unsigned char **)((char *)arg0 + 0xAC);
    unsigned short flags;
    func_L01_00591BD8(arg0, 0xB, 5);
    if (*(void **)(state + 0x610) != 0) {
        func_L00_005DD4A0(*(void **)(state + 0x610));
        *(int *)(state + 0x610) = 0;
    }
    func_L01_0056CDB0(arg0);
    func_L01_0056E7F8(arg0);
    func_L01_005A8928(arg0);
    flags = *(unsigned short *)((char *)arg0 + 0x34) & 0xFEFF;
    *(unsigned short *)((char *)arg0 + 0x34) = flags;
    if (state[0x408] == 0) {
        func_L01_00588B08(arg0);
    } else if (arg1 == 0) {
        *(unsigned char *)((char *)arg0 + 0x20) = 0xFD;
        *(unsigned short *)((char *)arg0 + 0x34) = flags | 3;
        *(unsigned char *)((char *)arg0 + 0x31) = 0;
    }
}
