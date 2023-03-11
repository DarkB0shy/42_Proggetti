/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:09:15 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/11 16:09:17 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac < 2)
		return (0);
	stack = init(ac, av);
	sort(stack);
	ft_exit(stack);
	return (0);
}
