# Files

- ## [cd](http://manpages.ubuntu.com/manpages/jammy/en/man1/cd.1.html)

  - change directory
  - examples

    ```bash
    cd dir  # This moves your shell to the selected dir
    ```

- ## [ls](http://manpages.ubuntu.com/manpages/jammy/en/man1/ls.1.html)

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

- ## [mkdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/mkdir.1.html)

  - make a directory
  - examples

    ```bash
    mkdir dir       # This creates a directory in you current directory
    mkdir /etc/dir  # This creates a directory in the directory you specify
    ```

- ## [rmdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/rmdir.1.html)

  - deletes an empty directories
  - examples

    ```bash
    mkdir dir       # This deletes an empty directory you specify
    ```

- ## [rm](http://manpages.ubuntu.com/manpages/jammy/en/man1/rm.1.html)

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

- ## [cp](http://manpages.ubuntu.com/manpages/jammy/en/man1/cp.1.html)

  - copies files or directories
  - examples

    ```bash
    cp file.txt dir  # This will copy a file to a directory
    cp -r dir dir    # This will copy a directory recursively to a directory 
    ```

- ## [dd](http://manpages.ubuntu.com/manpages/jammy/en/man1/dd.1.html)

  - Copy a file, converting and formatting according to the operands.
  - examples

    ```bash
    dd 
    ```

- ## [mv](http://manpages.ubuntu.com/manpages/jammy/en/man1/mv.1.html)

  - moves/rename files or directories
  - examples

    ```bash
    mv file newfile  # This will rename a file
    mv file.txt dir  # This will move a file to a directory
    mv dir dir       # This will move a directory to a directory 
    ```

- ## [chown](http://manpages.ubuntu.com/manpages/jammy/en/man1/chown.1.html)

  -
  - examples

    ```bash
    chown
    ```

- ## [chmod](http://manpages.ubuntu.com/manpages/jammy/en/man1/chmod.1.html)

  -
  - examples

    ```bash
    chmod
    ```
