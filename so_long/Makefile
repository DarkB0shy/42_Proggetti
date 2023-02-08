# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 11:08:32 by dcarassi          #+#    #+#              #
#    Updated: 2023/02/08 14:01:56 by dcarassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c map.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CLFAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = so_long

PRINTF = ft_printf/libftprintf.a

GET_NEXT_LINE = ft_get_next_line/libftget_next_line.a

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} ${PRINTF} ${GET_NEXT_LINE} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re: fclean all
