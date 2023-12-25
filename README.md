# libft_42
Certainly! Here's a basic README.md file for your libft.a project:

---

# libft.a - Your Custom C Library

`libft.a` is a custom C library containing a collection of commonly used functions to make your C programming life easier. This library provides various utility functions for string manipulation, memory operations, linked list handling, and more.

## Table of Contents

1. [Introduction](#introduction)
2. [Included Files](#included-files)
3. [Usage](#usage)
4. [Makefile](#makefile)
5. [Contact](#contact)

## Introduction

This library, `libft.a`, is designed to be a useful toolbox for C developers. It includes functions for tasks ranging from string manipulation (`ft_strdup`, `ft_strjoin`) to memory operations (`ft_memset`, `ft_memcpy`) and various others.

## Included Files

Here are some of the key files included in this library:

- **Makefile:** The Makefile contains rules for compiling the library and example programs.

- **Header File (`libft.h`):** This file declares all the function prototypes and any necessary macros.

- **Source Files:**
  - `ft_atoi.c`
  - `ft_bzero.c`
  - ...
  - `ft_toupper.c`

- **Bonus Functions (with `_bonus` suffix):**
  - `ft_lstadd_back_bonus.c`
  - `ft_lstadd_front_bonus.c`
  - ...
  - `ft_lstsize_bonus.c`

## Usage

To use `libft.a` in your projects, follow these steps:

1. Compile the library using the provided Makefile.
    ```bash
    make
    ```

2. Link your project with the compiled library (`libft.a`) and include the header file (`libft.h`) in your source code.
    ```c
    #include "libft.h"
    ```

3. Use the functions in your code as needed.

## Makefile

The Makefile simplifies the compilation process. Here are some key targets:

- `make`: Compiles the library (`libft.a`).
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the compiled library.
- `make re`: Cleans and recompiles the library.

## Contact

If you have any questions, suggestions, or issues, feel free to contact the project maintainer (tboussad):

- Boussaden Taha
- tahaboussaden7322@gmail.com
