/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:18 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/11 16:07:22 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	esc_error(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	ft_printf("ERROR\n");
	exit(2);
}

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i] && a[i] == b[i])
		i++;
	return (a[i] - b[i]);
}

void	checker(char *move, t_stack *stack)
{
	if (ft_strcmp(move, "sa\n") == 0)
		sa(stack, 0);
	else if (ft_strcmp(move, "sb\n") == 0)
		sb(stack, 0);
	else if (ft_strcmp(move, "ss\n") == 0)
		ss(stack, 0);
	else if (ft_strcmp(move, "ra\n") == 0)
		ra(stack, 0);
	else if (ft_strcmp(move, "rb\n") == 0)
		rb(stack, 0);
	else if (ft_strcmp(move, "rr\n") == 0)
		rr(stack, 0);
	else if (ft_strcmp(move, "rra\n") == 0)
		rra(stack, 0);
	else if (ft_strcmp(move, "rrb\n") == 0)
		rrb(stack, 0);
	else if (ft_strcmp(move, "rrr\n") == 0)
		rrr(stack, 0);
	else if (ft_strcmp(move, "pa\n") == 0)
		pa(stack, 0);
	else if (ft_strcmp(move, "pb\n") == 0)
		pb(stack, 0);
	else
		esc_error(stack);
}

int	main(int ac, char **av)
{
	t_stack	*stack;
	char	*move;

	stack = init(ac, av);
	move = get_next_line(0);
	while (move != NULL)
	{
		checker(move, stack);
		free(move);
		move = get_next_line(0);
	}
	free(move);
	if (check_sorted_asc(stack->a, stack->len_a) && stack->len_b == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_exit(stack);
}
