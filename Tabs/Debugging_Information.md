
# Debugging/Information

- [Debugging/Information](#debugginginformation)
  - [journalctl](#journalctl)
  - [systemctl](#systemctl)
  - [neofetch](#neofetch)
  - [dmesg](#dmesg)
  - [lspci](#lspci)
  - [lsusb](#lsusb)
  - [lscpu](#lscpu)
  - [lsblk](#lsblk)
  - [lstopo](#lstopo)

## [journalctl](http://manpages.ubuntu.com/manpages/jammy/en/man1/journalctl.1.html)

journalctl is a utility for querying and displaying logs from journald and systemd

- examples

  ```bash
  journalctl /usr/lib/signal-desktop/signal-desktop
  journalctl -b 0 | grep ssh\
  journalctl
  ```

## [systemctl](http://manpages.ubuntu.com/manpages/jammy/en/man1/systemctl.1.html)

systemctl is a command line utility to manage services for example sshd
<!-- I need to add what a service is -->
- examples

  ```bash
  systemctl enable sshd   #Make the sshd serves start on boot
  systemctl disable sshd  #Stops the sshd serves for starting on boot
  systemctl start sshd    #Starts the sshd serves
  systemctl stop sshd     #Restarts the sshd serves
  systemctl restart sshd  #Stops the sshd serves
  systemctl status sshd   #Gets the status of the sshd serves
  ```

Above i use sshd as the example serves but this can be replaced with any serves

## [neofetch](http://manpages.ubuntu.com/manpages/jammy/en/man1/neofetch.1.html)

Is a fun tool to display basic system information in a very pretty format. I most often see it hear [Unixporn](https://www.reddit.com/r/unixporn/)

- examples

  ```bash
  neofetch
  ```

## [dmesg](http://manpages.ubuntu.com/manpages/jammy/en/man1/dmesg.1.html)

dmesg is a utility to display or control the kernel ring buffer

- examples

  ```bash
  dmesg
  sudo dmesg
  ```

## [lspci](http://manpages.ubuntu.com/manpages/jammy/en/man8/lspci.8.html)

Lists PCI devices

- examples

  ```bash
  lspci
  lspci-v
  ```

## [lsusb](http://manpages.ubuntu.com/manpages/jammy/en/man8/lsusb.8.html)

Lists USB devices

- examples

  ```bash
  lsusb
  lsusb -v
  lsusb -t
  ```

## [lscpu](http://manpages.ubuntu.com/manpages/jammy/en/man1/lscpu.1.html)

Display information about the CPU

- examples

  ```bash
  lscpu
  lscpu -J
  ```

## [lsblk](http://manpages.ubuntu.com/manpages/jammy/en/man8/lsblk.8.html)

Lists block devices

- examples

  ```bash
  lsblk
  ```

## [lstopo](http://manpages.ubuntu.com/manpages/jammy/en/man1/lstopo.1.html)

Show the topology of the system

- examples

  ```bash
  lstopo
  lstopo --of pdf > test.pdf
  ```
