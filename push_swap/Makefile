# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 10:44:11 by dcarassi          #+#    #+#              #
#    Updated: 2023/03/12 10:44:13 by dcarassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	srcs/push_swap.c srcs/push_swap_utils.c srcs/quick_sort.c srcs/in_out_check.c srcs/init.c \
		operations/push.c operations/swap.c operations/reverse_rotate.c operations/rotate.c
OBJ = ${SRC:.c=.o}
NAME = push_swap

SRC_B =	bonus/checker.c
OBJ_B =	${SRC_B:.c=.o}
NAME_B = checker
OUT = ${filter-out srcs/push_swap.o ,${OBJ}}

CC = gcc -Wall -Wextra -Werror -g
FT_PRINTF = incl/ft_printf
LIBFT = incl/libft
LIBRARY = incl/ft_printf/libftprintf.a incl/libft/libft.a

all	: $(NAME)

$(NAME) : $(OBJ)
	@make -C $(FT_PRINTF)
	@make -C $(LIBFT)
	@$(CC) $(OBJ) $(LIBRARY) -o $(NAME)

bonus : $(NAME) $(OBJ_B)
	@$(CC) $(OUT) $(OBJ_B) $(LIBRARY) -o $(NAME_B)

clean :
	@make clean -C $(FT_PRINTF)
	@make clean -C $(LIBFT)
	@rm -f $(OBJ)
	@rm -f $(OBJ_B)

fclean : clean
	@make fclean -C $(FT_PRINTF)
	@make fclean -C $(LIBFT)
	@rm -f $(NAME)
	@rm -f $(NAME_B)

re : fclean all bonus

.PHONY: all clean fclean re