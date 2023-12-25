# Compiler
cmd = cc

# Compilation flags
flags = -Wall -Werror -Wextra

# Source files for the main library
sources = ft_bzero.c ft_isalpha.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
          ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_substr.c \
          ft_strtrim.c ft_itoa.c ft_striteri.c ft_putstr_fd.c ft_putnbr_fd.c \
          ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
          ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
          ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strmapi.c \
          ft_putchar_fd.c ft_putendl_fd.c ft_split.c

# Object files corresponding to the main sources
objs = $(sources:.c=.o)

# Bonus source files
bns = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
      ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
      ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Object files corresponding to the bonus sources
bonus_obj = $(bns:.c=.o)

# Library name
NAME = libft.a

# Rule to build the main library
all: $(NAME)

$(NAME): $(objs)
    ar -rc $(NAME) $(objs)

# Rule to compile each source file into object files
%.o:%.c libft.h
    $(cmd) $(flags) -c $< -o $@

# Rule to build the bonus library
bonus: $(bonus_obj)
    ar -rc $(NAME) $(bonus_obj)

# Rule to remove object files
clean:
    rm -rf $(objs) $(bonus_obj)

# Rule to remove object files and compiled libraries
fclean: clean
    rm -rf $(NAME) $(bonus)

# Rule to clean and rebuild the library
re: fclean all

# Declare certain targets as phony to avoid conflicts with file names
.PHONY : all bonus clean fclean re
