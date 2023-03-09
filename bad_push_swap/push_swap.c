#include "push_swap.h"

void	print_arraya(t_stack *stack, int len)
{
	int	i;

	i = 0;
	ft_printf("\n\t\tSTACK A\n\n");
	while (i < len)
		ft_printf("\t\t%d\n", stack->a[i++]);
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
		stack->a[j++] = ft_atoi(av[i++]);
	stack->curr_a = j;
	stack->curr_b = 0;
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


int main(int ac, char **av)
{
	t_stack	*stack;
	
	if (ac < 2)
		return (0);
	stack = init(ac, av);
	stack->n_moves = 0;
	print_arraya(stack, stack->curr_a);
    longest_is(stack);	
	print_arraya(stack, stack->curr_a);
	ft_printf("%d\n", stack->n_moves);
	return (0);
}