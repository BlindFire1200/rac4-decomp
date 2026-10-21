#include "common.h"

typedef struct Type2 Type2;

typedef struct Type3 {
    u8 pad0[0x13C];
    void (*f13C)(Type2 *);
    void (*f140)(Type2 *);
    s32 (*f144)(Type2 *);
    void (*f148)(Type2 *, s32);
    s32 (*f14C)(Type2 *);
    void (*f150)(Type2 *, s32);
} Type3;

struct Type2 {
    u8 pad0[0xC];
    Type2 *fC;
    u8 pad10[0x58 - 0x10];
    Type3 *f58;
    u8 pad5C[0xA8 - 0x5C];
    u8 fA8;
    u8 fA9;
};

typedef struct Type1 {
    u8 pad0[0x64];
    Type2 *f64[(0x108 - 0x64) / 4];
    Type2 *f108;
    s32 f10C;
    u8 pad110[0x118 - 0x110];
    s32 f118;
    s32 f11C;
    s32 f120;
} Type1;

extern void func_00506B70(s32);
extern void func_L00_0071D098(Type1 *, s32, s32);

/* PAL version of func_L00_00719430: menu page switch, handle back (0x2A), pending push
   (+0x120), pending switch (+0x11C / +0x118); on PAL the pending field and +0x10C are
   cleared before the new page's handlers run. */
void func_L00_0071D280(Type1 *m) {
    s32 a = -1;
    s32 b = -1;
    s32 sel;
    s32 cur;
    Type2 *w;
    Type2 *old;
    u8 v;
    s32 one;

    if (m->f108 != 0) {
        b = m->f108->f58->f144(m->f108);
    }
    cur = m->f118;
    if (cur == 0x2A) {
        v = m->f108->fA8;
        if (v == 1) {
            if (m->f108->fA9 == v) {
                func_00506B70(4);
            }
            m->f108->f58->f140(m->f108);
            if (m->f108->fA9 == v) {
                func_00506B70(0);
            }
            m->f108 = m->f108->fC;
        } else {
            sel = m->f108->f58->f14C(m->f108);
            func_L00_0071D098(m, m->f108->f58->f144(m->f108), sel);
            if (sel != a) {
                m->f108->f58->f140(m->f108);
                m->f108 = m->f64[sel];
                m->f108->f58->f150(m->f108, b);
                m->f118 = -1;
                m->f10C = 0;
                m->f108->f58->f13C(m->f108);
            }
        }
        m->f10C = 0;
        m->f118 = -1;
        return;
    }
    if (m->f120 != -1) {
        if (m->f108 != 0) {
            a = m->f108->f58->f144(m->f108);
        }
        old = m->f108;
        w = m->f64[m->f120];
        m->f108 = w;
        w->fC = old;
        m->f108->f58->f150(m->f108, b);
        m->f108->f58->f148(m->f108, a);
        one = 1;
        m->f108->fA8 = one;
        if (old->f58->f144(old) == 0xA || old->f58->f144(old) == 0x11 ||
            old->f58->f144(old) == 0x19 || old->f58->f144(old) == 0x1C ||
            old->f58->f144(old) == 0x1E || old->f58->f144(old) == 0x23 ||
            old->fA9 == one) {
            m->f108->fA9 = 1;
        } else {
            m->f108->fA9 = 0;
        }
        if (m->f108->fA9 == 1) {
            func_00506B70(4);
        }
        m->f10C = 0;
        m->f120 = -1;
        m->f108->f58->f13C(m->f108);
        if (m->f108->fA9 == 1) {
            func_00506B70(0);
        }
        return;
    }
    if (m->f11C != -1) {
        if (m->f108 != 0) {
            a = m->f108->f58->f14C(m->f108);
            m->f108->f58->f140(m->f108);
        }
        m->f108 = m->f64[m->f11C];
        m->f11C = -1;
        m->f10C = 0;
        m->f108->f58->f150(m->f108, b);
        m->f108->f58->f148(m->f108, a);
        m->f108->fA8 = 0;
        m->f108->fA9 = 0;
        m->f108->f58->f13C(m->f108);
    } else if (cur != -1) {
        if (m->f108 != 0) {
            a = m->f108->f58->f144(m->f108);
            m->f108->f58->f140(m->f108);
        }
        m->f108 = m->f64[m->f118];
        m->f118 = -1;
        m->f10C = 0;
        m->f108->f58->f150(m->f108, b);
        m->f108->f58->f148(m->f108, a);
        m->f108->fA8 = 0;
        m->f108->fA9 = 0;
        m->f108->f58->f13C(m->f108);
    }
}
