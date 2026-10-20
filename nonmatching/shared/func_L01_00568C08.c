/* Not matching yet: BYTES 12/428 (tools/try_func.py func_L01_00568C08 --diff). Not part of the build. */
typedef struct { s32 f0; s32 f4; s32 f8; } Type1;
typedef struct { s32 f0; s32 f4; } Type2;
typedef struct { char _p0[0x14]; s32 (*f14)(); } Type3;

extern Type3 *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L00_005C8CF0(s16);
extern s32 func_L00_00702698(s32, s32);
extern void func_L01_005926C8(void *, s32, s32);
extern s32 D_0021EBD8;
extern Type2 D_003BAC08[];
extern Type1 D_003BAC60[];
extern s32 D_0021DE10;
s32 D_0021E824 = 0;
s32 D_0021E828 = 0;

/* Find the table entry matching the object's type and current state, then apply it */
void func_L01_00568C08(u8 *obj) {
    Type3 *cb;
    s32 found;
    s32 i;
    s32 t;

    cb = func_L00_005DEBD0(0x20A3, 0x10, 0x1C);
    if (cb != 0 && cb->f14 != 0 && cb->f14() != 0) {
        return;
    }
    if (*(u16 *)(obj + 0xBC) == 0x2726 || *(u16 *)(obj + 0xBC) == 0x2727) {
        return;
    }
    found = 0;
    i = 0;
    func_L00_005C8CF0(*(u16 *)(obj + 0xBC));
    for (; D_003BAC60[i].f0 != -1; i++) {
        if (*(s16 *)(obj + 0xBC) == D_003BAC08[D_003BAC60[i].f0].f0) {
            t = D_003BAC60[i].f4;
            if (D_0021E824 == 0 && D_0021E828 == 1 ? D_0021DE10 - 0x14 == t : D_0021DE10 == t) {
                if (D_003BAC60[i].f8 == 0 || func_L00_00702698(D_003BAC60[i].f8, 0) == D_0021EBD8) {
                    found = 1;
                    break;
                }
            }
        }
    }
    if (found) {
        func_L01_005926C8(obj, D_003BAC08[D_003BAC60[i].f0].f4, D_003BAC08[D_003BAC60[i].f0].f0);
    }
}
