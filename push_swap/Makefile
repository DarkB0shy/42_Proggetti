SRCS = main.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CLFAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = push_swap

PRINTF = printf/libftprintf.a

LIBFT = libft/libft.a

INCLUDE = push_swap.h

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${LINKAR} ${INCLUDE} ${OBJS} ${PRINTF} ${LIBFT} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re: fclean all