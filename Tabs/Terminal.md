# Terminal

- [Terminal](#terminal)
  - [Shells](#shells)
    - [Bash](#bash)
    - [zsh](#zsh)
    - [fish](#fish)
  - [Tools](#tools)
    - [tmux](#tmux)
    - [less](#less)
  - [alias](#alias)
  - [Keyboard shortcuts](#keyboard-shortcuts)
  - [Scripting](#scripting)
    - [Simple scrips](#simple-scrips)
    - [variables](#variables)
    - [Loops](#loops)
    - [operators](#operators)
    - [nested commands](#nested-commands)

## Shells

chsh -s /bin/bash

echo $SHELL
ps -p $$

[Bash]: https://en.wikipedia.org/wiki/Bash_(Unix_shell)

### [Bash](http://manpages.ubuntu.com/manpages/jammy/en/man1/bash.1.html)

Acronym Bourne-Again Shell

Bash is by far the most commonly used choice.
This is at least in part because is comes installed as the default shell in most Linux distros.

Bash is a solid shell option. It hast bean used a long time and has a lot of documentation because of this.
Most tutorials online will assume you are using Bash

Becaus of all this it's recommended for most users and it get the job done.
But like everything else with linux you have limit list amount of options.
Below this some will be discussed but not all.

Hears a [wikipedia][Bash] article if you want to know more about Bash.

[ZSH]: https://en.wikipedia.org/wiki/Z_shell
[ZSHSE]: https://apple.stackexchange.com/questions/361870/what-are-the-practical-differences-between-bash-and-zsh
[omyzsh]: https://ohmyz.sh/

### [zsh](http://manpages.ubuntu.com/manpages/jammy/en/man1/zsh.1.html)

Acronym Z shell

Zsh is mostly Bash compatible if you want more hears a [stackexchange][ZSHSE] article.
Its advantage is its more feature rich my favorites are spell check, superior tab compleat, and Better plugin support.

The most important advantage is [Oh My Zsh][omyzsh] witch is an open source, community-driven framework customizing you Zsh configuration.

Hears a [wikipedia][ZSH] article if you want to know more about Zsh.

### [fish](http://manpages.ubuntu.com/manpages/jammy/en/man1/fish.1.html)

## Tools

### [tmux](http://manpages.ubuntu.com/manpages/jammy/en/man1/tmux.1.html)

### [less](http://manpages.ubuntu.com/manpages/jammy/en/man1/less.1.html)

## [alias](http://manpages.ubuntu.com/manpages/jammy/en/man1/alias.1posix.html)

- recommended alias to ad to bashrc or equivalent file

  ```bash
  alias ll='ls -lh'
  alias la='ls -Alh'
  ```

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

## Scripting

This is one of the best thing about linux all linux systems support scripting and you can do everything with it.

### Simple scrips

Replace spaces with under scores

```bash
for f in *\ *; do mv "$f" "${f// /_}"; done
```

Find all file in ./ and change permissions

```bash
find ./ -type f -exec chmod 664 {} \;
```

Find all dirs in ./ and change permissions

```bash
find ./ -type d -exec chmod 775 {} \;
```

### variables

No spaces around equal signs

```bash
NAME="BOB"
echo $NAME
```

### Loops

```bash
for ((i = 0 ; i < 10 ; i++)); do
  echo $i
done
```

```bash
i = 0  
while true; do
  i++
  echo $i
done
```

### operators

| Boolean logic | Expression |
| --- | --- |
| and | && |
| or | \|\| |
| not | ! |

| Comparisons | Expression |
| --- | --- |
| Equal | -eq |
| Not equal | -ne |
| Less than | -lt |
| Less than or equal | -le |
| Greater than | -gt |
| Greater than or equal | -ge |

### nested commands

$()

Useful command for scripting

xargs
sort
find
[JQ](https://stedolan.github.io/jq/)
<https://jqplay.org/>

[devhints](https://devhints.io/bash)
