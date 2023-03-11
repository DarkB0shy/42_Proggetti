/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:54 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/11 16:07:56 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	sa(t_stack *stack, int f)
{
	int		tmp;

	if (!stack->a[0] || !stack->a[1])
		return (0);
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (f == 1)
		ft_printf("sa\n");
	stack->moves++;
	return (1);
}

int	sb(t_stack *stack, int f)
{
	int		tmp;

	if (stack->len_b == 0 || stack->len_b == 1)
		return (0);
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (f == 1)
		ft_printf("sb\n");
	stack->moves++;
	return (1);
}

/*sa and sb at the same time.*/
int	ss(t_stack *stack, int f)
{
	int	tmp;

	if (!stack->a[0] || !stack->a[1] || !stack->b[0] || !stack->b[1])
		return (0);
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (f == 1)
		ft_printf("ss\n");
	stack->moves++;
	return (1);
}
