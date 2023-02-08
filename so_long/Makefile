# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 11:08:32 by dcarassi          #+#    #+#              #
#    Updated: 2023/02/08 12:07:32 by dcarassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c map.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CLFAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = so_long

PRINTF = ft_printf/libftprintf.a

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} ${PRINTF} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re: fclean all
