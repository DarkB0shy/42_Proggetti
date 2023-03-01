/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:46:15 by robegarc          #+#    #+#             */
/*   Updated: 2023/02/28 15:18:57 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "ft_printf/ft_printf.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}				t_node;

t_node	*new_node(int v);
int		rrr(t_node **a, t_node **b, int f);
int		ss(t_node **a, t_node **b, int f);
int		pa(t_node **a, t_node **b, int f);
int		pb(t_node **a, t_node **b, int f);
int		rr(t_node **a, t_node **b, int f);
int		where_is_i(t_node **d, int v);
int		check_double(t_node **a);
int		ft_last_elem(t_node *p);
int		ft_lst_size(t_node **p);
int		rra(t_node **a, int f);
int		rrb(t_node **b, int f);
int		sa(t_node **p, int f);
int		sb(t_node **b, int f);
int		ra(t_node **a, int f);
int		rb(t_node **b, int f);
int		is_sorted(t_node **a);
int		the_max(t_node **a);
int		the_min(t_node **a);
int		ft_atoi(char *str);
void	in_head(t_node **p, t_node *v);
void	in_tail(t_node **p, t_node *v);
void	print_stks(t_node *a, t_node *b);
void	minmax(t_node *p);
void	maxmin(t_node *p);
void	ft_exit(t_node **p);

#endif
