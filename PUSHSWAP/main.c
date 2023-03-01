/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:19:49 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/01 15:18:29 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_node *stak, int argc)
{
	int	i;

	i = 0;
	ft_printf("<A>\n");
	while (i < (argc - 1))
	{
		ft_printf("%d\n", stak->stack_a[i]);
		i++;
	}
	i = 0;
	ft_printf("<B>\n");
	while (i < (argc - 1))
	{
		ft_printf("%d\n", stak->stack_b[i]);
		i++;
	}
}

int	main (int argc, char **argv)
{
	t_node	stacks;

	ft_printf("wasp\n");
	fill_stack(&stacks, argc, argv);
	print_stacks(&stacks, argc);
	return (0);
}