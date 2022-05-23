# Base-Knowledge

- [Base-Knowledge](#base-knowledge)
  - [Filesystem](#filesystem)
    - [Files](#files)
    - [Directories](#directories)
    - [Permissions](#permissions)

## Filesystem

- [Filesystem Hierarchy Standard](https://en.wikipedia.org/wiki/Filesystem_Hierarchy_Standard)

### Files

- Everything in linux is a file [wikipedia article](https://en.wikipedia.org/wiki/Everything_is_a_file)

### Directories

- A directory is a location for storing files

### Permissions

To open a dir you must have read execute permission
To runs a program it must have execute permission

|   | read | write | execute |
| - | :--: | :---: | :-----: |
| 1 | - | - | x |
| 2 | - | w | - |
| 3 | - | w | x |
| 4 | r | - | - |
| 5 | r | - | x |
| 6 | r | w | - |
| 7 | r | w | x |

- 1 --x
- 2 -w-
- 3 -wx
- 4 r--
- 5 r-x
- 6 rw-
- 7 rwx

owner group everyone
