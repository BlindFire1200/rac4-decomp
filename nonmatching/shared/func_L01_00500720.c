/* Not matching yet: BYTES 2/356 (tools/try_func.py func_L01_00500720 --diff). Not part of the build. */
typedef int u128 __attribute__((mode(TI)));

extern void *func_005A16E8(void *);
extern void *func_L00_005DEBD0(s32, s32, s32);
extern void *func_L00_005EAC30(void *);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);
extern void func_L01_005A1B38();

// Sync the linked object's position, pick its +0x30 value, and on a hit fire callbacks and move to state 11.
s32 func_L01_00500720(u8 *self) {
    u8 *linked;
    u8 *obj;
    u8 *info;
    u8 *other;
    void (*fn)(void);
    u8 *cb;

    if (self[0x69] == 0) return 0;
    linked = *(u8 **)(self + 0xAC);
    obj = *(u8 **)(linked + 0x1D8);
    if (obj == 0 || obj[0x20] == 0xFE) return 1;
    if (obj[0x20] == 0xFD) return 1;
    info = func_L00_005EAC30(obj);
    other = func_005A16E8(*(u8 **)(linked + 0x1D8));
    *(u128 *)(self + 0x10) = *(u128 *)(*(u8 **)(linked + 0x1D8) + 0x10);
    if (*(f32 *)info <= 0.0f) return 1;
    if (self[0x69] >= 3 || *(f32 *)info < (f32)*(s32 *)(info + 4)) {
        *(s32 *)(other + 0x30) = *(s32 *)(linked + 0x1C8);
    } else {
        *(s32 *)(other + 0x30) = *(s32 *)(linked + 0x1C4);
    }
    func_L01_005A1B38(*(u8 **)(linked + 0x1D8));
    if (*(s16 *)(info + 0x26) > 0) {
        if (self[0x20] == 0xB && self[0x69] == 4) return 0;
        (*(void (**)(void *))(*(u8 **)(linked + 0x204) + 0x34))(*(u8 **)(linked + 0x1D8));
        if (linked[0x1F3] == 0) {
            cb = func_L00_005DEBD0(0x2682, 0, 0x28);
            if (cb != 0) {
                fn = *(void (**)(void))(cb + 0x14);
                if (fn != 0) fn();
            }
        }
        linked[0x1F3] = 1;
        func_L01_00591BD8(self, 0xB, 4);
    }
    return 0;
}
