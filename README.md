# Terminal_cheatsheet
- [Basics](#Basics)
- [Networking](#Networking)
- [Storage](#Storage)
- [Advanced](#Advanced)
- [Programming](#Programming)
- [Terminal](#Terminal)
- [External_Resources](#External_Resources)
- [Fun](#Fun)



# Basics

- ## [man](http://manpages.ubuntu.com/manpages/jammy/en/man1/man.1.html)
	- an interface to the system reference manuals
	- usage `man` then the command you the manuals for
	- examples
		```bash
		man cd
		man ls
		```

- ## [cd](http://manpages.ubuntu.com/manpages/jammy/en/man1/cd.1.html)
	- change directory
	- usage `cd` then the directory you with to go to
	- examples
		```bash
		cd dir
		```

- ## [ls](http://manpages.ubuntu.com/manpages/jammy/en/man1/ls.1.html)
	- list content of a directory
	- usage
	- examples
		```bash
		ls
		ls dir
		```

- ## [sudo](http://manpages.ubuntu.com/manpages/jammy/en/man8/sudo.8.html)
	- execute a command as root sudo stems for superuser do
	- usage `sudo` then the command you want to run as root
	- examples
		```bash
		sudo ls dir
		```

- ## [cat](http://manpages.ubuntu.com/manpages/jammy/en/man1/cat.1.html)
	- prints a file to [standard output](https://en.wikipedia.org/wiki/Standard_streams)
	- usage `cat` the file you would like to look at
	- examples
		```bash
		cat ./file.txt
		```

- ## [mkdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/mkdir.1.html)
	- make a directory
	- usage `mkdir` then the name of the directory you want to make
	- examples
		```bash
		mkdir dir
		```

- ## [rmdir](http://manpages.ubuntu.com/manpages/jammy/en/man1/rmdir.1.html)
	- deletes an empty directories
	- usage `rmdir` then the name of the directory you want to delete
	- examples
		```bash
		rmdir dir
		```

- ## [rm](http://manpages.ubuntu.com/manpages/jammy/en/man1/rm.1.html)
	- deletes files or directories
	- usage `rm` then the name of the directory or file/files you want to delete
	- examples
		```bash
		rm dir
		rm file.txt
		rm file1.txt file2.txt file3.txt
		```
		```bash
		rm -r dir
		```
		will recursively delete everything in a directory

		DO NOT RUN `sudo rm -rf --no-preserve-root /` unless you want to lose everything on you system

- ## [cp](http://manpages.ubuntu.com/manpages/jammy/en/man1/cp.1.html)
	- copies files or directories
	- usage `cp` then the name of the directory or file you want to copy then the directory you want them to be copied to
	- examples
		```bash
		cp file.txt dir
		cp -r dir dir
		```

- ## [mv](http://manpages.ubuntu.com/manpages/jammy/en/man1/mv.1.html)
	-
	- usage ``
	- examples
		```bash
		```

- ## [chown](http://manpages.ubuntu.com/manpages/jammy/en/man1/chown.1.html)
	- moves/rename files or directories
	- usage `mv`
	- examples
		```bash
		```

- ## [chmod](http://manpages.ubuntu.com/manpages/jammy/en/man1/chmod.1.html)
	-
	- usage ``
	- examples
		```bash
		```

- ## [less](http://manpages.ubuntu.com/manpages/jammy/en/man1/less.1.html)
	-
	- usage ``
	- examples
		```bash
		```



- ## [htop](http://manpages.ubuntu.com/manpages/jammy/en/man1/htop.1.html)
	-
	- usage `htop`
	- alternatives [btop](http://manpages.ubuntu.com/manpages/jammy/en/man1/btop.1.html)


- ## [kill](http://manpages.ubuntu.com/manpages/jammy/en/man1/kill.1.html)
	-
	- usage ``
	- examples
		```bash
		```

- ## [grep](http://manpages.ubuntu.com/manpages/jammy/en/man1/grep.1.html)
	-
	- usage ``
	- examples
		```bash
		```

- ## [echo](http://manpages.ubuntu.com/manpages/jammy/en/man1/echo.1.html)

	sudo echo
		verbose
		echo "" | sudo tee /etc/apt/preferences.d/
		not verbose
		echo "" | sudo tee /etc/apt/preferences.d/ > /dev/null

# Networking

- ## [ping](http://manpages.ubuntu.com/manpages/jammy/en/man1/ping.1.html)
	- Check if host reachability
	- usage `ping` Then the ip of the url
	- examples
		```bash
		ping 192.168.1.1
		ping www.google.com
		```
- ## [ip](http://manpages.ubuntu.com/manpages/jammy/en/man8/ip.8.html)
	- the replacement to ifconfig used to show / manipulate routing, network devices, interfaces and tunnels
	- basic examples
		```bash
		ip a
		```

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

# Programming

## C/C++
- ## [gcc/g++](http://manpages.ubuntu.com/manpages/jammy/en/man1/gcc.1.html)
	- one of the most popular compilers
	- usage `gcc/g++` the program you want to compile
	- examples
		```bash
		gcc helloworld.c
		g++ helloworld.cc
		```
- ## [Clang](http://manpages.ubuntu.com/manpages/jammy/en/man3/Clang.3.html)
	- another one of the most popular compilers
	- usage ``
	- examples
		```bash
		```
- ## [gdb/cgdb](http://manpages.ubuntu.com/manpages/jammy/en/man1/gdb.1.html)
	- one of the most popular compilers
	- usage `gdb/cgdb` the program you want to debug
	- examples
		```bash
		cgdb a.out
		gdb a.out
		```

## Rust
- cargo

## python

# Debuging/Information
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
		```
- ## Shells
	- [Bash](http://manpages.ubuntu.com/manpages/jammy/en/man1/bash.1.html)
	- [zsh](http://manpages.ubuntu.com/manpages/jammy/en/man1/zsh.1.html)
	- [fish](http://manpages.ubuntu.com/manpages/jammy/en/man1/fish.1.html)

## Keyboard shortcuts
- ctrl shift c
- ctrl shift v
- ctrl l
- ctrl a
- tab

- !!

# External_Resources
- https://explainshell.com/#
- http://manpages.ubuntu.com/
- https://devhints.io/bash

# Fun
- ## [Stat](http://manpages.ubuntu.com/manpages/jammy/en/man1/stat.1.html)
	- display file or file system status
	- I haven't found a use for this yet but `stat /` will show you your installs Birthday
