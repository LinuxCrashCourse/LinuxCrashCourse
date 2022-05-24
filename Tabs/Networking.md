# Networking

- [Networking](#networking)
  - [ping](#ping)
  - [ip](#ip)
  - [ssh](#ssh)
    - [ssh server](#ssh-server)
    - [ssh-keygen](#ssh-keygen)
    - [.ssh-config](#ssh-config)
  - [scp](#scp)
  - [sftp](#sftp)
  - [ufw](#ufw)
  - [hostnamectl](#hostnamectl)
  - [hostname](#hostname)
  - [iperf3](#iperf3)

## [ping](http://manpages.ubuntu.com/manpages/jammy/en/man1/ping.1.html)

- usage `ping` Then the ip of the url
- examples

    ```bash
    ping 192.168.1.1
    ping www.google.com
    ```

## [ip](http://manpages.ubuntu.com/manpages/jammy/en/man8/ip.8.html)

- this is a command that you are going to need to go threw the man page for more details because there is so much i can do 
- basic usage ip a this will show you your system networking information
- basic examples

    ```bash
    ip a
    ```

## [ssh](http://manpages.ubuntu.com/manpages/jammy/en/man1/ssh.1.html)

- basic usage `ssh` Then the ip or url of the system you wish to accuse
- basic examples

  ```bash
  ssh 192.168.1.1
  ssh www.google.com
  ```

### ssh server

### ssh-keygen

### .ssh-config

## [scp](http://manpages.ubuntu.com/manpages/jammy/en/man1/scp.1.html)

- usage
  - to copy file/directory from a remote host use `scp` Then the ip or url and the file/directory you wish to copy finally the directory you want them to be stored
  - to copy file/directory to a remote host use `scp` files/directory you wish to copy then the ip or url and directory you want them to be stored in
- examples

  ```bash
  copy from
  scp 192.168.1.1:~/file.txt ~/
  scp www.google.com:~/file.txt ~/
  copy to
  scp ~/file.txt 192.168.1.1:~/ 
  scp ~/file.txt www.google.com:~/ 
  ```

## [sftp](http://manpages.ubuntu.com/manpages/jammy/en/man1/sftp.1.html)

## [ufw](http://manpages.ubuntu.com/manpages/jammy/en/man8/ufw.8.html)

## [hostnamectl](http://manpages.ubuntu.com/manpages/jammy/en/man1/hostnamectl.1.html)

- usage
- `hostnamectl hostname` gets the hostname of your system
- `hostnamectl hostname` then the new name you want sets the hostname
- examples

  ```bash
  hostnamectl hostname
  hostnamectl hostname Alice-Laptop
  ```



## [hostname](http://manpages.ubuntu.com/manpages/jammy/en/man1/hostname.1.html)

- usage `hostname`
- examples

  ```bash
  hostname
  ```

## [iperf3](http://manpages.ubuntu.com/manpages/jammy/en/man1/iperf3.1.html)

- to use this command you will need 2 computers
- examples

  Remote computer ip 192.168.1.1

  ```bash
  iperf3 -s -p 1111
  ```

  The computer you are using

  ```bash
  iperf3 -c 192.168.1.1 -p 1111 -bidir
  ```


