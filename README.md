
# Libft Project

42 school's first project, **libft**, is about learning how the standard functions of C programming work by coding them from scratch and creating our very own library.

This project has been archived in the state it was in at the time of evaluation.

Libft is an essential project, as this library will be used in future 42 school assignments. I highly recommend going through the trial-and-error process of writing your own code and testing it yourself, rather than relying on copy-pasting code you only half-understand. If you succeeded in your piscine, there’s no reason you can’t figure this project out for yourself! Be patient and thorough.

---

## Status
- **Finished**: 2024-09-01
- **Grade**: 125/100

---

## Usage

To compile the mandatory functions:

```bash
make
```

To compile with the bonus functions:

```bash
make bonus
```

To clean the object files:

```bash
make clean
```

To fully clean (including removing the static library):

```bash
make fclean
```

To rebuild everything from scratch:

```bash
make re
```

---

## Included Functions

### Mandatory Functions
The mandatory functions in **libft** are either standard C library functions or custom implementations of useful functions. They are mostly used for manipulating characters, strings, and memory. These 34 mandatory functions must be implemented correctly to pass the project and achieve a 100% grade.

#### Functions to check and manipulate characters:
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

#### Functions to manipulate strings:
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

#### Functions to manipulate memory:
- `ft_calloc`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_strdup`

#### Functions for numbers:
- `ft_atoi`
- `ft_itoa`

#### Functions to write to a file descriptor:
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

### Bonus Functions
The bonus functions in **libft** deal with list manipulation using a custom linked list structure `t_list`. Completing the bonus section adds 25% to the final grade.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

### Additional Libraries

This version of **libft** includes additional functionalities by linking the following libraries:

1. **get_next_line**:
   - A function to read one line at a time from a file descriptor.
   - This function is implemented in `get_next_line.c` and `get_next_line_utils.c`.
   
2. **ft_printf**:
   - A custom implementation of `printf` that supports format specifiers like `%c`, `%s`, `%d`, `%x`, and more.
   - This is implemented across multiple files, including `ft_printf.c`, `ft_prt_c.c`, `ft_prt_id.c`, `ft_prt_s.c`, `ft_prt_x.c`, and others.

---

## Status

**ft_printf**
- **Finished**: 2024-09-07
- **Grade**: 100/100

**get_next_line**
- **Finished**: 2024-09-11
- **Grade**: 100/100

---

To use these libraries, compile your code by linking against `libft.a`:

```bash
gcc -o your_program your_program.c -L. -lft -I./include
```

To use the functions from `get_next_line` and `ft_printf`, include the appropriate headers in your source code:

```c
#include "get_next_line.h"
#include "ft_printf.h"
```

Example usage for **get_next_line**:

```c
#include "get_next_line.h"
#include <fcntl.h>

int main()
{
    int fd = open("file.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        ft_printf("%s
", line);
        free(line); // Don't forget to free the memory
    }

    close(fd);
    return 0;
}
```

Example usage for **ft_printf**:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, World! %d %s %x
", 42, "Test", 255);
    return 0;
}
```

---

## Norminette

At 42 School, projects are expected to adhere to the **Norm**, a strict coding standard:

- No `for`, `do while`, `switch`, `case`, or `goto` allowed.
- No more than **25 lines per function** and **5 functions per file**.
- No assignments and declarations in the same line (unless static).
- No more than **5 variables** per function.

Use the **Norminette** tool to check your code for compliance with the Norm.

### Tools:
- [Norminette](https://github.com/42School/norminette) - Tool to check code compliance.
- [42 Header for Vim](https://github.com/42School/42-header) - Header for Vim.

---

## License

This project is licensed under the terms of the **42 License**. You can find more information on the [42 website](https://www.42.fr/en/).

