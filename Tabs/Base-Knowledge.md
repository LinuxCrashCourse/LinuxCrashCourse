# Base-Knowledge

- [Base-Knowledge](#base-knowledge)
  - [Filesystem](#filesystem)
    - [Files](#files)
    - [Directories](#directories)
    - [Permissions](#permissions)
      - [Permission examples](#permission-examples)

## Filesystem

- [Filesystem Hierarchy Standard](https://en.wikipedia.org/wiki/Filesystem_Hierarchy_Standard)

### Files

- Everything in linux is a file [wikipedia article](https://en.wikipedia.org/wiki/Everything_is_a_file)

### Directories

- A directory is a location for storing files

### Permissions

- To open a directory you must have read execute permission
- To runs a program it must have execute permission

|   | Symbolic | Permission |
| - | :------: | :--------- |
| 7 | rwx | read, write, execute |
| 6 | rw- | read, write |
| 5 | r-x | read, execute |
| 4 | r-- | read only |
| 3 | -wx | write, execute |
| 2 | -w- | write only |
| 1 | --x | execute only |
| 0 | --- | None |

#### Permission examples

| Numeric | owner | group | everyone |
| :-----: | :---: | :---: | :------: |
| 777 | rwx | rwx | rwx |
| 770 | rwx | rwx | --- |
| 700 | rwx | --- | --- |
| 000 | --- | --- | --- |
| 744 | rwx | r-- | r-- |
| 775 | rwx | rwx | r-x |
| 444 | r-- | r-- | r-- |
