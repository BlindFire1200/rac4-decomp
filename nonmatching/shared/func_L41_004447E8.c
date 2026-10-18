/* Not matching yet: BYTES 12/168 (tools/try_func.py func_L41_004447E8 --diff). Not part of the build. */
typedef struct {
    u8 pad0[0x1C];
    s32 f1C;
    u8 pad20[0x218 - 0x20];
    s32 f218;
    u8 pad21C[0x258 - 0x21C];
    s32 f258;
    u8 pad25C[0x7F4 - 0x25C];
    s32 f7F4;
} Type1;

extern s32 func_L00_006D2920(void *, s32);
extern s32 D_0036D604_[];
#define D_0036D604 (D_0036D604_[0])
extern Type1 D_172160[];

// Returns 1 unless a timer/state check on D_172160 fails, then also requires the object's flag and func_L00_006D2920.
s32 func_L41_004447E8(void *arg0) {
    s32 r;
    s32 flag;
    void *p;

    r = 1;
    if (D_172160->f258 == 0 && D_172160->f1C >= 2
        && D_172160->f7F4 < D_172160->f218 - 3000
        && D_0036D604 > 0) {
        if (D_0036D604 + 25000 < D_172160->f218) r = 0;
    }
    if (arg0 != 0) {
        if (*(s32 *)((u8 *)arg0 + 0x25CC) != 0x9B && (p = *(void **)((u8 *)arg0 + 0x2F28)) != 0) {
            flag = *(s32 *)((u8 *)p + 4) != 0;
        } else {
            flag = 0;
        }
        if (flag == 0) r = 0;
        if (func_L00_006D2920(arg0, flag) == 0) r = 0;
    }
    return r;
}
