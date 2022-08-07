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
  g++ mycode.cc                   # compile mycode.cc link, and generate executable a.out
  g++ -g a.cc                     # compile a.cc with debugging information
  g++ -Wall a.cc                  # compile a.cc showing all warnings (clean your code!)
  g++ mycode.cc -o myexecutable   # compile mycode.cc and generate executable myexecutable
  g++ -c a.cc                     # compile a.cc and create the object file a.o
  g++ -O2 a.cc                    # compile a.cc with maximum ordinary optimization
  g++ a.cc b.cc -lpthread         # compile a.cc and b.cc and link with pthread library
  g++ a.cc b.o  -Llibs -lmylib    # compile a.cc, link with already compiled b.o with library in directory libs libmylib.a or libmylib.so (on linux)
  g++ -Bstatic ..                 # link to static library (.a)
  g++ -Bdynamic ...               # link to dynamic library (.so)
  g++ -c -fPIC a.cc               # generate Position Independent Code suitable for putting in shared object
  g++ -shared -Wl,-soname,liba.so.1 -o liba.so.1.0.1 a.o    #build dynamic library
  g++ -fsanitize=address -fno-omit-frame-pointer a.cc # generate code testing memory bounds
  ```

<details><summary>In Depth Information</summary>

- gcc vs g++
- Flags
  - Optimizing
    - -O0 This is the default. this has the fastest compile time and is bent for debugging
    - -O1 Optimize This turns on basic optimizations
    - -O2 Optimize even more. This turns on nearly all supported optimizations that that gcc has.
    - -O3 Optimize yet more. This turns on agressive optimizations that can cause problems.
  - Debugging
    - -g Add debugging symbols so the program can be debugged [gdb/cgdb](./gdb-cgdb.md)

- Link Library
  - libxxx.a                # static link library (archive)
  - libxxx.so               # dynamic link library on linux
  - xxx.lib                 # front end sort of equivalent to .a on windows
  - xxx.dll                 # dynamic link library on Windows
  - xxx.dylib               # dynamic link library on Mac OSX

- Position Independent Code

</details>

## [Clang](http://manpages.ubuntu.com/manpages/jammy/en/man3/Clang.3.html)

- Clang is a more research-oriented compiler. The error messages are better, it is modular and generally somewhat ahead of gcc in implementing new language features. The clang and clang++ parameters are kept largely compatible with gcc and g++.
- examples

  ```bash
  clang a.c              # compiles c code generating a.out
  clang++ -g -O2 a.cc    # compile c++ with debugging and all normal optimization on   
  ```

## [gdb](http://manpages.ubuntu.com/manpages/jammy/en/man1/gdb.1.html)

- one of the most popular debuggers
- examples
  
  ```bash
  gdb a.out
  gdb --args myprog program arguments go here
  ```

- gdb commands

  ```gdb
  b func          # set breakpoint on entry to function
  b file.cc:33    # set breakpoint in file.cc at line 33
  b +lines        # set breakpoints lines below current
  tb +5           # set a temporary breakpoint (1 time)
  r               # run program (or re-run if started)
  c               # continue running until the next
                  # breakpoint or the end
  f               # finish the current function and stop
  n               # next (step one line)
  s               # step (step into function or 1 line)

  u               # up (back to previous function)
  d               # down (into function called)
  bt              # display stack trace

  p var           # print current value of a variable
  p 5*3+2.6       # print an expression
  p a = 3         # set variable a=0
  p/x a           # print variable a in hex
  disp a          # print every time debugger stops
  q               # quit

  ```

## [cgdb](http://manpages.ubuntu.com/manpages/jammy/en/man1/cgdb.1.html)

- curses based frontend to GDB
- examples

  ```bash
  cgdb a.out # Opens a C/C++ compiled binary in gdb
  ```

## [valgrind](http://manpages.ubuntu.com/manpages/jammy/en/man1/valgrind.1.html)

- [manual](https://valgrind.org/docs/manual/manual.html)
- run program and find memory bugs
- examples

  ```bash
  valgrind a.out
  valgrind --leak-check=full a.out  #find all memory leaks and where they occurred
  ```

## [bytehound](https://github.com/koute/bytehound/releases)

## [gprof](http://manpages.ubuntu.com/manpages/jammy/en/man1/gprof.1.html)

- gprof is a C/C++ profiler

  ```bash
  g++ -g a.cc -pg      # compile with profiling information
  ./a.out              # run the program, which writes to gmon.out
  gprof a.out gmon.out >analysis.txt    # reads in gmon.out and displays the profiling information
  ```
