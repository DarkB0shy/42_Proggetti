<<<<<<< HEAD
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

=======
#include "../incl/push_swap.h"
#include <time.h>

void	print_arraya(t_stack *stack, int len)
{
	int	i;

	i = -1;
	ft_printf("\n\t\tSTACK A\n\n");
	while (++i < len)
		ft_printf("%d.\t\t%d\n", i, stack->a[i]);
}

void	print_arrayb(t_stack *stack, int len)
{
	int	i;

	i = 0;
	ft_printf("\n\t\tSTACK B\n\n");
	while (i < len)
		ft_printf("\t\t%d\n", stack->b[i++]);
}

void	fill_stack(int ac, char **av, int i, t_stack *stack)
{
	int j;
	
	stack->a = (int *)malloc(sizeof(int) * (ac - 1));
	stack->b = (int *)malloc(sizeof(int) * (ac - 1));
	j = 0;
	while (i < ac)
		stack->a[j++] = ft_atoi(av[i++], stack->a);
	check_doubles(stack->a, j);
	stack->len_A = j;
	stack->len_B = 0;
	stack->moves = 0;
}

t_stack	*init(int ac, char **av)
{
	char	**tmp;
	int		len;
	t_stack *stack;

	tmp = NULL;
	len = 0;
	if (ac == 2)
	{
		tmp = ft_split(av[1], ' ');
		while (tmp[len] != NULL)
			len++;
		stack = malloc(len * sizeof(t_stack));
		fill_stack(len, tmp, 0, stack);
		free(tmp);
	}
	else if (ac >= 3)
	{
		stack = malloc((ac - 1) * sizeof(t_stack));
		fill_stack(ac, av, 1, stack);
	}
	else
		return (NULL);
	return (stack);
}

void	lil_sort(t_stack *stack)
{
	if ((stack->a[0] < stack->a[1]) && (stack->a[0] < stack->a[2]) &&
	 (stack->a[1] > stack->a[2]))
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2]) &&
	 (stack->a[1] > stack->a[2]))
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if ((stack->a[0] < stack->a[1]) && (stack->a[0] > stack->a[2]) &&
	 (stack->a[1] > stack->a[2]))
		rra(stack, 1);
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] > stack->a[2]) &&
	 (stack->a[1] < stack->a[2]))
		ra(stack, 1);
	else if ((stack->a[0] > stack->a[1]) && (stack->a[0] < stack->a[2]) &&
	 (stack->a[1] < stack->a[2]))
		sa(stack, 1);
}

int	sort(t_stack *stack)
{
	if (!check_sorted_asc(stack->a, stack->len_A))
	{
		if (stack->len_A == 2)
			sa(stack, 1);
		else if (stack->len_A == 3)
			lil_sort(stack);
		else
			quick_sort_a(stack, stack->len_A, 0);
	}
	return (0);
}

int main(int ac, char **av)
{
	t_stack	*stack;
	
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
	if (ac < 2)
		return (0);
	stack = init(ac, av);
	sort(stack);
	ft_exit(stack);
<<<<<<< HEAD
	return (0);
=======
>>>>>>> bbad5cb01b7d2e2eb4b89f5e60f57827d8b47969
}
