/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:32:56 by robegarc          #+#    #+#             */
/*   Updated: 2023/03/01 10:38:08 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	print_error()
{
	ft_printf("ERROR\n");
	exit(0);	
}

int	ft_atoi(char *str)
{
	long int	r;
	int			s;
	int			i;

	r = 0;
	s = 1;
	i = 0;
	if (!ft_isdigit(str[i]))
		print_error();
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		r = r * 10 + str[i++] - '0';
	if (r > 2147483647 || r < -2147483647)
		print_error();
	return (r * s);
}

// int	ft_last_elem(t_node *p)
// {
// 	while (p->next)
// 		p = p->next;
// 	return (p->data);
// }

// int	check_double(t_node **a)
// {
// 	t_node	*n;
// 	t_node	*tmp;

// 	n = *a;
// 	while (n)
// 	{
// 		tmp = n->next;
// 		while (tmp)
// 		{
// 			if (n->data == tmp->data)
// 				return (1);
// 			tmp = tmp->next;
// 		}
// 		n = n->next;
// 	}
// 	return (0);
// }

// int	is_sorted(t_node **a)
// {
// 	t_node	*n;
// 	t_node	*tmp;

// 	n = *a;
// 	tmp = n;
// 	while (n)
// 	{
// 		if (tmp->data > n->data)
// 			return (0);
// 		tmp = n;
// 		n = n->next;
// 	}
// 	return (1);
// }

// int	the_max(t_node **a)
// {
// 	t_node	*n;
// 	int		max;

// 	n = *a;
// 	max = n->data;
// 	while (n)
// 	{
// 		if (n->data > max)
// 			max = n->data;
// 		n = n->next;
// 	}
// 	return (max);
// }

// int	the_min(t_node **a)
// {
// 	t_node	*n;
// 	int		min;

// 	n = *a;
// 	min = n->data;
// 	while (n)
// 	{
// 		if (n->data < min)
// 			min = n->data;
// 		n = n->next;
// 	}
// 	return (min);
// }


// void	in_tail(t_node **p, t_node *v)
// {
// 	t_node	*node;

// 	if (*p)
// 	{
// 		node = *p;
// 		while (node->next)
// 			node = node->next;
// 		node->next = v;
// 	}
// 	else
// 		*p = v;
// }

// void	ft_exit(t_node **p)
// {
// 	t_node	*n;

// 	n = *p;
// 	while (n)
// 	{
// 		free(n);
// 		n = n->next;
// 	}
// 	exit(0);
// }

// int	ft_lst_size(t_node **p)
// {
// 	int		cnt;
// 	t_node	*n;

// 	cnt = 0;
// 	n = (*p);
// 	while (n)
// 	{
// 		n = n->next;
// 		cnt++;
// 	}
// 	return (cnt);
// }

// void	in_head(t_node **p, t_node *v)
// {
// 	if (!p || !v)
// 		return ;
// 	v->next = *p;
// 	*p = v;
// }

// int	where_is_i(t_node **d, int v)
// {
// 	t_node	*n;
// 	int		i;

// 	n = *d;
// 	i = 0;
// 	while (n)
// 	{
// 		if (n->data == v)
// 			break;
// 		i++;
// 		n = n->next;
// 	}
// 	return (i);
// }
