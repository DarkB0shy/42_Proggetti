CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB1 = ar -rcs
LIB2 = ranlib
RM = rm -f
NAME = libft.a
INCLUDE = libft.h
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c
OBJS = $(SRCS:.c=.o)

all:	$(OBJS) $(NAME)

$(OBJS):	$(INCLUDE)

$(NAME):	$(OBJS) $(INCLUDE)
	$(LIB1) $(NAME) $(OBJS)
	$(LIB2) $(NAME)

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re: fclean all
