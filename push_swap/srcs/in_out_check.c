/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_out_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:08:06 by dcarassi          #+#    #+#             */
/*   Updated: 2023/03/11 16:08:08 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_exit(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	exit(0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	print_error(int *stack)
{
	free(stack);
	ft_printf("ERROR\n");
	exit(0);
}

void	check_doubles(int *a, int dim)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < dim)
	{
		while (j < dim)
		{
			if (a[i] == a[j])
				print_error(a);
			j++;
		}
		i++;
		j = i + 1;
	}
}

int	ft_atoi(char *str, int *stack)
{
	long int	r;
	int			s;
	int			i;

	r = 0;
	s = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			print_error(stack);
		r = r * 10 + str[i++] - '0';
	}
	if (r > 2147483647 || r < -2147483647)
		print_error(stack);
	return (r * s);
}
