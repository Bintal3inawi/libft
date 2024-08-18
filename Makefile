# List of source files
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
      ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c \
      ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strtrim.c \
      ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
      ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c ft_strlcat.c ft_split.c

# Object files corresponding to source files
OBJS = $(SRC:.c=.o)

# The name of the static library to create
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

# Default target to build the static library
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the static library
clean:
	rm -f $(OBJS)

# Clean up everything, including the static library
fclean: clean
	rm -f $(NAME)

# Rebuild everything from scratch
re: fclean all

# Declaring these targets as phony to avoid conflicts with files named 'all', 'clean', etc.
.PHONY: all clean fclean re
