/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_01EA6D00(void *);
s32 func_01EA7538(void);
s32 func_01EA76E8(s32);
s32 func_01EA95C0(void *);

s32 func_01EF5838(void *arg0) {
    func_01EA95C0((char *)arg0 + 0x7C);
    func_01EA6D00((char *)arg0 + 0x10);
    func_01EA76E8(*(s32 *)((char *)arg0 + 0xC));
    func_01EA7538();
    return 1;
}
