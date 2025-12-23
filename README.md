*This activity has been created as part of the 42 curriculum by hahel.*

## Description
The **ft_printf** project is a reimplementation of the C `printf` function.
It handles formatted output for characters, strings, pointers, decimal and hexadecimal integers using only allowed functions.

Supported conversions:
- `%c`, `%s`
- `%p`
- `%d`, `%i`
- `%u`
- `%x`, `%X`
- `%%`

Main files:
- `ft_printf.c` : main function and parser.
- `ft_printf.h` : header and prototypes.
- `handelers_cs.c` : handlers for `%c` and `%s`.
- `handeles_id.c` : handlers for `%d` and `%i`.
- `handeles_p.c` : handler for `%p`.
- `handeles_u.c` : handler for `%u`.
- `handeles_x.c` : handler for `%x`.
- `handeles_X.c` : handler for `%X`.
- `Makefile` : compilation rules.

## Instructions

make rules :
- `make` – build the library/binary.
- `make clean` – remove object files.
- `make fclean` – remove objects and binary/library.
- `make re` – rebuild from scratch.

Include the header in your C file:
`#include "ft_printf.h"`
and use it when compiling
`cc -Wall -Werror -Wextra filename.c libftprintf.a`

`ft_printf` returns the number of printed characters or `-1` on error.

## Resources
- `man 3 printf`
- `man stdarg`
- 42 ft_printf subject PDF.
- geeks for geeks to learn about vardic functions.
- youtube Tutorials on variadic functions and base conversions.

## AI usage
AI tools were used only to help structure and phrase this README.
All code, algorithms, and implementation details of `ft_printf` and its handlers were written and verified by the author.
ai was only used for testing.
ai was not used to write any code.
