CC = gcc
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=42
LIBC = ar -rcs
RM = rm -f
NAME = libft_get_next_line.a
SRCS = get_next_line.c get_next_line_utils.c

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

flcean: clean
	${RM} ${NAME}

re: flcean all
