# LinuxCrashCourse

- [LinuxCrashCourse](#linuxcrashcourse)
  - [Core-Commands](#core-commands)
  - [Files](#files)
  - [Processes](#processes)
  - [Networking](#networking)
  - [Storage](#storage)
  - [Terminal](#terminal)
  - [Archiving/Backup](#archivingbackup)
  - [Programming](#programming)
    - [C/C++](#cc)
    - [Rust](#rust)
    - [binary dump](#binary-dump)
  - [Debugging-Information](#debugging-information)
    - [Python](#python)
    - [Java](#java)
  - [Debugging/Information](#debugginginformation)
  - [Editors](#editors)
    - [C++ IDEs](#c-ides)
    - [Python IDEs](#python-ides)
    - [Java IDEs](#java-ides)
  - [User_Management](#user_management)
  - [External_Resources](#external_resources)
  - [Crypto](#crypto)
  - [String manipulation](#string-manipulation)
  - [Needs a place](#needs-a-place)

<!-- - # Best Linux Resources on the web -->
## [Core-Commands](Tabs/Core-Commands.md)

These commands are the most fundamental???
These commands are the most important???

[Base-Knowledge](Tabs/Base-Knowledge.md) is fundament to the rest of the information without this knowing whats you may not understand whats being said.

- [man](Tabs/Core-Commands.md#man) a cli interface for system reference manuals
- [sudo](Tabs/Core-Commands.md#sudo) execute a command as root

## [Files](Tabs/Files.md)

[file]: Tabs/Base-Knowledge.md#files
[dir]: Tabs/Base-Knowledge.md#directories
[CP]: Tabs/Files.md#cp

- [cd](Tabs/Files.md#cd) Change [directory][dir]
- [ls](Tabs/Files.md#ls) List contents of [directory][dir]
- [mkdir](Tabs/Files.md#mkdir) make [directory][dir]
- [rmdir](Tabs/Files.md#rmdir) delete [directory][dir]
- [rm](Tabs/Files.md#rm) delete [file][file]/[directory][dir]
- [cp][CP] copy [file]/[directory][dir]
<!-- I don't like the wording for dd but i cant think of a better way to explain it -->
- [dd](Tabs/Files.md#dd) is like [cp][CP] but with more granular control
- [mv](Tabs/Files.md#mv) move [file]/[directory][dir]
- [chown](Tabs/Files.md#chown) change ownership of [file]/[directory][dir]
- [chmod](Tabs/Files.md#chmod) change permissions of [file]/[directory][dir]
- [find](Tabs/Files.md#find) a tool to search for a [file]/[directory][dir]
- [ncdu](Tabs/Files.md#ncdu) shows disk usage percentage by [directory][dir]
- [diff](Tabs/Files.md#diff) compare two files

- [locate](Tabs/Files.md#locate)

## [Processes](Tabs/Processes.md)

- [htop](Tabs/Processes.md#htop) is a cli version of task manager
- [kill](Tabs/Processes.md#kill) stops a process
- [xkill](Tabs/Processes.md#xkill) stops a process by clicking on its gui window

- [ps](Tabs/Processes.md#ps)
- [pgrep](Tabs/Processes.md#pgrep)
- [top](Tabs/Processes.md#top)

## [Networking](Tabs/Networking.md)

- [ping](Tabs/Networking.md#ping) is an easy way to check if host reachability
- [ip](Tabs/Networking.md#ip) a cli tool used to show manipulate network setting
- [ssh](Tabs/Networking.md#ssh) is a protocol for allowing 2 computers to communicate over the network
- [scp](Tabs/Networking.md#scp) is [cp][CP] over ssh
- [sftp](Tabs/Networking.md#sftp)
- [ufw](Tabs/Networking.md#ufw) is a uncomplicated firewall
- [hostnamectl](Tabs/Networking.md#hostnamectl) can show or change the system hostname
- [hostname](Tabs/Networking.md#hostname) shows the system hostname
- [iperf3](Tabs/Networking.md#iperf3) is a utility for network perform testing
- [wget](Tabs/Networking.md#wget)
- [curl](Tabs/Networking.md#curl)
- failtoban

## [Storage](Tabs/Storage.md)

[BD]: https://en.wikipedia.org/wiki/Block_(data_storage)

- [mount](Tabs/Storage.md#mount) mounts a filesystem usually a [block][BD] device
- [umount](Tabs/Storage.md#umount) unmounts a filesystem usually a [block][BD] device
- [fdisk](Tabs/Storage.md#fdisk) is a CLI disk partitions editor
- [ln](Tabs/Storage.md#ln) create links between files
- [df](Tabs/Storage.md#df) report file system disk space usage
- [gparted](Tabs/Storage.md#gparted) is a GUI disk partitions editor
- [lvm](Tabs/Storage.md#lvm) is a set of commands to manage disks in a system

- [partition]

## [Terminal](Tabs/Terminal.md)

- [Shells](Tabs/Terminal.md#Shells)
  - [Bash](Tabs/Terminal.md#Bash) The default terminal on most distros
  - [zsh](Tabs/Terminal.md#zsh)
  - [fish](Tabs/Terminal.md#fish)
- [tools](Tabs/Terminal.md#tools)
  - [tmux](Tabs/Terminal.md#tmux)
  - [less](Tabs/Terminal.md#less)

- [alias](Tabs/Terminal.md#alias) is a method of creating a shortcut to a different command
- [Keyboard shortcuts](Tabs/Terminal.md#keyboard-shortcuts) is just a list of useful keyboard shortcuts

## [Archiving/Backup](Tabs/Archiving-Backup.md)

- [tar](Tabs/Archiving-Backup.md#tar) is an archiving tool
- [rsync](Tabs/Archiving-Backup.md#rsync) is like [cp][CP] but tailored toward backups
- [zip](Tabs/Archiving-Backup.md#zip) can create and and open zip files

## Programming

### [C/C++](Tabs/Programming/C-C++.md)

- [gcc/g++](Tabs/Programming/C-C++.md#gccg) is a C/C++ compiler
- [Clang](Tabs/Programming/C-C++.md#clang) is a compiler for C, C++, Objective-C, and Objective-C++
- [gdb](Tabs/Programming/C-C++.md#gdb) is C/C++ Debugger
- [valgrind](Tabs/Programming/C-C++.md#valgrind)
- [bytehound](Tabs/Programming/C-C++.md#bytehound)
- profiling helps optimize by showing which parts of the code are taking the most time
- coverage? coverage testing validates whether sections of the code are untested

### [Rust](Tabs/Programming/Rust.md)

### binary dump

- [xxd](Tabs/Programming/BinaryDump.md#xxd)
- [od](Tabs/Programming/BinaryDump.md#od)
- [objdump](Tabs/Programming/BinaryDump.md#objdump)

## Debugging-Information

- [cargo](Tabs/Programming/Rust.md#cargo) is the Rust package manager that also compiles and runs Rust programs
- [rustup](Tabs/Programming/Rust.md#rustup) installs everything you need to run Rust Code [Information](https://www.rust-lang.org/tools/install)

>>>>>>> 7620882a0cb807d630aed2413c0b7e088a1eb76c

### [Python](Tabs/Programming/Python.md)

### [Java](Tabs/Programming/Java.md)

[sysd]: https://en.wikipedia.org/wiki/Systemd

## [Debugging/Information](Tabs/Debugging_Information.md)

- [journalctl](Tabs/Debugging_Information.md#journalctl) is a utility for querying and displaying logs from journald and [systemd][sysd]
- [systemctl](Tabs/Debugging_Information.md#systemctl) is a utility used to control and manage [systemd][sysd] and services
- [neofetch](Tabs/Debugging_Information.md#neofetch)
- [dmesg](Tabs/Debugging_Information.md#dmesg) is a utility to display or control the (kernel ring buffer)[^1]
- [lscpu](Tabs/Debugging_Information.md#lscpu) Display information about the CPU
- [lspci](Tabs/Debugging_Information.md#lspci) Lists PCI devices
- [lsusb](Tabs/Debugging_Information.md#lsusb) Lists USB devices
- [lsblk](Tabs/Debugging_Information.md#lsblk) Lists block devices
- [lstopo](Tabs/Debugging_Information.md#lstopo) Show the topology of the system

[^1]: a place that records messages related to the operation of the kernel.

## Editors

- [nano](http://manpages.ubuntu.com/manpages/jammy/en/man1/nano.1.html)
- [vim](http://manpages.ubuntu.com/manpages/jammy/en/man1/vim.1.html)
- emacs
- doom emacs
- vscode

### C++ IDEs

- [CLion](https://www.jetbrains.com/clion/download/#section=linux)
  - Simple to configure and use
  - Very easy to build small projects using cmake
  - Supports [collaborative editing](https://www.jetbrains.com/code-with-me/)
  - Free for [educational use](https://www.jetbrains.com/community/education/#students), must have school id
- [qtcreator](https://www.qt.io/download)
  - Same company that provides qt widgets
  - Strongly integrated for creating portable C++ GUI apps
  - Free for open source use
- [vscode](https://code.visualstudio.com/download)
  - General purpose IDE supports many languages and debuggers
  - Rich set of plugins for multiple purposes
  - See our configuration guide for vscode
  - Supports [collaborative editing](https://code.visualstudio.com/blogs/2017/11/15/live-share)
  - Free but not completely open source

### Python IDEs

- pycharm

### Java IDEs

- Intellij
- Netbeans
- Eclipse

## User_Management

- [passwd](Tabs/User_Management.md#passwd) change password
- [chsh](Tabs/User_Management.md#chsh) change shell
- [su](Tabs/User_Management.md#su) switch user

## External_Resources

- [explainshell.com](https://explainshell.com/#)
- [manpages.ubuntu.com](http://manpages.ubuntu.com/)
- [devhints.io](https://devhints.io/bash)
- [askubuntu.com](https://askubuntu.com)
- [wiki.archlinux.org](https://wiki.archlinux.org)

consider these tutorials

- [ryanstutorials.net/linuxtutorial/](https://ryanstutorials.net/linuxtutorial/)

## Crypto

Cryptography is not easy, but it is vital. This may not be the first section you
study, but if you want to your computer to be secure, you should learn these
commands.

- [ssh-keygen](Tabs/User_Management.md#ssh-keygen)
- [openssl](Tabs/User_Management.md#openssl)
- [gpg](Tabs/User_Management.md#gpg)
- [sha](Tabs/User_Management.md#sha)
- [sha2](Tabs/User_Management.md#sha2)
- [md5](Tabs/User_Management.md#md5)
- [blake3](Tabs/User_Management.md#blake3)

  <!-- [Information](https://github.com/BLAKE3-team/BLAKE3) -->

## String manipulation

- [sed](http://manpages.ubuntu.com/manpages/jammy/en/man1/sed.1.html)
- [awk](http://manpages.ubuntu.com/manpages/jammy/en/man1/awk.1.html)
- [cut](http://manpages.ubuntu.com/manpages/jammy/en/man1/cut.1.html)
- [paste](http://manpages.ubuntu.com/manpages/jammy/en/man1/paste.1.html)
- [tr](http://manpages.ubuntu.com/manpages/jammy/en/man1/tr.1.html)
- [cat](http://manpages.ubuntu.com/manpages/jammy/en/man1/cat.1.html)

## Needs a place

- [grep](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html)

- [echo](http://manpages.ubuntu.com/manpages/jammy/en/man1/echo.1.html)

  sudo echo verbose echo "" | sudo tee /etc/apt/preferences.d/ not verbose echo
  "" | sudo tee /etc/apt/preferences.d/ > /dev/null

- [Stat](http://manpages.ubuntu.com/manpages/jammy/en/man1/stat.1.html)
  - display file or file system status
  - I haven't found a use for this yet but `stat /` will show you your installs Birthday
