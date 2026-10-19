#include "common.h"

extern void func_L01_00591BD8(void *, int, int);
extern void func_L00_005DD4A0(void *);
extern void func_L01_0056CDB0(void *);
extern void func_L01_0056E7F8(void *);
extern void func_L01_00588B08(void *);
extern void func_L01_005A8928(void *);

// Set state 0xB (5), release the +0x610 object, run the three update calls and
// clear bit 8 of the flags. Then run func_L01_00588B08 when the +0x408 flag is
// clear, or (when flag is zero) switch to state 0xFD with bits 0 and 1 of the
// flags set.
void func_L01_004ADAC0(void *object, int flag) {
    unsigned char *linked = *(unsigned char **)((char *)object + 0xAC);
    unsigned short flags;
    func_L01_00591BD8(object, 0xB, 5);
    if (*(void **)(linked + 0x610) != 0) {
        func_L00_005DD4A0(*(void **)(linked + 0x610));
        *(int *)(linked + 0x610) = 0;
    }
    func_L01_0056CDB0(object);
    func_L01_0056E7F8(object);
    func_L01_005A8928(object);
    flags = *(unsigned short *)((char *)object + 0x34) & 0xFEFF;
    *(unsigned short *)((char *)object + 0x34) = flags;
    if (linked[0x408] == 0) {
        func_L01_00588B08(object);
    } else if (flag == 0) {
        *(unsigned char *)((char *)object + 0x20) = 0xFD;
        *(unsigned short *)((char *)object + 0x34) = flags | 3;
        *(unsigned char *)((char *)object + 0x31) = 0;
    }
}
