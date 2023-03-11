<<<<<<< HEAD
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

=======
#include "../incl/push_swap.h"

/*push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.*/
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
int	pa(t_stack *stack, int f)
{
	int	len;

<<<<<<< HEAD
	len = stack->len_a;
=======
	len = stack->len_A;
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
<<<<<<< HEAD
	stack->len_a++;
	stack->a[0] = stack->b[0];
	len = 1;
	while (len < stack->len_b)
=======
	stack->len_A++;
	stack->a[0] = stack->b[0];
	len = 1;
	while (len < stack->len_B)
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	{
		stack->b[len - 1] = stack->b[len];
		len++;
	}
<<<<<<< HEAD
	stack->len_b--;
=======
	stack->len_B--;
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	if (f == 1)
		ft_printf("pa\n");
	stack->moves++;
	return (1);
}

<<<<<<< HEAD
int	pb(t_stack *stack, int f)
{
	int	len;

	len = stack->len_b;
=======
/*push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.*/
int	pb(t_stack *stack, int f)
{
    int	len;

	len = stack->len_B;
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
<<<<<<< HEAD
	stack->len_b++;
	stack->b[0] = stack->a[0];
	len = 1;
	while (len < stack->len_a)
=======
	stack->len_B++;
	stack->b[0] = stack->a[0];
	len = 1;
	while (len < stack->len_A)
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	{
		stack->a[len - 1] = stack->a[len];
		len++;
	}
<<<<<<< HEAD
	stack->len_a--;
=======
	stack->len_A--;
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	if (f == 1)
		ft_printf("pb\n");
	stack->moves++;
	return (1);
<<<<<<< HEAD
}
=======
}
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
