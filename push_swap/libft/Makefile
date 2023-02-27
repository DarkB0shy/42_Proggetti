CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB1 = ar -rcs

LIB2 = ranlib

RM = rm -f

NAME = libft.a

INCLUDE = libft.h

SRCS = ft_atoi.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

all:	$(OBJS) $(NAME)

$(OBJS):	$(INCLUDE)

$(NAME):	$(OBJS) $(INCLUDE)
	$(LIB1) $(NAME) $(OBJS)
	$(LIB2) $(NAME)

clean:
	@$(RM) $(OBJS) $(BONUSOBJS)

fclean:	clean
	@$(RM) $(NAME)

re: fclean all