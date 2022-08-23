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
- examples

  ```bash
  ls      # Lists files/dirs in current dir equivalent to ls ./
  ls dir  # Lists files/dirs in specified dir
  ls -l   # Lists files/dirs with more information
  ls -A   # Lists files/dirs including dot files excluding ./ ../
  ls -lh  # Lists files/dirs is ls -l but human readable
  ls -lt  # Lists file sorted by time, latest is first
  ls -ltr # Lists sorted by mod time, latest is last
  ```

## [mkdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/mkdir.1.html)

- make a directory
- examples

  ```bash
    mkdir dir       # Creates a directory in the current directory
    mkdir /etc/dir  # Creates a directory in the specified directory (/etc)
  ```

## [rmdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/rmdir.1.html)

- deletes empty directories
- examples

  ```bash
  rmdir dir  # Deletes ./dir if it is empty
  ```

## [rm](http://manpages.ubuntu.com/manpages/jammy/en/man1/rm.1.html)

- deletes files or directories
- examples

  ```bash
  rm file.txt     # Deletes file.txt
  rm a.txt b.txt  # Deletes a.txt and b.txt
  rm -r dir       # Deletes recursively all files under dir
  rm -i           # Prompts before deleting a file
  rm -I           # Prompts before deleting multiple files, will ask after each 3 or when removing recursively
  ```

### Warnings

Treat rm with respect you cant recover file that have bean deleted with rm it **DOSE NOT** go to a trash can

- examples

  ```bash
  rm ./*    # Delete every normal file in a directory
  rm ./.*   # Delete every file in a directory
  rm -r .*  # VERY DANGEROUS! Deletes all files on the hard drive!
  sudo rm -rf --no-preserve-root / #Nuke EVERYTHING
  ```

## [cp](http://manpages.ubuntu.com/manpages/jammy/en/man1/cp.1.html)

- copies files or directories
- examples

  ```bash
  cp a.txt dir     # Copy a.txt to dir
  cp -r dir1 dir2  # Copy dir1 and all contents into dir2
  ```

## [dd](http://manpages.ubuntu.com/manpages/jammy/en/man1/dd.1.html)

- Low level block copy a file, converting and formatting according to the operands.
- examples

  ```bash
  dd if=/dev/zero of=myfile bs=1k count=1k      # Create a 1MB file of zeros
  dd if=rasbian.iso of=/dev/sdc1                #Copy an iso file direct to a USB drive plugged in
  dd if=/dev/random of=mykey.txt bs=1 count=32  #write 32 bytes of random bits to a file for use as a secret password
  ```

[dev random](https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=775328)

## [mv](http://manpages.ubuntu.com/manpages/jammy/en/man1/mv.1.html)

- moves/rename files or directories
- examples

  ```bash
  mv a b        # Rename file a as b
  mv a b dir    # Move both a and b to dir
  mv dir1 dir2  # If dir2 does not exist, rename dir1 as dir2. If it does exist, move dir1 into dir2
  cp -r dir1 dir2 && rm -R dir1 # This is like mv dir1 dir2 but will recursively move the directory a nested directorys with content
  ```

## [chown](http://manpages.ubuntu.com/manpages/jammy/en/man1/chown.1.html)

- Changes the who owns a file or dir
- examples

  ```bash
  chown richie file/dir             # Changes the owner of a file or dir
  chown richie:boss file/dir        # Changes the owner and group of a file or dir
  chown -R r2r0m0c0:r2r0m0c0 dir    # Changes the owner and group of a file or dir recursive
  chown -r r2r0m0c0:r2r0m0c0 dir    # is invalid chown is case sensitive
  chown 1000:1000 file/dir          # changes the owner and group of a file or dir using uid and gid
  ```

## [chmod](http://manpages.ubuntu.com/manpages/jammy/en/man1/chmod.1.html)

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
  - Search for items owed by specified user [UID][Acronyms] is also valid.
- -group <u>group</u>
  - Search for items owed by specified group [GID][Acronyms] is also valid.
- -mtime <u>n</u>
  - File was last modified <u>n</u> days  ago.
- -atime <u>n</u>
  - File was last accessed <u>n</u> days  ago.

- examples

  ```bash
  find . -name "*.cc"                                # Print all files with .cc extension
  find . -name "Makefile"                            # Print all files with name Makefile 
  sudo find . -type f -exec chmod 664 {} \;          # Change permission on all files
  sudo find . -type d -exec chmod 775 {} \;          # Change permission on all dirs 
  find . -type f -name "*.png" -exec rm {} \;       # Delete all plain files with .png extension
  find . -empty -delete                             # Delete all empty files and dirs
  find . -type d -exec rmdir {} \;                  # Delete all empty dirs
  find . -type f -exec shred -u  {} \;              # Shred and delete all files 
  find . -type f -exec mv {} dir \;                 # Moves all plain files to dir
  find . -type f -name "*.rar" -exec unrar x {} \;  # Unrar all rar files into current dir
  find . -group user -exec chgrp -h user2 {} \;     # Change the group for user to user2
  find . -maxdepth 1 -type f -name "*.mkv" -exec mv {} dir \;     # Move all files in current dir with .mkv extension to dir
  find . -maxdepth 2 -type f -name "*.mkv" -exec mv {} dir \;     # Move all files in top 2 dirs with .mkv extension to dir
  find . -type f -maxdepth 1 -name "*.mkv" -exec mv {} dir \;     # is invalid because maxdepth is a global option so must go before type
  find . -type f -ls | awk '{sum += $7; n++;} END {print sum/n;}' # averages size of all files
  find . -name "*.cc" -newermt "2022-07-21"        # Find all .cc files since July 21, 2022
  ```

## [shred](http://manpages.ubuntu.com/manpages/jammy/en/man1/shred.1.html)

- overwrite a file to hide its contents
- examples

  ```bash
  shred file    # Overwrite data in file
  shred -u file # Overwrite and deletes data in file
  ```
