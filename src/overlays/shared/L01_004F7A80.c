#include "common.h"

typedef unsigned int u128 __attribute__((mode(TI)));
struct Type0 {
    char pad0[0x18];
    unsigned char *unk18;
    char pad1C[4];
    u128 unk20;
};
extern struct Type0 D_00242340;
extern void func_L01_004F7D50(unsigned char *unused, unsigned char *object);
extern void func_L01_004F8918(unsigned char *a, unsigned char *b, u128 v);

static inline unsigned char *root_of(unsigned char *p) {
    while (*(unsigned char **)(p + 0xB8) != 0) {
        p = *(unsigned char **)(p + 0xB8);
    }
    return p;
}

int func_L01_004F7A80(unsigned char *self, unsigned char *object) {
    if (D_00242340.unk18 != 0) {
        unsigned char *a = *(unsigned char **)(object + 0x58);
        if (a != 0 && root_of(a) == root_of(D_00242340.unk18)) {
            return 0;
        }
        *(unsigned char **)(object + 0x3C) = D_00242340.unk18;
        func_L01_004F7D50(self, object);
        *(u128 *)(self + 0x10) = *(u128 *)(object + 0x90);
    } else {
        *(u128 *)(self + 0x10) = D_00242340.unk20;
    }
    func_L01_004F8918(self, object, *(u128 *)(self + 0x10));
    *(float *)(object + 0x14) = *(float *)(object + 0x38);
    return 1;
}
