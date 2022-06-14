# Storage

- [Storage](#storage)
  - [mount](#mount)
  - [umount](#umount)
  - [fdisk](#fdisk)
  - [ln](#ln)
  - [df](#df)
  - [gparted](#gparted)
  - [lvm](#lvm)
  - [ext4](#ext4)

[BD]: https://en.wikipedia.org/wiki/Block_(data_storage)

## [mount](http://manpages.ubuntu.com/manpages/jammy/en/man8/mount.8.html)

- mounts a filesystem usually a [block][BD] device
- usage ``
- examples

  ```bash
  mount /dev/sda /mnt/  # mounts Drive /dev/sda to /mnt
  mount -a              # mounts all filesystem in fstab to mounted
  ```

- SEE ALSO [fstab](Base-Knowledge.md#fstab)

## [umount](http://manpages.ubuntu.com/manpages/jammy/en/man8/umount.8.html)

unmounts a filesystem usually a [block][BD] device

## [fdisk](http://manpages.ubuntu.com/manpages/jammy/en/man8/fdisk.8.html)

is a CLI disk partitions editor

## [ln](http://manpages.ubuntu.com/manpages/jammy/en/man1/ln.1.html)

create links between files

## [df](http://manpages.ubuntu.com/manpages/jammy/en/man1/df.1.html)

report file system disk space usage

## [gparted](http://manpages.ubuntu.com/manpages/jammy/en/man8/gparted.8.html)

is a GUI disk partitions editor

## [lvm](http://manpages.ubuntu.com/manpages/jammy/en/man8/lvm.8.html)

is a set of commands to manage disks in a system

## [ext4](http://manpages.ubuntu.com/manpages/kinetic/en/man5/ext4.5.html)
