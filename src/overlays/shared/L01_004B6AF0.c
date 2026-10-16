#include "common.h"

typedef struct Type1 {
    s32 f0;
    void (*f4)(void);
} Type1;
extern void func_L00_005DD4A0(void *);
extern Type1 *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L01_0056CDB0(void *);
extern void func_L01_0056E7F8(void *);
extern void func_L01_00588B08(void *);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_005A8928(void *);

// Run the common updates, optional callback and state change for this handler.
void func_L01_004B6AF0(void *object, s32 flag) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    Type1 *callback;

    func_L01_0056CDB0(object);
    func_L01_0056E7F8(object);
    func_L01_005A8928(object);
    if (flag == 0) {
        callback = func_L00_005DEBD0(0x20ED, 0x12, 8);
        if (callback != 0) callback->f4();
    }
    func_L01_00591BD8(object, 0x25, 0xA);
    if (linked[0x458] == 0) func_L01_00588B08(object);
    else if (flag == 0) func_L00_005DD4A0(object);
}
