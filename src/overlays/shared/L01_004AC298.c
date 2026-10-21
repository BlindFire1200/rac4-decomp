#include "common.h"

extern void func_L01_004AC318(void);
extern void func_L01_004AC568(void *);
extern void func_L01_004AC628(void *);
extern void func_L01_004AC708(void *);
extern void func_004AD698(void *, int);
extern void func_L01_004AD6E8(void *);
extern void func_L01_004AD6F8(void *);

// Per-frame update: nothing without a +0xAC block; state 0 runs
// func_L01_004AC318 only, other states run the six update calls.
void func_L01_004AC298(void *object) {
    if (*(void **)((char *)object + 0xAC) == 0) return;
    if (*(unsigned char *)((char *)object + 0x20) == 0) {
        func_L01_004AC318();
        return;
    }
    func_L01_004AC568(object);
    func_L01_004AC628(object);
    func_L01_004AC708(object);
    func_004AD698(object, 1);
    func_L01_004AD6E8(object);
    func_L01_004AD6F8(object);
}
