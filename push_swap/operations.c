/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:44:51 by robegarc          #+#    #+#             */
/*   Updated: 2023/02/28 15:18:35 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.*/
int	sa(t_node **a, int f)
{
	t_node	*n;
	int		tmp;
	
	n = *a;
	if (!n || !n->next)
		return (0);
	tmp = n->data;
	n->data = n->next->data;
	n->next->data = tmp;
	if (f == 1)
		ft_printf("sa\n");
	return (1);
}

/*swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.*/
int	sb(t_node **b, int f)
{
	t_node	*n;
	int		tmp;
	
	n = *b;
	if (!n || !n->next)
		return (0);
	tmp = n->data;
	n->data = n->next->data;
	n->next->data = tmp;
	if (f == 1)
		ft_printf("sb\n");
	return (1);
}

/*sa and sb at the same time.*/
int	ss(t_node **a, t_node **b, int f)
{
	sa(a, 0);
	sb(b, 0);	
	if (f == 1)
		ft_printf("ss\n");
	return (1);
}
/*push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.*/
int	pa(t_node **a, t_node **b, int f)
{
	t_node	*n;

	if (!*b)
		return (0);
	n = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = n;
	if (f == 1)
		ft_printf("pa\n");
	return (1);
}

/*push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.*/
int	pb(t_node **a, t_node **b, int f)
{
	t_node	*n;

	if (!*a)
		return (0);
	n = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = n;
	if (f == 1)
		ft_printf("pb\n");
	return (1);
}

/*rotate a - shift up all elements of stack a by 1. The first element becomes the last one.*/
int	ra(t_node **a, int f)
{
	t_node	*n;
	t_node	*tmp;
	
	n = *a;
	tmp = n;
	while (n->next)
		n = n->next;
	n->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	if (f == 1)
		ft_printf("ra\n");
	return (1);
}

/*rotate b - shift up all elements of stack b by 1. The first element becomes the last one.*/
int	rb(t_node **b, int f)
{
	t_node	*tmp;

	tmp = *b;
	while ((*b)->next)
		*b = (*b)->next;
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (f == 1)
		ft_printf("rb\n");
	return (1);
}

/*ra and rb at the same time.*/
int	rr(t_node **a, t_node **b, int f)
{
	t_node	*na;
	t_node	*nb;
	t_node	*tmp;

	if (!(*a) || !(*b))
		return (0);
	na = (*a);
	tmp = na;
	while (na->next)
		na = na->next;
	na->next = tmp;
	(*a) = tmp->next;
	tmp->next = NULL;
	nb = (*b);
	tmp = nb;
	while (nb->next)
		nb = nb->next;
	nb->next = tmp;
	(*b) = tmp->next;
	tmp->next = NULL;
	if (f == 1)
		ft_printf("rr\n");
	return (1);
}
/*reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.*/
int	rra(t_node **a, int f)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = (*a);
	while ((*a)->next)
	{
		(*a) = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (f == 1)
		ft_printf("rra");
	return (1);
}

/*reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.*/
int	rrb(t_node **b, int f)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = (*b);
	while ((*b)->next)
	{
		(*b) = (*b)->next;
		i++;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (f == 1)
		ft_printf("rrb\n");
	return (1);
}

/*rra and rrb at the same time.*/
int	rrr(t_node **a, t_node **b, int f)
{
	if (!(*a) || !(*b))
		return (0);
	rra(a, 0);
	rrb(b, 0);
	if (f == 1)
		ft_printf("rrr\n");
	return (1);
}