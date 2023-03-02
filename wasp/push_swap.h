/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:46:15 by robegarc          #+#    #+#             */
/*   Updated: 2023/03/01 14:47:38 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_stack {
	int	*a;
	int	*b;
	int	curr_a;
	int	curr_b;
}				t_stack;

// t_node	*new_node(int v);
int	ft_atoi(char *str);
int	sa(t_stack *stack, int f);
int	sb(t_stack *stack, int f);
int	ss(t_stack *stack, int f);
int	pb(t_stack *stack, int f);
int	pa(t_stack *stack, int f);
int	ra(t_stack *stack, int f);
int	rb(t_stack *stack, int f);
int	rr(t_stack *stack, int f);
int	rrr(t_stack *stack, int f);
int	rrb(t_stack *stack, int f);
int	rra(t_stack *stack, int f);
// int	ra(t_node **a, int f);
// int		rrr(t_node **a, t_node **b, int f);
// int		pb(t_node **a, t_node **b, int f);
// int		rr(t_node **a, t_node **b, int f);
// int		where_is_i(t_node **d, int v);
// int		check_double(t_node **a);
// int		ft_last_elem(t_node *p);
// int		ft_lst_size(t_node **p);
// int		rra(t_node **a, int f);
// int		rrb(t_node **b, int f);
// int		rb(t_node **b, int f);
// int		is_sorted(t_node **a);
// int		the_max(t_node **a);
// int		the_min(t_node **a);
// void	in_head(t_node **p, t_node *v);
// void	in_tail(t_node **p, t_node *v);
// void	print_stks(t_node *a, t_node *b);
// void	minmax(t_node *p);
// void	maxmin(t_node *p);
// void	ft_exit(t_node **p);

#endif
