/* Not matching yet: BYTES 3/48 (tools/try_func.py func_L00_006EE740 --diff). Not part of the build. */
extern void func_L00_006BB4A8(void *);
typedef unsigned int V4 __attribute__((vector_size(16)));

void func_L00_006EE740(u8 *arg0) {
    func_L00_006BB4A8(arg0);
    arg0[0x3A11] = 0;
    arg0[0x3A13] = 0;
    *(V4 *)(arg0 + 0x3A40) = (V4){0, 0, 0, 0};
}
