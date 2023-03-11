<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:47 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/11 16:07:50 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
#include "../incl/push_swap.h"

int	ra(t_stack *stack, int f)
{
<<<<<<< HEAD
	int	i;
	int	tmp;

	i = -1;
	tmp = stack->a[0];
	while (++i < stack->len_a - 1)
		stack->a[i] = stack->a[i + 1];
	stack->a[i] = tmp;
=======
    int i;
    int tmp;

    i = -1;
    tmp = stack->a[0];
    while (++i < stack->len_A - 1)
        stack->a[i] = stack->a[i + 1]; 
    stack->a[i] = tmp;
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	if (f == 1)
		ft_printf("ra\n");
	stack->moves++;
	return (1);
}

<<<<<<< HEAD
int	rb(t_stack *stack, int f)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = stack->b[0];
	while (++i < stack->len_b - 1)
		stack->b[i] = stack->b[i + 1];
	stack->b[i] = tmp;
=======
/*rotate b - shift up all elements of stack b by 1. The first element becomes the last one.*/
int	rb(t_stack *stack, int f)
{
	int i;
    int tmp;

    i = -1;
    tmp = stack->b[0];
    while (++i < stack->len_B - 1)
        stack->b[i] = stack->b[i + 1]; 
    stack->b[i] = tmp;
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	if (f == 1)
		ft_printf("rb\n");
	stack->moves++;
	return (1);
}

/*ra and rb at the same time.*/
int	rr(t_stack *stack, int f)
{
<<<<<<< HEAD
	int	i;
	int	tmp;

	i = -1;
	tmp = stack->a[0];
	while (++i < stack->len_a - 1)
		stack->a[i] = stack->a[i + 1];
	stack->a[i] = tmp;
	i = -1;
	tmp = stack->b[0];
	while (++i < stack->len_b - 1)
		stack->b[i] = stack->b[i + 1];
	stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rr\n");
	stack->moves++;
	return (1);
}
=======
	int i;
    int tmp;

    i = -1;
    tmp = stack->a[0];
    while (++i < stack->len_A - 1)
        stack->a[i] = stack->a[i + 1]; 
    stack->a[i] = tmp;
    i = -1;
    tmp = stack->b[0];
    while (++i < stack->len_B - 1)
        stack->b[i] = stack->b[i + 1]; 
    stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rr\n");
	stack->moves++;
    return (1);
}
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
