# Hayat Ahel

# ft_printf

`ft_printf` is a project from the **42 Core Curriculum** that involves recreating a simplified version of the C standard library function `printf()`.

The goal of the project is to understand how formatted output works in C by building a function capable of receiving a format string, processing different conversion specifiers, handling a variable number of arguments, and returning the number of characters printed.

## About the Project

The function follows the general behavior of the original `printf()` while implementing a required subset of its conversions.

The project supports:

* `%c` — character
* `%s` — string
* `%p` — pointer address
* `%d` — decimal integer
* `%i` — integer
* `%u` — unsigned decimal integer
* `%x` — lowercase hexadecimal
* `%X` — uppercase hexadecimal
* `%%` — percent sign

## What I Learned

This project introduced me to several important C concepts, particularly:

* Variadic functions and the `va_list` family of macros
* Parsing and interpreting format strings
* Working with signed and unsigned integer types
* Number representation and conversion between different bases
* Pointer representation
* Breaking a larger problem into smaller responsibilities
* Tracking output and reproducing the behavior of an existing library function

One of the most valuable parts of `ft_printf` was learning to take a function I had used before as a black box and investigate what actually needs to happen behind the scenes for it to work.

## Building the Project

Clone the repository and build the library using:

```bash
git clone <repository-url>
cd <repository-name>
make
```

This creates the `libftprintf.a` static library.

The project can then be included in another C program using:

```c
#include "ft_printf.h"
```

and linked with `libftprintf.a` during compilation.

## 42

This repository contains my implementation of `ft_printf` as completed during the 42 Core Curriculum.

If you're currently working on this project yourself, I strongly recommend using this repository as a reference **only after completing your own implementation**. The value of ft_printf comes from figuring out how these concepts fit together yourself.
