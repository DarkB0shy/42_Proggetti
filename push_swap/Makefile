# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 10:37:31 by robegarc          #+#    #+#              #
#    Updated: 2023/02/23 12:53:09 by robegarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c utils.c operations.c
OBJ = $(SRC:.c=.o)
CC = gcc -Wall -Wextra -Werror -g
NAME = push_swap
FT_PRINTF = ft_printf
LIBRARY = ft_printf/libftprintf.a

all	: $(NAME)

$(NAME) : $(OBJ)
	make -C $(FT_PRINTF)
	$(CC) $(OBJ) $(LIBRARY) -o $(NAME)
clean :
	make clean -C $(FT_PRINTF)
	rm -f $(OBJ)
fclean : clean
	make fclean -C $(FT_PRINTF)
	rm -f $(NAME)
re : fclean clean all

.PHONY: clean fclean re all