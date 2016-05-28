# dynamic library ex
This is an example that illustrates how to build/use dynamic libraries.

##Environment
OS X El Capitan (tested on 10.11.5)
clang 7.3.0

##Description

```bash:
# build a dynamic library named "libfizzbuzz.dylib"
make -C src 
# put "libfizzbuzz.dylib" to ./lib and put "fizzbuzz.h" to ./include
make -C src install
# build an executable named "main"
make -C src-exec
# run the executable
./src-exec/main
```

