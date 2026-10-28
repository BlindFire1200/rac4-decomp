/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00125130 (NTSC-U func_00125130, commit 403f30a9) */
#include "common.h"

typedef struct Type1 {
    struct Type1 *f0;
    u8 pad4[0x40 - 4];
} Type1;
typedef struct {
    u64 f0;
    int id;
    int fC;
    int f10;
    Type1 *f14;
} Type2;
extern Type2 D_00165D28;
extern Type1 D_001AAA00[];
extern s32 func_0011A518();
extern void func_0012E8C8(void);
extern int func_00126890(int var1, void *var2, int f0, void *arg);
extern int func_00127668(int var1);
extern void func_0012DC00(int n);
extern void func_0012DC10(int n);
extern void func_0012DC20(int n);
extern int func_0012E078();
int func_0012D420(void);
int func_0012D470(void);

int func_0012DC30(int arg0)
{
    int i;
    int id;
    int di;
    u32 m;

    if (D_00165D28.id >= 0) {
        return 0x80008001;
    }
    D_00165D28.f0 = 0;
    D_00165D28.f10 = 0;
    func_0011A518(D_001AAA00, 0, 0x2000);
    D_00165D28.f14 = D_001AAA00;
    for (i = 0x7F; i >= 0; i--) {
        D_001AAA00[i].f0 = &D_001AAA00[i + 1];
    }
    D_001AAA00[0x7F].f0 = 0;
    func_0012E8C8();
    id = func_00126890(0xB, func_0012E078, 0, 0);
    if (id < 0) {
        return 0x80009021;
    }
    D_00165D28.id = id;
    di = func_0012D420();
    m = *(volatile u32 *)0x10001010;
    m = (m & ~3) | arg0;
    m |= 0x300;
    if (!(m & 0x80)) {
        func_0012DC00(0);
        m |= 0xC80;
        func_0012DC20(0xFFFF);
    }
    func_0012DC10(m);
    func_00127668(0xB);
    if (di) {
        func_0012D470();
    }
    return 0;
}
