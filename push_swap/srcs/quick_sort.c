<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:09:22 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/11 16:09:24 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
#include "../incl/push_swap.h"

void	quick_sort_3_a_b(t_stack *stack, int dim)
{
<<<<<<< HEAD
	if (dim == 3 && stack->len_a == 3)
=======
	if (dim == 3 && stack->len_A == 3)
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
		lil_sort(stack);
	else if (dim == 2)
	{
		if (stack->a[0] > stack->a[1])
			sa(stack, 1);
	}
	else if (dim == 3)
	{
<<<<<<< HEAD
		while (dim != 3
			|| !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (dim == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				sa(stack, 1);
			else if (dim == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				dim = when_push(stack, dim, 1);
=======
		while (dim != 3 || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (dim == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				sa(stack, 1);
			else if (dim == 3 && !(stack->a[2] > stack->a[0] && stack->a[2] > stack->a[1]))
			{
				pb(stack, 1);
				dim--;
			}
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
			else if (stack->a[0] > stack->a[1])
				sa(stack, 1);
			else if (dim++)
				pa(stack, 1);
		}
	}
}

int	median_of_numbers(int *pivot, int *stack, int dim)
{
<<<<<<< HEAD
	int	*tmp;
=======
	int *tmp;
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	int	i;
	int	j;

	tmp = (int *)malloc(sizeof(int) * dim);
	if (!tmp)
		return (0);
	i = 0;
	j = 0;
	while (i < dim)
		tmp[j++] = stack[i++];
	tmp_sort(tmp, dim);
	*pivot = tmp[dim / 2];
	free(tmp);
	return (1);
}

int	sort_3_b(t_stack *stack, int dim)
{
	if (dim == 1)
		pa(stack, 1);
	else if (dim == 2)
	{
		if (stack->b[0] < stack->b[1])
			sb(stack, 1);
		while (dim--)
			pa(stack, 1);
	}
	else if (dim == 3)
	{
		while (dim || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (dim == 1 && stack->a[0] > stack->a[1])
				sa(stack, 1);
<<<<<<< HEAD
			else if (dim == 1
				|| (dim >= 2 && stack->b[0] > stack->b[1])
				|| (dim == 3 && stack->b[0] > stack->b[2]))
				dim = when_push(stack, dim, 0);
=======
			else if (dim == 1 || (stack->len_B >= 2 && stack->b[0] > stack->b[1]) || (stack->len_B == 3 && stack->b[0] > stack->b[2]))
			{
				pa(stack, 1);
				dim--;
			}
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
			else
				sb(stack, 1);
		}
	}
	return (0);
}

int	quick_sort_b(t_stack *stack, int dim, int count_r)
{
	int	pivot;
	int	numbers;

	if (!count_r && check_sorted_desc(stack->b, dim) == 1)
		while (dim--)
			pa(stack, 1);
	if (dim <= 3)
	{
		sort_3_b(stack, dim);
		return (1);
	}
	numbers = dim;
	if (!median_of_numbers(&pivot, stack->b, dim))
		return (0);
	while (dim != numbers / 2)
	{
		if (stack->b[0] >= pivot && dim--)
			pa(stack, 1);
		else if (++count_r)
			rb(stack, 1);
	}
<<<<<<< HEAD
	while (numbers / 2 != stack->len_b && count_r--)
		rrb(stack, 1);
	return (quick_sort_a(stack, numbers / 2 + numbers % 2, 0)
		&& quick_sort_b(stack, numbers / 2, 0));
=======
	while (numbers / 2 != stack->len_B && count_r--)
		rrb(stack, 1);
	return (quick_sort_a(stack, numbers / 2 + numbers % 2, 0) && quick_sort_b(stack, numbers / 2, 0));
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
}

int	quick_sort_a(t_stack *stack, int dim, int count_r)
{
	int	pivot;
	int	numbers;

	if (check_sorted_asc(stack->a, dim) == 1)
		return (1);
	numbers = dim;
<<<<<<< HEAD
	if (dim <= 3)
=======
	if (dim <= 3) //check cause on recursion this should be the exit
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	{
		quick_sort_3_a_b(stack, dim);
		return (1);
	}
<<<<<<< HEAD
	if (!count_r && !median_of_numbers(&pivot, stack->a, dim))
=======
	if (!count_r && !median_of_numbers(&pivot, stack->a, dim))//maybe median is partition()?
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
		return (0);
	while (dim != numbers / 2 + numbers % 2)
	{
		if (stack->a[0] < pivot && (dim--))
			pb(stack, 1);
		else if (++count_r)
			ra(stack, 1);
	}
<<<<<<< HEAD
	while (numbers / 2 + numbers % 2 != stack->len_a && count_r--)
		rra(stack, 1);
	return (quick_sort_a(stack, numbers / 2 + numbers % 2, 0)
		&& quick_sort_b(stack, numbers / 2, 0));
=======
	while (numbers / 2 + numbers % 2 != stack->len_A && count_r--)
		rra(stack, 1);
	return (quick_sort_a(stack, numbers / 2 + numbers % 2, 0) && quick_sort_b(stack, numbers / 2, 0));
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	return (1);
}