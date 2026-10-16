#include "common.h"

extern void func_L01_004AC318(void);
extern void func_L01_004AC568(void *);
extern void func_L01_004AC628(void *);
extern void func_L01_004AC708(void *);
extern void func_004AD698(void *, int);
extern void func_L01_004AD6E8(void *);
extern void func_L01_004AD6F8(void *);
void func_L01_004AC298(void *arg0) {
    if (*(void **)((char *)arg0 + 0xAC) == 0) return;
    if (*(unsigned char *)((char *)arg0 + 0x20) == 0) {
        func_L01_004AC318();
        return;
    }
    func_L01_004AC568(arg0);
    func_L01_004AC628(arg0);
    func_L01_004AC708(arg0);
    func_004AD698(arg0, 1);
    func_L01_004AD6E8(arg0);
    func_L01_004AD6F8(arg0);
}
