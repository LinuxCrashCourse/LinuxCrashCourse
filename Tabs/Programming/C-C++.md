# C/C++

- [C/C++](#cc)
  - [gcc/g++](#gccg)
  - [Clang](#clang)
  - [gdb](#gdb)
  - [cgdb](#cgdb)
  - [valgrind](#valgrind)
  - [bytehound](#bytehound)
  - [gprof](#gprof)

## [gcc/g++]([http://manpages.ubuntu.com/manpages/jammy/en/man1/gcc.1.html])

- gcc/g++ is one of the most popular compilers and is installed on most desktop linux distribution by default.
- gcc and g++ are functionally the same the difference is gcc is for C and g++ is for C++.
- usage `gcc/g++` the program you want to compile
- examples

  ```bash
  gcc helloworld.c
  g++ helloworld.cc


g++ mycode.cc                   #compile mycode.cc link, and generate executable a.out
g++ -g a.cc			#compile a.cc with debugging information
g++ mycode.cc -o myexecutable   #compile mycode.cc and generate executable myexecutable
g++ -c a.cc                     #compile a.cc and create the object file a.o
g++ -O2 a.cc                    #compile a.cc with maximum ordinary optimization
g++ a.cc b.cc -lpthread         #compile a.cc and b.cc and link with pthread library
g++ a.cc b.o  -Llibs -lmylib    #compile a.cc, link with already compiled b.o with library libmylib.a or libmylib.so (on linux)
g++ -Bstatic ..	     		# static link
g++ -Bdynamic ...		# dynamic link

libxxx.a		# static link library (archive)
libxxx.so               # dynamic link library on linux
xxx.lib                 # front end sort of equivalent to .a on windows
xxx.dll                 # dynamic link library on Windows
xxx.dylib               # dynamic link library on Mac OSX
  ```

- Flags
  - Optimizing
    - -O0 This is the default. this has the fastest compile time and is bent for debugging
    - -O1 Optimize This turns on basic optimizations
    - -O2 Optimize even more. This turns on nearly all supported optimizations that that gcc has.
    - -O3 Optimize yet more. This turns on all optimizations and can cause problems.
  - Debugging
    - -g This is the Debugging flag to use [gdb/cgdb](./gdb-cgdb.md)

## [Clang](http://manpages.ubuntu.com/manpages/jammy/en/man3/Clang.3.html)

- Clang is another one of the most popular compilers
- usage ``
- examples

  ```bash
  
  ```

## [gdb](http://manpages.ubuntu.com/manpages/jammy/en/man1/gdb.1.html)

- one of the most popular debuggers
- usage `gdb` the program you want to debug
- examples

  ```bash
  cgdb a.out
  gdb a.out
  ```

## [cgdb](http://manpages.ubuntu.com/manpages/jammy/en/man1/cgdb.1.html)

- curses based frontend to GDB
- usage `gdb` the program you want to debug
- examples

  ```bash
  cgdb a.out
  gdb a.out
  ```

## [valgrind](http://manpages.ubuntu.com/manpages/jammy/en/man1/valgrind.1.html)

## [bytehound](https://github.com/koute/bytehound/releases)

## [gprof](http://manpages.ubuntu.com/manpages/jammy/en/man1/gprof.1.html)
