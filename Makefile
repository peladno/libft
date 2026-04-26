NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
# 	ft_strtrim \
# 	ft_split \
# 	ft_itoa \
# 	ft_strmapi \
# 	ft_striteri \
# 	ft_putchar_fd \
# 	ft_putstr_fd \
# 	ft_putendl_fd \
# 	ft_putnbr_fd \


OBJS = $(SRCS:.c=.o)

RM = rm -f

# ---------------------------------------------------------------------------- #

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# ---------------------------------------------------------------------------- #

.PHONY: all clean fclean re