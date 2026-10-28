/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00125D18 (NTSC-U func_00125D18, commit 403f30a9) */
#include "common.h"

typedef struct Type1 {
    struct Type1 *f0;
    volatile int id;
    void *f8;
    void *arg;
} Type1;
extern Type1 *D_001ACE00;
extern int func_0012E460(void);
extern s32 func_0012E7C8(int id, int arg0, void *cb, void *arg);
extern void func_0012E650(int id);
extern void func_0012E918();
int func_0012D420(void);
int func_0012D470(void);

int func_0012E978(int arg0, void *f8, void *arg)
{
    Type1 *p;
    Type1 *q;
    int di;
    int id;

    if (f8 == 0) {
        return 0x80000016;
    }
    di = func_0012D420();
    q = D_001ACE00;
    if (q) {
        D_001ACE00 = q->f0;
    }
    p = q;
    if (p == 0) {
        if (di) {
            func_0012D470();
        }
        return 0x80008005;
    }
    id = func_0012E460();
    if (id < 0) {
        p->f0 = D_001ACE00;
        D_001ACE00 = p;
        p->id = 0;
        if (di) {
            func_0012D470();
        }
        return id;
    }
    p->f8 = f8;
    p->arg = arg;
    p->id = id;
    func_0012E7C8(id, arg0, func_0012E918, p);
    func_0012E650(id);
    if (di) {
        func_0012D470();
    }
    return ((u32)p << 4) | (id & 0xFE) | 1;
}
