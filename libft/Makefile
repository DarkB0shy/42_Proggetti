CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB1 = ar -rcs
LIB2 = ranlib
RM = rm -f
NAME = libft.a
INCLUDE = libft.h
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c
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
