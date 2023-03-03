/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:44:51 by robegarc          #+#    #+#             */
/*   Updated: 2023/03/01 14:54:52 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.*/
int	sa(t_stack *stack, int f)
{
	int		tmp;
	
    if(!stack->a[0] || !stack->a[1])
        return (0);
    tmp = stack->a[0];
    stack->a[0] = stack->a[1];
    stack->a[1] = tmp;
	if (f == 1)
		ft_printf("sa\n");
	stack->n_moves++;
	return (1);
}

/*swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.*/
int	sb(t_stack *stack, int f)
{
	int		tmp;
	
	if (!stack->b[0] || !stack->b[1])
		return (0);
	tmp = stack->b[0];
    stack->b[0] = stack->b[1];
    stack->b[1] = tmp;
	if (f == 1)
		ft_printf("sb\n");
	stack->n_moves++;
	return (1);
}

/*sa and sb at the same time.*/
int	ss(t_stack *stack, int f)
{
    int tmp;
    
	if(!stack->a[0] || !stack->a[1] || !stack->b[0] || !stack->b[1])
        return (0);
    tmp = stack->a[0];
    stack->a[0] = stack->a[1];
    stack->a[1] = tmp;
    tmp = stack->b[0];
    stack->b[0] = stack->b[1];
    stack->b[1] = tmp;
	if (f == 1)
		ft_printf("ss\n");
	stack->n_moves++;
	return (1);
}
/*push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.*/
int	pa(t_stack *stack, int f)
{
	int	len;

	len = stack->curr_a;
	while (len > 0)
	{
		stack->a[len] = stack->a[len - 1];
		len--;
	}
	stack->curr_a++;
	stack->a[0] = stack->b[0];
	len = 1;
	while (len < stack->curr_b)
	{
		stack->b[len - 1] = stack->b[len];
		len++;
	}
	stack->curr_b--;
	if (f == 1)
		ft_printf("pa\n");
	stack->n_moves++;
	return (1);
}

/*push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.*/
int	pb(t_stack *stack, int f)
{
    int	len;

	len = stack->curr_b;
	while (len > 0)
	{
		stack->b[len] = stack->b[len - 1];
		len--;
	}
	stack->curr_b++;
	stack->b[0] = stack->a[0];
	len = 1;
	while (len < stack->curr_a)
	{
		stack->a[len - 1] = stack->a[len];
		len++;
	}
	stack->curr_a--;
	if (f == 1)
		ft_printf("pb\n");
	stack->n_moves++;
	return (1);
}

/*rotate a - shift up all elements of stack a by 1. The first element becomes the last one.*/
int	ra(t_stack *stack, int f)
{
    int i;
    int tmp;

    i = -1;
    tmp = stack->a[0];
    while (++i < stack->curr_a - 1)
        stack->a[i] = stack->a[i + 1]; 
    stack->a[i] = tmp;
	if (f == 1)
		ft_printf("ra\n");
	stack->n_moves++;
	return (1);
}

/*rotate b - shift up all elements of stack b by 1. The first element becomes the last one.*/
int	rb(t_stack *stack, int f)
{
	int i;
    int tmp;

    i = -1;
    tmp = stack->b[0];
    while (++i < stack->curr_b - 1)
        stack->b[i] = stack->b[i + 1]; 
    stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rb\n");
	stack->n_moves++;
	return (1);
}

/*ra and rb at the same time.*/
int	rr(t_stack *stack, int f)
{
	int i;
    int tmp;

    i = -1;
    tmp = stack->a[0];
    while (++i < stack->curr_a - 1)
        stack->a[i] = stack->a[i + 1]; 
    stack->a[i] = tmp;
    i = -1;
    tmp = stack->b[0];
    while (++i < stack->curr_b - 1)
        stack->b[i] = stack->b[i + 1]; 
    stack->b[i] = tmp;
	if (f == 1)
		ft_printf("rr\n");
	stack->n_moves++;
    return (1);
}

/*reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.*/
int	rra(t_stack *stack, int f)
{
	int	len;
    int tmp;

    tmp = stack->a[stack->curr_a - 1];
	len = stack->curr_a;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
    stack->a[0] = tmp;
	if (f == 1)
		ft_printf("rra");
	stack->n_moves++;
	return (1);
}

/*reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.*/
int	rrb(t_stack *stack, int f)
{
	int	len;
    int tmp;

    tmp = stack->b[stack->curr_b - 1];
	len = stack->curr_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
    stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrb");
	stack->n_moves++;
	return (1);
}

/*rra and rrb at the same time.*/
int	rrr(t_stack *stack, int f)
{
	int	len;
    int tmp;

    tmp = stack->a[stack->curr_a - 1];
	len = stack->curr_a;
	while (len-- > 0)
		stack->a[len] = stack->a[len - 1];
    stack->a[0] = tmp;
    tmp = stack->b[stack->curr_b - 1];
	len = stack->curr_b;
	while (len-- > 0)
		stack->b[len] = stack->b[len - 1];
    stack->b[0] = tmp;
	if (f == 1)
		ft_printf("rrr\n");
	stack->n_moves++;
	return (1);
}
