SRCS = push_swap.c utils.c operations.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = push_swap

PRINTF = ft_printf/libftprintf.a

LIBFT = libft/libft.a

${NAME}: ${OBJS} ${LIBFT} ${PRINTF} 
	${CC} ${CFLAGS} ${OBJS} ${PRINTF} ${LIBFT} -o ${NAME}

all: ${NAME}

${PRINTF}:
	$(MAKE) -C ft_printf

${LIBFT}:
	$(MAKE) -C libft

clean:
	$(MAKE) clean -C ft_printf
	$(MAKE) clean -C libft
	${RM} ${OBJS}

fclean:
	$(MAKE) fclean -C ft_printf
	$(MAKE) fclean -C libft
	${RM} ${NAME}

re: fclean all
	
