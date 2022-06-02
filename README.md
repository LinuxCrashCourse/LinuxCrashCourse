# LinuxCrashCourse

- [LinuxCrashCourse](#linuxcrashcourse)
  - [Core-Commands](#core-commands)
  - [Files](#files)
  - [Processes](#processes)
  - [Networking](#networking)
  - [Storage](#storage)
  - [Archiving/Backup](#archivingbackup)
  - [Programming](#programming)
    - [C/C++](#cc)
    - [Rust](#rust)
    - [python](#python)
  - [Debugging-Information](#debugging-information)
  - [Terminal](#terminal)
  - [Editors](#editors)
    - [C++ IDEs](#c-ides)
    - [java](#java)
    - [Keyboard shortcuts](#keyboard-shortcuts)
  - [User_Management](#user_management)
  - [External_Resources](#external_resources)
  - [Crypto](#crypto)
  - [String manipulation](#string-manipulation)
  - [Fun](#fun)
  - [Needs a place](#needs-a-place)

<!-- - # Best Linux Resources on the web -->
## [Core-Commands](Tabs/Core-Commands.md)

These commands are the most fundamental???
These commands are the most important???

[Base-Knowledge](Tabs/Base-Knowledge.md) is fundament to the rest of the information without this knowing whats you may not understand whats being said.

- [man] a cli interface for system reference manuals [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/man.1.html)

- [sudo] execute a command as root [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/sudo.1.html)

## [Files](Tabs/Files.md)

[file]: Tabs/Base-Knowledge.md#files
[dir]: Tabs/Base-Knowledge.md#directories
[CP]: Tabs/Files.md#cp

- [cd](Tabs/Files.md#cd) Change [directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/cd.1.html)
- [ls](Tabs/Files.md#ls) List contents of [directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/ls.1.html)
- [mkdir](Tabs/Files.md#mkdir) make [directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/mkdir.1.html)
- [rmdir](Tabs/Files.md#rmdir) delete [directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/rmdir.1.html)
- [rm](Tabs/Files.md#rm) delete [file][file]/[directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/rm.1.html)
- [cp][CP] copy [file]/[directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/cp.1.html)
<!-- I don't like the wording for dd but i cant think of a better way to explain it -->
- [dd](Tabs/Files.md#dd) is like [cp][CP] but with more granular control [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/dd.1.html)
- [mv](Tabs/Files.md#mv) move [file]/[directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/mv.1.html)
- [chown](Tabs/Files.md#chown) change ownership of [file]/[directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/chown.1.html)
- [chmod](Tabs/Files.md#chmod) change permissions of [file]/[directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/chmod.1.html)
- [find](Tabs/Files.md#find) a tool to search for a [file]/[directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/find.1.html)
- [ncdu](Tabs/Files.md#ncdu) shows disk usage percentage by [directory][dir] [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/ncdu.1.html)
- [diff](Tabs/Files.md#diff) compare two files [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/diff.1.html)

- [locate](Tabs/Files.md#locate)

## [Processes](Tabs/Processes.md)

- [htop](Tabs/Processes.md#htop) is a cli version of task manager  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/htop.1.html)
- [kill](Tabs/Processes.md#kill) stops a process [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/kill.1.html)
- [xkill](Tabs/Processes.md#xkill) stops a process by clicking on its gui window [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/xkill.1.html)

- [ps](Tabs/Processes.md#ps)  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/ps.1.html)
- [pgrep](Tabs/Processes.md#pgrep)  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/pgrep.1.html)
- [top](Tabs/Processes.md#top)  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/top.1.html)

## [Networking](Tabs/Networking.md)

- [ping](Tabs/Networking.md#ping) is an easy way to check if host reachability [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/ping.1.html)
- [ip](Tabs/Networking.md#ip) a cli tool used to show manipulate network setting [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man8/ip.8.html)
- [ssh](Tabs/Networking.md#ssh) is a protocol for allowing 2 computers to communicate over the network [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/ssh.1.html)
- [scp](Tabs/Networking.md#scp) is [cp][CP] over ssh [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/scp.1.html)
- [sftp](Tabs/Networking.md#sftp)  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/sftp.1.html)
- [ufw](Tabs/Networking.md#ufw) is a uncomplicated firewall  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man8/ufw.8.html)
- [hostnamectl](Tabs/Networking.md#hostnamectl) can show or change the system hostname [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/hostnamectl.1.html)
- [hostname](Tabs/Networking.md#hostname) shows the system hostname [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/hostname.1.html)
- [iperf3](Tabs/Networking.md#iperf3) is a utility for network perform testing  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/iperf3.1.html)
- failtoban

## [Storage](Tabs/Storage.md)

[BD]: https://en.wikipedia.org/wiki/Block_(data_storage)

- [mount](Tabs/Storage.md#mount) mounts a filesystem usually a [block][BD] device [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man8/mount.8.html)
- [umount](Tabs/Storage.md#umount) unmounts a filesystem usually a [block][BD] device [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man8/umount.8.html)
- [fdisk](Tabs/Storage.md#fdisk) is a CLI disk partitions editor [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man8/fdisk.8.html)
- [ln](Tabs/Storage.md#ln) create links between files [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/ln.1.html)
- [df](Tabs/Storage.md#df) report file system disk space usage [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/df.1.html)
- [gparted](Tabs/Storage.md#gparted) is a GUI disk partitions editor [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man8/gparted.8.html)
- [lvm](Tabs/Storage.md#lvm) is a set of commands to manage disks in a system [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man8/lvm.8.html)

- [partition]

## [Archiving/Backup](Tabs/Archiving-Backup.md)

- [tar](Tabs/Archiving-Backup.md#tar) is an archiving tool [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/tar.1.html)
- [rsync](Tabs/Archiving-Backup.md#rsync)  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/rsync.1.html)
- [zip](Tabs/Archiving-Backup.md#zip)  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/zip.1.html)

## Programming

### [C/C++](Tabs/Programming/C-C++.md)

- [gcc/g++](Tabs/Programming/C-C++.md#gccg) is a C/C++ compiler [Man page]([http://manpages.ubuntu.com/manpages/jammy/en/man1/gcc.1.html])
- [Clang](Tabs/Programming/C-C++.md#clang) is a compiler for C, C++, Objective-C, and Objective-C++ [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man3/Clang.3.html)
- [gdb](Tabs/Programming/C-C++.md#gdb) is C/C++ Debugger [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/gdb.1.html)
- [valgrind](Tabs/Programming/C-C++.md#valgrind) [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/valgrind.1.html)
- [bytehound](Tabs/Programming/C-C++.md#bytehound) [Man page](https://github.com/koute/bytehound/releases)
- [gprof](Tabs/Programming/C-C++.md#gprof) [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/gprof.1.html)
- profiling helps optimize by showing which parts of the code are taking the most time
- coverage? coverage testing validates whether sections of the code are untested

### [Rust](Tabs/Programming/Rust.md)

- [cargo](Tabs/Programming/Rust.md#cargo) is the Rust package manager that also compiles and runs Rust programs [Man page](http://manpages.ubuntu.com/manpages/kinetic/en/man1/cargo.1.html)
- [rustup](Tabs/Programming/Rust.md#rustup) installs everything you need to run Rust Code [Information](https://www.rust-lang.org/tools/install)

### python

## Debugging-Information

- [journalctl](http://manpages.ubuntu.com/manpages/jammy/en/man1/journalctl.1.html)
- [systemctl](http://manpages.ubuntu.com/manpages/jammy/en/man1/systemctl.1.html)
- [dmesg](http://manpages.ubuntu.com/manpages/jammy/en/man1/dmesg.1.html)
- [lscpu](http://manpages.ubuntu.com/manpages/jammy/en/man1/lscpu.1.html)
- [lspci](http://manpages.ubuntu.com/manpages/jammy/en/man8/lspci.8.html)
- [lsusb](http://manpages.ubuntu.com/manpages/jammy/en/man8/lsusb.8.html)
- [lsblk](http://manpages.ubuntu.com/manpages/jammy/en/man8/lsblk.8.html)
- [lstopo](http://manpages.ubuntu.com/manpages/jammy/en/man1/lstopo.1.html)

## [Terminal](Tabs/Terminal.md)

- [Shells](Tabs/Terminal.md#Shells)
  - [Bash](Tabs/Terminal.md#Bash) The default terminal on most distros [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/bash.1.html)
  - [zsh](Tabs/Terminal.md#zsh)  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/zsh.1.html)
  - [fish](Tabs/Terminal.md#fish)  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/fish.1.html)
  - [tmux](Tabs/Terminal.md#tmux)  [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/tmux.1.html)
- [alias](Tabs/Terminal.md#alias) is a method of creating a shortcut to a different command [Man page] (http://manpages.ubuntu.com/manpages/jammy/en/man1/alias.1posix.html)

## Editors

- [nano](http://manpages.ubuntu.com/manpages/jammy/en/man1/nano.1.html)
- [vim](http://manpages.ubuntu.com/manpages/jammy/en/man1/vim.1.html)
- emacs
- doom emacs
- vscode

### C++ IDEs

- clion free for educational use
- qtcreator free for open source use

- python IDE
- pycharm

### java

- intellij
- netbeans
- eclipse

### Keyboard shortcuts

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

## User_Management

- [passwd](Tabs/User_Management.md#passwd) change password [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/passwd.1.html)
- [chsh](Tabs/User_Management.md#chsh) change shell [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/chsh.1.html)
- [su](Tabs/User_Management.md#su) switch user [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/su.1.html)

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
commands. [explain] (cryptoexplanation.md)

- [openssl](http://manpages.ubuntu.com/manpages/jammy/en/man1/openssl.1.html)
- [ssh-keygen](http://manpages.ubuntu.com/manpages/jammy/en/man1/ssh-keygen.1.html)
- [gpg](http://manpages.ubuntu.com/manpages/jammy/en/man1/gpg.1.html)
- [blake3](https://github.com/BLAKE3-team/BLAKE3)
- [sha](http://manpages.ubuntu.com/manpages/jammy/en/man3/sha.3.html)
- [sha2](http://manpages.ubuntu.com/manpages/jammy/en/man3/sha2.3.html)
- [md5](http://manpages.ubuntu.com/manpages/jammy/en/man3/md5.3.html)

## String manipulation

- sed
- awk
- cut
- paste
- tr
- [cat](Tabs/Files.md#cat) [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/cat.1.html)
- [less](Tabs/Files.md#less) [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/less.1.html)

## Fun

- [Stat](http://manpages.ubuntu.com/manpages/jammy/en/man1/stat.1.html)
  - display file or file system status
  - I haven't found a use for this yet but `stat /` will show you your installs Birthday

## Needs a place

- [grep](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html) [Man page](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html)

- [echo](http://manpages.ubuntu.com/manpages/jammy/en/man1/echo.1.html)

  sudo echo verbose echo "" | sudo tee /etc/apt/preferences.d/ not verbose echo
  "" | sudo tee /etc/apt/preferences.d/ > /dev/null

- xargs
