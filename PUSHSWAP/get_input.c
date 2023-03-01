/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:23:49 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/01 15:40:17 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_exit()
{
	ft_printf("Errore\n");
	exit(2);
}

int	ft_whitespaces(const char *nptr, int *ptr_i)
{
	int	i;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i = i + 1;
	if (nptr[i] == 45)
	{
		i = i + 1;
		*ptr_i = i;
		return (-1);
	}
	else if (nptr[i] == 43)
	{
		i = i + 1;
		*ptr_i = i;
		return (1);
	}
	else if (!(nptr[i] >= 48 && nptr[i] <= 57))
	{
		*ptr_i = i;
		return (0);
	}
	*ptr_i = i;
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	j;

	result = 0;
	if (!ft_isdigit((int)nptr[result]))
		ft_exit();
	i = 0;
	j = ft_whitespaces(nptr, &i);
	while (nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
	{
		result = result * 10;
		result += nptr[i] - 48;
		i = i + 1;
	}
	result = result * j;
	return (result);
}

void	fill_stack(t_node *new_stack, int argc, char **argv)
{
	int	i;
	int	temp;

	temp = 0;
	i = 1;
	new_stack->stack_a = (int *)malloc(sizeof(int) * (argc - 1));
	new_stack->stack_b = (int *)malloc(sizeof(int) * (argc - 1));
	if (!new_stack->stack_a || !new_stack->stack_b)
		ft_exit();
	while (i < argc)
	{
		new_stack->stack_a[temp] = ft_atoi(argv[i]);
		temp++;
		i++;
	}
}