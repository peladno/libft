_This project has been created as part of the 42 curriculum by <jperez-u>._

# Libft

## Description

`libft` is a custom C library developed as a foundational project in the 42 curriculum.
Its main goal is to rebuild a set of standard C library functions and additional utility
functions from scratch to strengthen understanding of:

- Pointers and memory management
- Strings and low-level data manipulation
- Defensive programming and edge-case handling
- API design and reusable code organization

This library is intended to be reused in later 42 projects as a reliable base of tested
utility functions.

## Detailed Library Overview

The library is split into logical groups of functions.

### 1) Character checks and conversion

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`

These functions validate character classes and perform case conversion.

### 2) String handling

- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`
- `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_strmapi`, `ft_striteri`

These functions provide string length calculation, safe copy/concatenation, searching,
comparison, allocation-based transformations, and splitting utilities.

### 3) Memory operations

- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_memchr`, `ft_memcmp`, `ft_calloc`

These cover byte-level memory initialization, copying, searching, comparison,
and dynamic allocation.

### 4) Conversion helpers

- `ft_atoi`, `ft_itoa`

These functions convert between strings and integers.

### 5) File descriptor output helpers

- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

These print characters, strings, lines, and numbers to any file descriptor.

### 6) Linked list utility currently included

- `ft_lstadd_front`

This function prepends a node to a linked list. More list functions can be added
as the project evolves.

## Instructions

### Requirements

- GCC or Clang
- `make`
- Unix-like environment (Linux/macOS)

### Compilation

Build the static library:

```bash
make
```

This generates `libft.a`.

### Clean object files

```bash
make clean
```

### Full clean (objects + library)

```bash
make fclean
```

### Rebuild from scratch

```bash
make re
```

### Use in another project

1. Copy `libft.a` and `libft.h` into your project (or link from this repo).
2. Include the header:

```c
#include "libft.h"
```

3. Link the library when compiling:

```bash
gcc your_program.c -L. -lft -o your_program
```

## Resources

### Classic references

- The Open Group Base Specifications (POSIX):
  https://pubs.opengroup.org/onlinepubs/9699919799/
- Linux man-pages project:
  https://man7.org/linux/man-pages/
- cppreference (C language and standard library):
  https://en.cppreference.com/w/c
- The C Programming Language (Kernighan & Ritchie)
