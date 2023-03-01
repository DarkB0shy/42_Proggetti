/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:17:13 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/01 15:47:47 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/ft_printf.h"

typedef struct	s_node
{
	int	*stack_a;
	int	*stack_b;
}				t_node;

void	fill_stack(t_node *new_stack, int argc, char **argv);
void	ft_exit();

#endif