*This project has been created as part of the 42 curriculum by <georgios-arvanitidis>.*

# ft_printf

An implementation of C's standard `printf` function (`libftprintf.a`). The goal of this project is to understand variadic functions in C, learn how formatted output parsing works under the hood, and build a reusable static library for future 42 C projects.

---

## Description

The `ft_printf` function mimics the standard library `printf` function from `<stdio.h>`. It writes formatted output to the standard output stream by scanning a format string, evaluating specifiers prefixed by `%`, and extracting corresponding arguments using variadic functions.

### Handled Specifiers

| Specifier | Description |
| :--- | :--- |
| `%c` | Prints a single character. |
| `%s` | Prints a string of characters. |
| `%p` | Prints a `void *` pointer argument in hexadecimal format. |
| `%d` | Prints a signed decimal (integer) number. |
| `%i` | Prints an integer in base 10. |
| `%u` | Prints an unsigned decimal (integer) number. |
| `%x` | Prints a number in hexadecimal (base 16) lowercase format. |
| `%X` | Prints a number in hexadecimal (base 16) uppercase format. |
| `%%` | Prints a literal percent sign. |

---

## Instructions

### Compilation

The project includes a `Makefile` that compiles the source files into a static library named `libftprintf.a`.

```bash
# Clone the repository
git clone [https://github.com/username/ft_printf.git](https://github.com/username/ft_printf.git)
cd ft_printf

# Compile libftprintf.a
make

# Clean object files (.o)
make clean

# Clean object files and libftprintf.a
make fclean

# Recompile the library from scratch
make re

---

Resources
References

    C Library <stdarg.h> Documentation — Understanding variadic macros and standard ABI argument traversal.

    Linux man 3 printf — Reference behavior, edge cases, and return value rules for stdout operations.

    Fellow Peers: Collaboration, peer code reviews, and discussions regarding edge-case behavior (e.g., NULL pointers, INT_MIN, (nil) output formats, and standard return values).

    GitHub: Referencing community unit tests (e.g., tripouille/printfTester, paulo-santana/ft_printf_tester) to validate specifier compliance and test edge cases against standard printf.

    GitBook: Consulting community-created 42 documentation, tutorials, and guides covering variadic functions and base-conversion logic.