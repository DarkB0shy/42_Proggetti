/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:40 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/11 16:07:43 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	rra(t_stack *stack, int f)
{
	int	len;
	int	tmp;

	tmp = stack->a[stack->len_a - 1];
	len = stack->len_a;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
	stack->a[0] = tmp;
	if (f == 1)
		ft_printf("rra\n");
	stack->moves++;
	return (1);
}

int	rrb(t_stack *stack, int f)
{
	int	len;
	int	tmp;

	tmp = stack->b[stack->len_b - 1];
	len = stack->len_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
	stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrb\n");
	stack->moves++;
	return (1);
}

/*rra and rrb at the same time.*/
int	rrr(t_stack *stack, int f)
{
	int	len;
	int	tmp;

	tmp = stack->a[stack->len_a - 1];
	len = stack->len_a;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
	stack->a[0] = tmp;
	tmp = stack->b[stack->len_b - 1];
	len = stack->len_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
	stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrr\n");
	stack->moves++;
	return (1);
}
