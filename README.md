*This project has been created as part of the 42 curriculum by maratana*

Libft

Description:

Libft is a custom C library that reimplements several standard C library functions and introduces additional utility functions. The goal is to understand how these functions work internally and build a reusable library for future projects.

Instructions:

Compilation

Run the following command to compile the library:

make

This generates the static library libft.a.

Other available Makefile commands:

make clean — removes object files.

make fclean — removes object files and libft.a.

make re — recompiles the library from scratch.

Functions

Part 1 — Libc Functions

Character checks: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

String functions: ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_strlcpy, ft_strlcat, ft_strnstr

Memory functions: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp

Other functions: ft_atoi, ft_toupper, ft_tolower, ft_calloc, ft_strdup

Part 2 — Additional Functions

String manipulation: ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri

File descriptor output: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

Bonus

Linked list functions: ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

Resources

C standard library manual pages (man)

ChatGpt - research and explanation of new concepts.
