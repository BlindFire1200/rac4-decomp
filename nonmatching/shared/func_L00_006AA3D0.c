/* Not matching yet: BYTES 18/128 (tools/try_func.py func_L00_006AA3D0 --diff). Not part of the build. */
extern u8 *D_00343EA0[];
typedef void (*Type1)(void *);

void func_L00_006AA3D0(void) {
    s32 i = 0;
    do {
        u8 *node = D_00343EA0[i];
        if (node != 0) {
            do {
                u8 *object = *(u8 **)(node + 0x14);
                Type1 callback = *(Type1 *)(object + 0xC);
                node = *(u8 **)(node + 0xC);
                callback(node);
            } while (node != 0);
        }
        i++;
    } while (i < 7);
}
