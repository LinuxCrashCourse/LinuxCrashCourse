# Binary Dump Utilities

- [Binary Dump Utilities](#binary-dump-utilities)
  - [xxd](#xxd)
  - [od](#od)
  - [objdump](#objdump)

## [xxd]([https://manpages.ubuntu.com/manpages/jammy/en/man1/xxd.1.html)

- xxd is a binary dump utility
- examples

  ```bash
  xxd filename       #dump file contents hex and ASCII
  xxd -l len filename #stop after len octets
  ```

## [od]([https://manpages.ubuntu.com/manpages/jammy/en/man1/od.1.html)

- od dumps binary files as octal, hex or ASCII
- examples

  ```bash
  od filename       #dump file as octal by default
  od -c filename    #dump file in ASCII
  od -cx filename   #dump file as hex and ASCII
  ```

## [objdump]([https://manpages.ubuntu.com/manpages/jammy/en/man1/objdump.1.html)

- objdump displays the contents of object files
- examples

  ```bash
  objdump -d executable       #display executable as assembler
  objdump -d file.o           #display object file as assembler
  ```
