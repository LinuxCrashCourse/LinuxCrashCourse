# Files

- [Files](#files)
  - [cd](#cd)
  - [ls](#ls)
  - [mkdir](#mkdir)
  - [rmdir](#rmdir)
  - [rm](#rm)
    - [Warnings](#warnings)
  - [cp](#cp)
  - [dd](#dd)
  - [mv](#mv)
  - [chown](#chown)
  - [chmod](#chmod)
  - [find](#find)
  - [shred](#shred)

[Acronyms]: Tabs/Base-Knowledge.md#acronyms

## [cd](http://manpages.ubuntu.com/manpages/jammy/en/man1/cd.1.html)

- change directory
- examples

  ```bash
  cd dir  # This moves your shell to the selected dir
  ```

## [ls](http://manpages.ubuntu.com/manpages/jammy/en/man1/ls.1.html)

- list content of a directory
- usage
- examples

  ```bash
  ls      # This list files/dirs in current dir equivalent to ls ./
  ls dir  # This list files/dirs in specified dir
  ls -l   # This list files/dirs with more information
  ls -A   # This list files/dirs including dot files excluding ./ ../
  ls -lh  # This list files/dirs is ls -l but human readable
  ```

## [mkdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/mkdir.1.html)

- make a directory
- examples

  ```bash
    mkdir dir       # This creates a directory in you current directory
    mkdir /etc/dir  # This creates a directory in the directory you specify
  ```

## [rmdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/rmdir.1.html)

- deletes an empty directories
- examples

  ```bash
  mkdir dir       # This deletes an empty directory you specify
  ```

## [rm](http://manpages.ubuntu.com/manpages/jammy/en/man1/rm.1.html)

- deletes files or directories
- examples

  ```bash
  rm file.txt             # This will a file you specify
  rm file1.txt file2.txt  # This will delete all files you specify
  rm -r dir               # This will recursively delete everything in a directory
  rm -i                   # This will prompt you before deleting a file
  rm -I                   # This will prompt you before deleting three files or when removing recursively
  ```

### Warnings

Treat rm with respect you cant recover file that have bean deleted with rm it **DOSE NOT** go to a trash can

- examples

  ```bash
  rm ./*    # This will every normal file in a directory
  rm ./.*   # This will every file in a directory
  rm -r .*  # This will recursively delete everything in a directory including the sub directory
  sudo rm -rf --no-preserve-root / #This will recursively delete everything in / your root directory
  # In other words this will delate everything on you system
  ```

## [cp](http://manpages.ubuntu.com/manpages/jammy/en/man1/cp.1.html)

- copies files or directories
- examples

  ```bash
  cp file.txt dir  # This will copy a file to a directory
  cp -r dir dir    # This will copy a directory recursively to a directory
  ```

## [dd](http://manpages.ubuntu.com/manpages/jammy/en/man1/dd.1.html)

- Copy a file, converting and formatting according to the operands.
- examples

  ```bash
  dd
  ```

## [mv](http://manpages.ubuntu.com/manpages/jammy/en/man1/mv.1.html)

- moves/rename files or directories
- examples

  ```bash
  mv file newfile  # This will rename a file
  mv file.txt dir  # This will move a file to a directory
  mv dir1 dir2       # This will move a directory to a directory
  cp -r dir1 dir2 && rm -R dir1 # This is like mv dir1 dir2 but will  a nested directorys with content
  ```

## [chown](http://manpages.ubuntu.com/manpages/jammy/en/man1/chown.1.html)

- Changes the who owns a file or dir
- examples

  ```bash
  chown r2r0m0c0 file/dir           # changes the owner of a file or dir
  chown r2r0m0c0:r2r0m0c0 file/dir  # changes the owner and group of a file or dir
  chown -R r2r0m0c0:r2r0m0c0 dir    # changes the owner and group of a file or dir recursive
  chown -r r2r0m0c0:r2r0m0c0 dir    # is invalid chown is case sensitive
  chown 1000:1000 file/dir          # changes the owner and group of a file or dir using uid and gid
  ```

## [chmod](http://manpages.ubuntu.com/manpages/jammy/en/man1/chmod.1.html)

-
- examples

  ```bash
  chmod
  ```

## [find](http://manpages.ubuntu.com/manpages/jammy/en/man1/find.1.html)

Find is an incredibly powerfully tool for locating files on directories on a linux machines
Im going to start with some of the basic syntax and then some example

- -name <u>pattern</u>
  - Searches for file Base of file name
- -type _
  - d directory
  - f file
  - l symbolic link
- -maxdepth <u>levels</u>
  - Descend  at  most  <u>levels</u> integer
- -maxdepth <u>levels</u>
  - Starts searching at <u>levels</u> integer
- -user <u>username</u>
  - Serche for items owed by specified user [UID][Acronyms] is also valid.
- -group <u>group</u>
  - Serche for items owed by specified group [GID][Acronyms] is also valid.
- -mtime <u>n</u>
  - File was last modified <u>n</u> days  ago.
- -atime <u>n</u>
  - File was last accessed <u>n</u> days  ago.

- examples

  ```bash
  find ./ -name "*.cc"                               # print all file with .cc extension
  find ./ -name "Makefile"                           # print all file with name Makefile 
  sudo find ./ -type f -exec chmod 664 {} \;         # changes permission on all file
  sudo find ./ -type d -exec chmod 775 {} \;         # changes permission on all dirs 
  find ./ -type f -name "*.png" -exec rm {} \;       # deletes all file with .png extension
  find ./ -empty -delete                             # deletes all empty files and dirs
  find ./ -type d -exec rmdir {} \;                  # deletes all empty dirs
  find ./ -type f -exec shred -u  {} \;              # shreds and deletes all files 
  find ./ -type f -exec mv {} dir \;                 # moves all files to dir
  find ./ -type f -name "*.rar" -exec unrar x {} \;  # unrars all rar files
  find ./ -group user -exec chgrp -h users {} \;     # changes the group for user to users
  find ./ -maxdepth 1 -type f -name "*.mkv" -exec mv {} dir \;     # moves all files in current dir with .mkv extension to dir
  find ./ -maxdepth 2 -type f -name "*.mkv" -exec mv {} dir \;     # moves all files in current dir with .mkv extension to dir
  find ./ -type f -maxdepth 1 -name "*.mkv" -exec mv {} dir \;     # is invalid because maxdepth is a global option so must go before type
  find ./ -type f -ls | awk '{sum += $7; n++;} END {print sum/n;}' # averages size of all files
  ```

## [shred](http://manpages.ubuntu.com/manpages/jammy/en/man1/shred.1.html)

- overwrite a file to hide its contents
- examples

  ```bash
    shred file    # overwrite data in file
    shred -u file # overwrite and deletes data in file
  ```
