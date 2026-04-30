_This project has been created as part of the 42 curriculum by <jperez-u>._

# Libft

## Overview

`libft` is a foundational C library that reimplements essential standard C functions and adds
common utility helpers used across 42 projects.

The objective of this project is to build a reliable low-level toolkit while practicing:

- manual memory management
- pointer arithmetic
- string and byte manipulation
- robust handling of edge cases
- modular API design

The result is a reusable static library, `libft.a`, that can be linked in future projects.

## Project Structure

The library is organized by functional areas.

### Character checks and case conversion

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### String handling

- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

### Memory utilities

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### Numeric conversion

- `ft_atoi`
- `ft_itoa`

### File descriptor output

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Linked list utilities

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Build and Commands

### Requirements

- `cc` (GCC or Clang)
- `make`
- Unix-like system (Linux/macOS)

### Build the library

```bash
make
```

Output: `libft.a`

### Remove object files

```bash
make clean
```

### Remove object files and library

```bash
make fclean
```

### Rebuild everything

```bash
make re
```

## Using `libft` in Another Project

1. Build the library in this repository.
2. Copy `libft.a` and `libft.h` to your target project (or reference them directly).
3. Include the header in your source file:

```c
#include "libft.h"
```

4. Link the static library during compilation:

```bash
gcc your_program.c -L. -lft -o your_program
```

## Notes

- Function naming follows the `ft_` prefix convention.
- The API is designed to stay close to standard C behavior where applicable.
- This library is intended to serve as the base utility layer for subsequent projects.

## Resources

https://www.geeksforgeeks.org/c/linked-list-in-c/
https://www.geeksforgeeks.org/c/c-program-for-inserting-a-node-in-a-linked-list/
https://www.geeksforgeeks.org/dsa/reverse-a-linked-list/
https://stackoverflow.com/
https://www.notion.so
