/* Not matching yet: BYTES 9/216 (tools/try_func.py func_L01_004414B0 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
extern void func_L00_005B0038(void *, void *, s32);
extern s32 func_L00_005BCA18(void *);
extern void func_L00_005DD4A0(void *);
extern s32 func_L00_005E60D0(s32, s32);
extern char D_00222A98[];
extern void func_L01_00441AB0(void);

// Ticks an object's timer; kills it when it or its owner is dying or time runs out, else reschedules.
void func_L01_004414B0(char *obj) {
    char *data = *(char **)(obj + 0xAC);
    char *owner;
    *(u16 *)(obj + 0x6A) = *(u16 *)(obj + 0x6A) + 1;
    if (obj == 0 || *(u8 *)(obj + 0x20) == 0xFE || *(u8 *)(obj + 0x20) == 0xFD
        || (owner = *(char **)(obj + 0xB8)) == 0
        || *(u8 *)(owner + 0x20) == 0xFE || *(u8 *)(owner + 0x20) == 0xFD
        || *(u16 *)(obj + 0x6A) >= *(s16 *)(data + 0xC)) {
        func_L00_005DD4A0(obj);
        return;
    }
    if (func_L00_005BCA18(data + 0xF) != 0) {
        *(u8 *)(data + 0xE) ^= 1;
        *(u8 *)(data + 0xF) = func_L00_005E60D0(2, 4);
    }
    func_L00_005B0038(D_00222A98, func_L01_00441AB0, (s32)obj);
}
