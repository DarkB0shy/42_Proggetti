/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:34 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/11 16:07:36 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	pa(t_stack *stack, int f)
{
	int	len;

	len = stack->len_a;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->len_a++;
	stack->a[0] = stack->b[0];
	len = 1;
	while (len < stack->len_b)
	{
		stack->b[len - 1] = stack->b[len];
		len++;
	}
	stack->len_b--;
	if (f == 1)
		ft_printf("pa\n");
	stack->moves++;
	return (1);
}

int	pb(t_stack *stack, int f)
{
	int	len;

	len = stack->len_b;
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
	stack->len_b++;
	stack->b[0] = stack->a[0];
	len = 1;
	while (len < stack->len_a)
	{
		stack->a[len - 1] = stack->a[len];
		len++;
	}
	stack->len_a--;
	if (f == 1)
		ft_printf("pb\n");
	stack->moves++;
	return (1);
}
