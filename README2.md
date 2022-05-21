# Terminal_cheatsheet
- [Terminal_cheatsheet](#terminal_cheatsheet)
- [Core details](#core-details)
- [Files details](#files-details)
- [Processes details](#processes-details)
- [Networking](#networking)
- [Storage](#storage)
- [Programming](#programming)
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
- [Fun](#fun)
<!-- - # Best Linux Resources on the web -->

- [Fun](#fun)


# Core [details](File.md)
These commands are the most fundamental???

Note: any command run with superuser privilege (cursor is #) must be run with sudo
- ## [man](http://manpages.ubuntu.com/manpages/jammy/en/man1/man.1.html)


# Files [details](File.md)
- ## [cd](http://manpages.ubuntu.com/manpages/jammy/en/man1/cd.1.html)
- ## [ls](http://manpages.ubuntu.com/manpages/jammy/en/man1/ls.1.html)
- ## [cat](http://manpages.ubuntu.com/manpages/jammy/en/man1/cat.1.html)
- ## [mkdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/mkdir.1.html)
- ## [rmdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/rmdir.1.html)
- ## [rm](http://manpages.ubuntu.com/manpages/jammy/en/man1/rm.1.html)
- ## [cp](http://manpages.ubuntu.com/manpages/jammy/en/man1/cp.1.html)
- ## [mv](http://manpages.ubuntu.com/manpages/jammy/en/man1/mv.1.html)
- ## [chown](http://manpages.ubuntu.com/manpages/jammy/en/man1/chown.1.html)
- ## [chmod](http://manpages.ubuntu.com/manpages/jammy/en/man1/chmod.1.html)
- ## [less](http://manpages.ubuntu.com/manpages/jammy/en/man1/less.1.html)
- ## [grep](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html)
- ## [find](http://manpages.ubuntu.com/manpages/jammy/en/man1/find.1.html)
- ## [locate](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html)

# Processes [details](Processes.md)	
- ## [htop](http://manpages.ubuntu.com/manpages/jammy/en/man1/htop.1.html)
- ## [kill](http://manpages.ubuntu.com/manpages/jammy/en/man1/kill.1.html)

- ## [grep](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html)
- ## [top](http://manpages.ubuntu.com/manpages/jammy/en/man1/top.1.html)
- ## [ps](http://manpages.ubuntu.com/manpages/jammy/en/man1/ps.1.html)

# Networking
- ## [ping](http://manpages.ubuntu.com/manpages/jammy/en/man1/ping.1.html)
- ## [ip](http://manpages.ubuntu.com/manpages/jammy/en/man8/ip.8.html)
- ## ssh
- ## scp
- ## sftp
- ## .ssh-config
- ## failtoban
- ## ufw

#crypto
Cryptography is not easy, but it is vital. This may not be the first section you study, but if you want to your computer to be secure, you should learn these commands.
[explain] (cryptoexplanation.md)

- ##openssl
- ## ssh-keygen
- ## gpg

# Storage
- mount
- umount
- fdisk
- ln
- ncdu
- df  "report file system disk space usage 	df(1), info"
- tar
- find
- diff
- partition
- gparted

# Programming

## C/C++
- ## [gcc/g++](Programming/gcc-g++.md)
- ## [Clang](http://manpages.ubuntu.com/manpages/jammy/en/man3/Clang.3.html)
- ## [gdb/cgdb](Programming/gdb-cgdb.md)
- ## [valgrind]()
- ## [gprof]()
- profiling helps optimize by showing which parts of the code are taking the most time
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
- cut
- paste
- tr

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
- clion				free for educational use
- qtcreator		free for open source use
- 
- python IDE
- pycharm
- 
- java
- intellij
- netbeans
- eclipse
- 
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

consider these tutorials
- https://ryanstutorials.net/linuxtutorial/

# Fun
- ## [Stat](http://manpages.ubuntu.com/manpages/jammy/en/man1/stat.1.html)
	- display file or file system status
	- I haven't found a use for this yet but `stat /` will show you your installs Birthday



- ## [sudo](http://manpages.ubuntu.com/manpages/jammy/en/man8/sudo.8.html)
	- execute a command as root sudo stems for superuser do
	- usage `sudo` then the command you want to run as root
	- examples
		```bash
		sudo ls dir
		```


- ## [echo](http://manpages.ubuntu.com/manpages/jammy/en/man1/echo.1.html)

	sudo echo
		verbose
		echo "" | sudo tee /etc/apt/preferences.d/
		not verbose
		echo "" | sudo tee /etc/apt/preferences.d/ > /dev/null
