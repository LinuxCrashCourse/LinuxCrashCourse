LinuxCrashCourse

- [Needs a place](#needs-a-place)
- [Core-Commands](#core-commands)
- [Files-Details](#files-details)
- [Processes](#processes)
- [Networking](#networking)
- [Storage](#storage)
- [Programming](#programming)
- [Programming](#programming-1)
	- [C/C++](#cc)
	- [Rust](#rust)
	- [python](#python)
- [Debugging-Information](#debugging-information)
- [Advanced](#advanced)
- [Terminal](#terminal)
	- [Shells](#shells)
	- [Editors](#editors)
	- [Keyboard shortcuts](#keyboard-shortcuts)
- [External_Resources](#external_resources)
- [Crypto](#crypto)
- [Fun](#fun)

<!-- - # Best Linux Resources on the web -->

# Needs a place

- ## [grep]() [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html)
- ## [echo](http://manpages.ubuntu.com/manpages/jammy/en/man1/echo.1.html)

  sudo echo verbose echo "" | sudo tee /etc/apt/preferences.d/ not verbose echo
  "" | sudo tee /etc/apt/preferences.d/ > /dev/null

- sed
- awk
- su
- cut
- paste
- tr

# [Core-Commands](Tabs/Core-Commands.md)

These commands are the most fundamental??? These commands are the most
importent???

Note: any command run with superuser privilege (cursor is #) must be run with
sudo

- ## [man](http://manpages.ubuntu.com/manpages/jammy/en/man1/man.1.html)

<!-- ownership/permissions Meaning -->

# [Files-Details](Tabs/Files-Details.md)

- ## [cd](Tabs/Files-Details.md#cd) Change directory [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/cd.1.html)
- ## [ls](Tabs/Files-Details.md#ls) List contents of directory [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/ls.1.html)
- ## [cat](Tabs/Files-Details.md#cat) [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/cat.1.html)
- ## [mkdir](Tabs/Files-Details.md#mkdir) make directory [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/mkdir.1.html)
- ## [rmdir](Tabs/Files-Details.md#rmdir) deleate directory [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/rmdir.1.html)
- ## [rm](Tabs/Files-Details.md#rm) deleate file/directory [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/rm.1.html)
- ## [cp](Tabs/Files-Details.md#cp) copy file/directory [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/cp.1.html)
- ## [mv](Tabs/Files-Details.md#mv) move file/directory [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/mv.1.html)
- ## [chown](Tabs/Files-Details.md#chown) change ownership of file/directory [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/chown.1.html)
- ## [chmod](Tabs/Files-Details.md#chmod) change permissions of file/directory [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/chmod.1.html)
- ## [less](Tabs/Files-Details.md#less) [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/less.1.html)
- ## [find](Tabs/Files-Details.md#find) a tool to search for a file or dir [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/find.1.html)
- ## [locate](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html)

# [Processes](Tabs/Processes.md)

- ## [htop](http://manpages.ubuntu.com/manpages/jammy/en/man1/htop.1.html)
- ## [kill](http://manpages.ubuntu.com/manpages/jammy/en/man1/kill.1.html)
- ## [grep](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html)
- ## [top](http://manpages.ubuntu.com/manpages/jammy/en/man1/top.1.html)
- ## [ps](http://manpages.ubuntu.com/manpages/jammy/en/man1/ps.1.html)

# [Networking](Tabs/Networking.md)

- ## [ping](http://manpages.ubuntu.com/manpages/jammy/en/man1/ping.1.html)
- ## [ip](http://manpages.ubuntu.com/manpages/jammy/en/man8/ip.8.html)
- ## ssh
- ## scp
- ## sftp
- ## .ssh-config
- ## failtoban
- ## ufw
- ## iperf3

# Storage

- mount
- umount
- fdisk
- ln
- ncdu
- df "report file system disk space usage df(1), info"
- tar
- find
- diff
- partition
- gparted

# Programming

# Programming

## C/C++

- ## [gcc/g++](Programming/gcc-g++.md)
- ## [Clang](http://manpages.ubuntu.com/manpages/jammy/en/man3/Clang.3.html)
- ## [gdb/cgdb](Programming/gdb-cgdb.md)
- ## [valgrind]()
- ## [gprof]()
- profiling helps optimize by showing which parts of the code are taking the
  most time
- coverage? coverage testing validates whether sections of the code are untested

## Rust

- cargo

## python

# Debugging-Information

- journalctl
- systemctl
- dmesg
- lscpu
- lspci
- lsusb
- lsblk
- lstopo

# Advanced

- sed
- awk
- su

# Terminal

- ## [alias](http://manpages.ubuntu.com/manpages/jammy/en/man1/alias.1posix.html)
  - an alias is a method of creating a shortcut to a different command
  - recommended alias to ad to bashrc or equivalent file
    ```bash
    alias ll='ls -lh'
    alias la='ls -Alh'
    alias aud='pacmd unload-module module-udev-detect && pacmd load-module module-udev-detect'
    ```

## Shells

- [Bash](http://manpages.ubuntu.com/manpages/jammy/en/man1/bash.1.html)
- [zsh](http://manpages.ubuntu.com/manpages/jammy/en/man1/zsh.1.html)
- [fish](http://manpages.ubuntu.com/manpages/jammy/en/man1/fish.1.html)
- [tmux](http://manpages.ubuntu.com/manpages/jammy/en/man1/tmux.1.html)

## Editors

- nano
- vim
- emacs
- doom emacs
- vscode

- C++ IDEs
- clion free for educational use
- qtcreator free for open source use
-
- python IDE
- pycharm
-
- java
- intellij
- netbeans
- eclipse

## Keyboard shortcuts

- ctrl shift c
  - Copy
- ctrl shift v
  - Paste
- ctrl l
  - Clear terminal
- ctrl a
  - Go to beginning of line
- ctrl e
  - go to end of line
- ctrl r
  - reverse search through history
- tab
  - Auto complete
- !!
  - redo last command
  - examples
  ```bash
  ls
  sudo !! is equivalent to sudo ls
  ```

# External_Resources

- https://explainshell.com/#
- http://manpages.ubuntu.com/
- https://devhints.io/bash
- https://askubuntu.com
- https://wiki.archlinux.org

consider these tutorials

- https://ryanstutorials.net/linuxtutorial/

# Crypto

Cryptography is not easy, but it is vital. This may not be the first section you
study, but if you want to your computer to be secure, you should learn these
commands. [explain] (cryptoexplanation.md)

- ##openssl
- ## ssh-keygen
- ## gpg

# Fun

- ## [Stat](http://manpages.ubuntu.com/manpages/jammy/en/man1/stat.1.html)
  - display file or file system status
  - I haven't found a use for this yet but `stat /` will show you your installs
    Birthday
