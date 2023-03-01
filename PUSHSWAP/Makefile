SRCS = main.c get_input.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CLFAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = push_swap

PRINTF = printf/libftprintf.a

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} ${PRINTF} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re: fclean all