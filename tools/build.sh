#!/usr/bin/env bash
# Compile every src/**/*.c with the matching compiler into build/obj/.
#   bash tools/docker/run.sh bash tools/build.sh      (Linux/macOS)
#   JOBS=32 bash tools/build.sh                       (files compiled at a time; default 1)
# Compiler: SN GCC 2.95.3 v1.36 from the ProDG 3.01 mirror, -O2 -G8 -fopt-stack
# (SN-only flag: 8-byte register save slots, as retail; found by the UYA decomp).
set -euo pipefail
cd "$(dirname "$0")/.."
export WINEDEBUG=-all
rm -rf build/obj && mkdir -p build/obj
one() {
    f=$1
    o=build/obj/$(echo "${f#src/}" | tr '/' '_' | sed 's/\.c$/.o/')
    # a file may add flags with a first-lines comment:  /* cflags: -mno-split-addresses */
    extra=$(head -3 "$f" | sed -n 's#^/\* cflags: \(.*\) \*/#\1#p')
    bash tools/cc.sh "$f" "$o" $extra
}
export -f one
files=$(find src -name '*.c' -not -path 'src/libgcc/*' -not -path 'src/libm/*' | sort)
echo "$files" | xargs -P "${JOBS:-1}" -I{} bash -c 'one "$1"' _ {}
echo "compiled $(echo "$files" | wc -l | tr -d ' ') files into build/obj/"
